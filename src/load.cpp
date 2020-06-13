#include "load.h"
#include "Clients.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <QListWidgetItem>
#include <QDebug>
#include "errors.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;
Load::Load()
{

}
void Load::wczytaj(QListWidget* Q, QStringList &list)//pobiera ksiazki z bazy i umieszcza w wektorze
{
    fstream file;
    //QFile file;
    string name, surname, age, car_name, model, capacity,mileage,part_name, price;
    //int dostepnosc;
   // QFile file("C:/Users/pah19/Documents/nienazwany2/src_baza.txt");
    //if(!file.open(QFile::ReadOnly | QFile::Text))
      //  cout<<"blad!!111"<<endl;

    file.open("C:/Users/Maciek/Documents/Zad_prog_2/rejestr.txt", ios::in);
    if(file.good()==false)
    {
        exit(0);
    }
    while(file)
    {
        file>>name>>surname>>age>>car_name>>model>>capacity>>mileage>>part_name>>price;

      //  baza>>dostepnosc;
        QString name_ = QString::fromStdString(name);
        QString surname_ = QString::fromStdString(surname);
        QString age_ = QString::fromStdString(age);
        QString car_name_ = QString::fromStdString(car_name);
        QString model_ = QString::fromStdString(model);
        QString capacity_ = QString::fromStdString(capacity);
        QString mileage_ = QString::fromStdString(mileage);
        QString part_name_ = QString::fromStdString(part_name);
        QString price_ = QString::fromStdString(price);
        if(!file)
        break;
        Clients* ptr= new Clients(name_, surname_, age_,car_name_,model_,capacity_,mileage_,part_name_,price_);
        ptr->display();
        Q->clear();
        QListWidgetItem *item=ptr;
        list<< item->text();
        Q->addItems(list);
      //  ksiazki.push_back(new Ksiazka(autor, tytul, cena, dostepnosc));
    };
    file.close();
   // return(Q);
};
