#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "Clients.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;

Clients::Clients(QString a,QString b,QString c,QString d,QString e,QString f,QString g,QString h,QString i)
{
   name=a;
   surname=b;
   age=c;
   car_name=d;
   model=e;
   capacity=f;
   mileage=g;
   part_name=h;
   price=i;
}
void Clients::set_name(QString a)
{
    name=a;
}
void Clients::set_surname(QString b)
{
    surname=b;
}
void Clients::set_age(QString c)
{
    age=c;
}
void Clients::set_car_name(QString d)
{
    car_name=d;
}
void Clients::set_model(QString e)
{
    model=e;
}
void Clients::set_capacity(QString f)
{
    capacity=f;
}
void Clients::set_milelage(QString g)
{
    mileage=g;
}
void Clients::set_part_name(QString h)
{
    part_name=h;
}
void Clients::set_price(QString i)
{
    price=i;
}
void::Clients::display(){
    QString spacja1=" ",spacja2=" ",spacja3=" ",spacja4=" ",spacja5=" ",spacja6=" ",spacja7=" ",spacja8=" ";
    setText(name+=spacja1+=surname+=spacja2+=age+=spacja3+=car_name+=spacja4+=model+=spacja5+=capacity+=spacja6+=mileage+=spacja7+=part_name+=spacja8+=price);
}
QString Clients::get_name()
{
    return name;
}
QString Clients::get_surname()
{
    return surname;
}
