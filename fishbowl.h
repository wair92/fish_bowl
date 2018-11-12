#ifndef FISHBOWL_H
#define FISHBOWL_H
#include <QVector>
#include <QObject>
#include "fish.h"

class FishBowl: public QObject
{
    Q_OBJECT
public:
    FishBowl();
    FishBowl(const FishBowl& FishBowl);
    FishBowl& operator=(const FishBowl& fish);
    void addFish(Fish fish);
    Q_INVOKABLE quint32 numberOfFish() const;
    Q_INVOKABLE QString getName() const;
    void setName(const QString& name);
    Fish getFish(quint32 index) const;
private:
    QVector<Fish> fish;
    QString name;
};

#endif // FISHBOWL_H
