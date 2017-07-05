#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QObject>
#include "speeddeal.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    engine.load(QUrl(QLatin1String("qrc:/main.qml")));
    QQmlContext *context = engine.rootContext();
    SpeedDeal SD(engine.rootObjects());
    context->setContextProperty("Speeddeal",&SD);

    return app.exec();
}
