#include <QtCore/QCoreApplication>
#include <QtQml/QQmlApplicationEngine>
#include <QtQml/QQmlContext>
#include <QtCore/QDebug>

#include "util.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    QQmlApplicationEngine engine;
    Util util;

    engine.rootContext()->setContextProperty("util", &util);
    engine.load("main.qml");

    int rc = app.exec();
    return rc;
}
