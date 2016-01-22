#include <QtCore/QCoreApplication>
#include <QtQml/QQmlApplicationEngine>
#include <QtQml/QQmlContext>

#include "util.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    QQmlApplicationEngine engine;
    Util util;

    engine.rootContext()->setContextProperty("util", &util);
    engine.load(QUrl::fromLocalFile("main.qml"));

    int rc = app.exec();
    return rc;
}
