#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlTableModel>
#include "spectator.h"

#include<QIntValidator>
#include<QModelIndex>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), spectator(new Spectator)
{
    ui->setupUi(this);

    connect(ui->pb_ajouter_2, SIGNAL(clicked()), this, SLOT(pb_ajouter_2()));
    connect(ui->BoutonSupprimer_2, SIGNAL(clicked()), this, SLOT(handleBoutonSupprimer2Clicked()));

    ui->le_id_2->setValidator( new QIntValidator(0, 99999, this));
    //ui->le_num->setValidator( new QIntValidator(20000000, 99999999 , this));
    ui->le_num_2->setValidator(new QRegExpValidator(QRegExp("^\\d{8}$"), this));
    // Populate the TableView with initial data
    QSqlTableModel *model = new QSqlTableModel(this);
    model->setTable("SPECTATEUR");
    model->select();
    ui->tableView_2->setModel(model);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pb_ajouter_2()
{
    // Extract data from UI elements
    int cin = ui->le_id_2->text().toInt();
    QString nom = ui->le_nom_2->text();
    QString prenom = ui->le_prenom_2->text();
    QString email = ui->le_mail_2->text();
    QString adresse = ui->le_adresse_2->text();
    int phone = ui->le_num_2->text().toInt();
    int age = ui->age->text().toInt();

    //Spectator newSpectator(cin, age, phone, adresse, email, nom, prenom);
    Spectator S(cin,age,phone,adresse,email,nom,prenom);
    QRegularExpression re("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    QRegularExpressionMatch match = re.match(email);

    // QString num_string = QString::number(numtelephone);
    QRegularExpression re1("^(2|3|4|5|7)\\d{7}$");
   // QRegularExpressionMatch match1 = re1.match(phone);

    QRegularExpression re2("^[A-Za-z\\s]{1,20}$");
    QRegularExpressionMatch match2 = re2.match(nom);
    QRegularExpressionMatch match3 = re2.match(prenom);

    if ((!match.hasMatch()) ||  (!match2.hasMatch()) || (!match3.hasMatch())) {
        if(!match.hasMatch())
            QMessageBox::critical(this, "Error", "Invalid email format.");
        // else if(!match1.hasMatch())
          //  QMessageBox::critical(this, "Error", "Invalid numero telephone");
        else if((!match2.hasMatch()))
            QMessageBox::critical(this, "Error", "Invalid Nom format.");
        else if((!match3.hasMatch()))
            QMessageBox::critical(this, "Error", "Invalid Prenom format.");

    }

    else{
    bool test=S.ajouterSpectator();
    if(test)
    {
        QMessageBox::information(nullptr , QObject::tr("OK"),
                                 QObject::tr("Ajout effectué\n ""Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableView_2->setModel(S.afficherSpectator());

        ui->le_id_2->setText("");
        ui->le_nom_2->setText("");
        ui->le_prenom_2->setText("");
        ui->le_mail_2->setText("");
        ui->le_adresse_2->setText("");
        ui->le_num_2->setText("");
        ui->age->setText("");



    }

    else
        QMessageBox::critical(nullptr , QObject::tr("Not OK"),
                              QObject::tr("Ajout non effectué.\n" " Click Cancel to exit."), QMessageBox::Cancel);
    // The email input is valid. Proceed with the confirmation.
    }
}


void MainWindow::on_BoutonSupprimer_2_clicked()
{

    if(selected_service == -1)
    {
        QMessageBox::warning(this, "Error", "Nothing is selected!");
        return;
    }

    int id = ui->tableView_2->model()->index(selected_service,0).data().toInt();

    if(S.deleteSpectator(id))
    {
        QMessageBox::information(this, "Success", "Spectator deleted successfull");
        selected_service=-1;
        ui->tableView_2->setModel(S.afficherSpectator());
    }
    else
    {
        QMessageBox::warning(this, "Error", "Error while deleting a Spectator ");
    }
}




void MainWindow::on_BoutonModifier_2_clicked()
{
    int cin = ui->le_id_2->text().toInt();
    QString nom = ui->le_nom_2->text();
    QString prenom = ui->le_prenom_2->text();
    QString email = ui->le_mail_2->text();
    QString adresse = ui->le_adresse_2->text();
    int phone = ui->le_num_2->text().toInt();
    int age = ui->age->text().toInt();

    QRegularExpression re("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    QRegularExpressionMatch match = re.match(email);

    // QString num_string = QString::number(numtelephone);
    QRegularExpression re1("^(2|3|4|5|7)\\d{7}$");
    // QRegularExpressionMatch match1 = re1.match(phone);

    QRegularExpression re2("^[A-Za-z\\s]{1,20}$");
    QRegularExpressionMatch match2 = re2.match(nom);
    QRegularExpressionMatch match3 = re2.match(prenom);

    if ((!match.hasMatch()) ||  (!match2.hasMatch()) || (!match3.hasMatch())) {
        if(!match.hasMatch())
            QMessageBox::critical(this, "Error", "Invalid email format.");
        // else if(!match1.hasMatch())
        //  QMessageBox::critical(this, "Error", "Invalid numero telephone");
        else if((!match2.hasMatch()))
            QMessageBox::critical(this, "Error", "Invalid Nom format.");
        else if((!match3.hasMatch()))
            QMessageBox::critical(this, "Error", "Invalid Prenom format.");

    }
    else{
    bool test=S.updateSpectator(cin,nom, prenom, email , adresse,phone ,age);
    if(test)
    {
        QMessageBox::information(nullptr , QObject::tr("OK"),
                                 QObject::tr("Modification effectué\n ""Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableView_2->setModel(S.afficherSpectator());

        ui->le_id_2->setText("");
        ui->le_nom_2->setText("");
        ui->le_prenom_2->setText("");
        ui->le_mail_2->setText("");
        ui->le_adresse_2->setText("");
        ui->le_num_2->setText("");
        ui->age->setText("");


    }
    else
        QMessageBox::critical(nullptr , QObject::tr("Not OK"),
                              QObject::tr("Modification non effectué.\n" " Click Cancel to exit."), QMessageBox::Cancel);
    }
}





void MainWindow::on_tableView_2_clicked(const QModelIndex &index)
{
     selected_service = index.row();
}


void MainWindow::on_pb_gotomodifier_clicked()
{
    if(selected_service == -1)
    {
        QMessageBox::warning(this, "Error", "Nothing is selected!");
        return;
    }
    // long numtelephone=ui->le_num->text().toInt();
    ui->le_id_2->setText(ui->tableView_2->model()->index(selected_service,0).data().toString());
    ui->le_nom_2->setText(ui->tableView_2->model()->index(selected_service,1).data().toString());
    ui->le_prenom_2->setText(ui->tableView_2->model()->index(selected_service,2).data().toString());
    ui->le_mail_2->setText(ui->tableView_2->model()->index(selected_service,3).data().toString());
    ui->le_adresse_2->setText(ui->tableView_2->model()->index(selected_service,4).data().toString());
    ui->le_num_2->setText(ui->tableView_2->model()->index(selected_service,5).data().toString());
    ui->age->setText(ui->tableView_2->model()->index(selected_service,6).data().toString());

        //ui->le_passeword->setText(ui->tab_employe->model()->index(selected_service,7).data().toString());

    //ui->stackedWidget->setCurrentIndex(2);
    ui->Employer->setCurrentWidget(ui->Ajouter_2);
}

