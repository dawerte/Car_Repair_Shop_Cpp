#include "save.h"
#include "Clients.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <QListWidgetItem>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
Save::Save()
{

}
void Save::zapisz(QStringList &list)
{

    QFile fOut("C:/Users/Maciek/Documents/Zad_prog_2/rejestr.txt");
     if (fOut.open(QFile::WriteOnly | QFile::Text)) {
       QTextStream s(&fOut);
       for (int i = 0; i < list.size(); ++i)
         s << list.at(i) << '\n';
     }
     else {
       std::cerr << "error opening output file\n";
     }
     fOut.close();
}
