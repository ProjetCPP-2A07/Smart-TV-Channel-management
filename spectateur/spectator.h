#ifndef SPECTATOR_H
#define SPECTATOR_H

#include <QMainWindow>
#include<QSqlQueryModel>
QT_BEGIN_NAMESPACE
namespace Ui {
class Spectator;
}
QT_END_NAMESPACE

class Spectator : public QMainWindow
{
    //Q_OBJECT

public:
    /*Spectator(QWidget *parent = nullptr);
    ~Spectator();*/
    Spectator();
    Spectator(int, int ,int , QString, QString, QString, QString);
    int getCin();
    int getAge();
    int getTelephone();
    QString getNom();
    QString getPrenom();
    QString getAdresse();
    QString getEmail();

    int setCin(int);
    int setAge(int);
    int setTelephone(int);
    QString setNom(QString);
    QString setPrenom(QString);
    QString setAdresse(QString);
    QString setEmail(QString);

    bool ajouterSpectator();
    QSqlQueryModel* afficherSpectator();
    bool updateSpectator(int, QString, QString, QString, QString, int, int);
    bool deleteSpectator(int);



private:
    //Ui::Spectator *ui;
    int cin , age , telephone;
    QString nom , prenom, adresse , email ;

};
#endif // SPECTATOR_H
