#ifndef FISH_H
#define FISH_H
#include <QObject>
#include <QString>

class Fish: public QObject
{
    Q_OBJECT
public:
    Fish();
    Fish(const Fish& fish);
    Fish& operator=(const Fish& fish);
    Q_INVOKABLE QString getName() const;
    Q_INVOKABLE QString getState() const;
    void setName(const QString& name);
    void setState(const QString& state);
private:
    QString name;
    QString state;
};

#endif // FISH_H
