#ifndef TABLE_H
#define TABLE_H
#include <QVector>
#include <QObject>
#include "fishbowl.h"

class Table: public QObject
{
    Q_OBJECT
public:
    Table();
    void addFishBowl(FishBowl fishbowl);
    Q_INVOKABLE quint32 numberOfFishBowls() const;
    Q_INVOKABLE quint32 getNumberOfFishInFishBowl(quint32 index) const;
    Q_INVOKABLE QString getFishBowlName(quint32 index) const;
    Q_INVOKABLE QString getFishState(quint32 fishBowl, quint32 fish) const;
private:
    QVector<FishBowl> fishBowls;
};

#endif // TABLE_H
