#include "table.h"
#include <QDebug>

Table::Table()
{

}

void Table::addFishBowl(FishBowl fishbowl)
{
    fishBowls.push_back(fishbowl);
}

quint32 Table::numberOfFishBowls() const
{
    return fishBowls.size();
}

quint32 Table::getNumberOfFishInFishBowl(quint32 index) const
{
    qDebug() << "Calling fction with index:" << index << "FishBall number: " << fishBowls.size();
    if(index >= fishBowls.size())
        return 0;
    else{
        qDebug() << "Number of Fish: " << fishBowls[index].numberOfFish();
        return fishBowls[index].numberOfFish();
    }
}

QString Table::getFishBowlName(quint32 index) const
{
    if(index >= fishBowls.size()){
        return "";
    }
    else{
        auto fb = fishBowls[index];
        return fb.getName();
    }
}

QString Table::getFishState(quint32 fishBowl, quint32 fish) const
{
    if(fishBowl >= fishBowls.size())
        return 0;
    else{
        auto fishB = fishBowls[fishBowl];
        qDebug() << "Bowl:" << fishBowl << "fish:" << fish;
        return fishB.getFish(fish).getState();
    }
}
