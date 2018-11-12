#include "fish.h"
#include <QDebug>

Fish::Fish()
{

}

Fish::Fish(const Fish& fish)
{
    this->name = fish.name;
    this->state = fish.state;
}

Fish &Fish::operator=(const Fish &fish)
{
    name = fish.name;
    state = fish.state;
    return *this;
}

QString Fish::getName() const
{
    return name;
}

QString Fish::getState() const
{
    return state;
}

void Fish::setName(const QString &name)
{
    this->name = name;
}

void Fish::setState(const QString &state)
{
    this->state = state;
}
