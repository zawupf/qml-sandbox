#include "util.h"

#include <QtCore/QCoreApplication>
#include <QtCore/QTimer>
#include <QtCore/QDebug>

Util::Util(QObject *parent) : QObject(parent)
{

}

void Util::init(QJSEngine &engine)
{
    _newArrayBufferFunc = engine.evaluate(
                "(function (length) {return new ArrayBuffer(length);})");
}

void Util::readBuffer(QVariant value) const
{
    qDebug() << "Util.readBuffer:" << value;
}

void Util::writeBuffer(QVariant value) const
{
    qDebug() << "Util.writeBuffer:" << value;
    const QByteArray buffer = value.toByteArray();
    char* b = const_cast<char*>(buffer.data()); // <- EVEL!!!
    b[0] = 4;
    qDebug() << "Util.writeBuffer:" << value;
}

void Util::quit() const
{
    qDebug() << "Util.quit:";
    QTimer::singleShot(100,
                       QCoreApplication::instance(),
                       &QCoreApplication::quit);
}

QJSValue Util::newArrayBuffer(int length)
{
    QJSValue value = _newArrayBufferFunc.call(QJSValueList() << length);

    // init buffer
    QVariant v = value.toVariant();
    const QByteArray buffer = v.toByteArray();
    char* b = const_cast<char*>(buffer.data()); // <- EVEL!!!
    for (int i = 0; i != length; ++i) {
        b[i] = i % 256;
    }
    qDebug() << "Util.newArrayBuffer:" << v;

    return value;
}
