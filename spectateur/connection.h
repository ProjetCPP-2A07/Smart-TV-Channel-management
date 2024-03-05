#ifndef CONNECTION_H
#define CONNECTION_H
#include <QsqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class Connection
{
public:
    Connection();
        //fermerconnexion();
    bool createconnect();
};

#endif // CONNECTION_H
