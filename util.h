#ifndef UTIL_H
#define UTIL_H

#include <QtCore/QObject>
#include <QtCore/QVariant>

class Util : public QObject
{
    Q_OBJECT
public:
    explicit Util(QObject *parent = 0);

signals:

public slots:
    void readBuffer(QVariant value) const;
    void writeBuffer(QVariant value) const;

    void quit(void) const;
};

#endif // UTIL_H
