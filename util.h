#ifndef UTIL_H
#define UTIL_H

#include <QtCore/QObject>
#include <QtCore/QVariant>
#include <QtQml/QJSValue>
#include <QtQml/QJSEngine>

class Util : public QObject
{
    Q_OBJECT
public:
    explicit Util(QObject *parent = 0);
    void init(QJSEngine &engine);

signals:

public slots:
    void readBuffer(QVariant value) const;
    void writeBuffer(QVariant value) const;

    void quit(void) const;

    QJSValue newArrayBuffer(int length);

private:
    QJSValue _newArrayBufferFunc;
};

#endif // UTIL_H
