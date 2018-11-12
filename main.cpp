#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QDebug>
#include "table.h"
#include "fishbowl.h"
#include "fish.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    Table table;

    Fish fish1;
    fish1.setState("alive");
    Fish fish2;
    fish2.setState("dead");
    Fish fish3;
    fish3.setState("alive");
    Fish fish4;
    fish4.setState("dead");
    Fish fish5;
    Fish fish6;

    FishBowl fishbowl1;
    FishBowl fishbowl2;

    fishbowl1.addFish(fish1);
    fishbowl1.addFish(fish2);

    fishbowl2.addFish(fish3);
    fishbowl2.addFish(fish4);
    fishbowl2.addFish(fish5);
    fishbowl2.addFish(fish6);

    fishbowl1.setName("Akvarium 1");
    fishbowl2.setName("Akvarium 2");

    table.addFishBowl(fishbowl1);
    table.addFishBowl(fishbowl2);

    engine.rootContext()->setContextProperty("table", &table);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;




    return app.exec();
}
