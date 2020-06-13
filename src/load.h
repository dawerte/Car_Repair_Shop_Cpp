#ifndef LOAD_H
#define LOAD_H
#include <QListWidgetItem>
#include <QListWidget>
#include <QLineEdit>
#include <QString>
#include <QList>
#include <QtDebug>

class Load :public QListWidgetItem
{
public:
    Load();
    void wczytaj(QListWidget*, QStringList &);
private:
};

#endif // LOAD_H
