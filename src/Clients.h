#ifndef CLIENTS_H
#define CLIENTS_H
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <QListWidgetItem>
using namespace std;
class Clients: public QListWidgetItem
    {
    public:
        Clients(QString="a",QString="b",QString="1",QString="c",QString="2.0",QString="240",QString="w",QString="a",QString="a");
        void adding();
        void set_name(QString a);
        void set_surname(QString);
        void set_age(QString);
        void set_car_name(QString);
        void set_model(QString);
        void set_capacity(QString);
        void set_milelage(QString);
        void set_part_name(QString);
        void set_price(QString);
        void display();
        QString get_name();
        QString get_surname();
    private:
        QString name;
        QString surname;
        QString age;
        int counter;
        QString car_name;
        QString model;
        QString capacity;
        QString mileage;
        QString part_name;
        QString price;
    };
#endif // CLIENTS_H
