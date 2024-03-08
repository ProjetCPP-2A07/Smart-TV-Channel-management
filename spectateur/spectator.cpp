#include "spectator.h"
#include <QSqlQuery>
Spectator::Spectator(){
    cin = 0;
    age = 0;
    telephone = 0;
    adresse = "";
    email = "";
    nom = "";
    prenom = "";
}
Spectator::Spectator(int cin,int age, int telephone, QString adresse, QString email, QString nom, QString prenom  )
{
    this ->cin = cin;
    this ->age = age;
    this ->telephone = telephone;
    this ->adresse = adresse;
    this ->email = email;
    this ->nom = nom;
    this ->prenom = prenom;
}
int Spectator::getCin()
{
    return cin;
}
int Spectator::getAge()
{
    return age;
}
int Spectator::getTelephone()
{
    return telephone;
}
QString Spectator::getNom()
{
    return nom;
}
QString Spectator::getPrenom()
{
    return prenom;
}
QString Spectator::getAdresse()
{
    return adresse;
}
QString Spectator::getEmail()
{
    return email;
}
bool Spectator::ajouterSpectator()
{

    QSqlQuery query;
    QString id_string = QString::number(cin);
    QString tel_string = QString::number(telephone);
    QString age_string = QString::number(age);


    //QString num_string = QString::number(numtelephone);

    query.prepare("INSERT INTO SPECTATEUR (ID, nom, prenom, email, adresse, telephone,age) "
                  "VALUES (:ID, :nom, :prenom, :email, :adresse, :telephone, :age)");
    query.bindValue(":ID", id_string);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);
    query.bindValue(":adresse", adresse);
    query.bindValue(":telephone", tel_string);
    query.bindValue(":age", age_string);
    return  query.exec();
}
QSqlQueryModel* Spectator::afficherSpectator()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM SPECTATEUR ORDER BY ID ASC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("email"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("adresse"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("telephone"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("age"));

    return model;
}

bool Spectator::deleteSpectator(int ID)
{
    QSqlQuery query;
    QString id_string = QString::number(ID);
    query.prepare(" Delete from SPECTATEUR where ID=:ID ");
    query.bindValue(":ID", id_string);

    return  query.exec();
}
bool Spectator::updateSpectator(int ID,QString nom,QString prenom ,QString email,QString adresse,int telephone,int age )
{
    QSqlQuery query;

    query.prepare("UPDATE SPECTATEUR SET NOM=:nom, PRENOM=:prenom, EMAIL=:email, ADRESSE=:adresse, AGE=:age, TELEPHONE=:telephone WHERE ID=:ID");

    query.bindValue(":ID", ID);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);
    query.bindValue(":adresse", adresse);
    query.bindValue(":telephone", telephone);
    query.bindValue(":age", age);

    return query.exec();
}






