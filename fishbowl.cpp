#include "fishbowl.h"
#include <QDebug>

FishBowl::FishBowl()
{

}

FishBowl::FishBowl(const FishBowl& fishBowl)
{
    this->fish = fishBowl.fish;
    this->name = fishBowl.name;
}

FishBowl &FishBowl::operator=(const FishBowl &fishBowl)
{
    this->fish = fishBowl.fish;
    this->name = fishBowl.name;
    return *this;
}

void FishBowl::addFish(Fish fish)
{
    this->fish.push_back(fish);
}

quint32 FishBowl::numberOfFish() const
{
    return this->fish.size();
}

QString FishBowl::getName() const
{
    return name;
}

void FishBowl::setName(const QString& name)
{
    this->name = name;
}

Fish FishBowl::getFish(quint32 index) const
{
    qDebug() << "Calling fish:" << index << "Number of fish in Bowl: " << fish.size();
    if(index >= fish.size())
        return Fish();
    else{
        return fish[index];
    }
}
