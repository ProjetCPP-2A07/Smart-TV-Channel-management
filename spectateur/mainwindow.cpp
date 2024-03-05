#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlTableModel>
#include "spectator.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), spectator(new Spectator)
{
    ui->setupUi(this);

    connect(ui->pb_ajouter_2, SIGNAL(clicked()), this, SLOT(pb_ajouter_2()));
    connect(ui->BoutonSupprimer_2, SIGNAL(clicked()), this, SLOT(handleBoutonSupprimer2Clicked()));

    // Populate the TableView with initial data
    QSqlTableModel *model = new QSqlTableModel(this);
    model->setTable("SPECTATEUR"); // Replace with your actual table name
    model->select(); // Load data from the database
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

    Spectator newSpectator(cin, age, phone, adresse, email, nom, prenom);

    // Call the ajouterSpectator function from the Spectator class
    if (newSpectator.ajouterSpectator()) {
        // Successfully added the spectator, update UI or show a message
        QSqlTableModel *model = static_cast<QSqlTableModel*>(ui->tableView_2->model());
        model->select(); // Refresh data from the database
        QMessageBox::information(this, "Success", "Spectator added successfully");
    } else {
        // Failed to add the spectator, handle the error (provide specific message)
        QMessageBox::critical(this, "Error", "Failed to add spectator. Check data or database connection.");
    }
}

void MainWindow::on_BoutonSupprimer_2_clicked()
{
    int idToBeDeleted = ui->LineSupprimer_2->text().toInt();

    // Call the deleteSpectator function from the Spectator class
    if (spectator->deleteSpectator(idToBeDeleted)) {
        // Successfully deleted the spectator, update UI or show a message
        QSqlTableModel *model = static_cast<QSqlTableModel*>(ui->tableView_2->model());
        model->select(); // Refresh data from the database
        QMessageBox::information(this, "Success", "Spectator deleted successfully");
    } else {
        // Failed to delete the spectator, handle the error (provide specific message)
        QMessageBox::critical(this, "Error", "Failed to delete spectator. Check ID or database connection.");
    }
}
// Implementation for on_BoutonSupprimer_2 slot
void MainWindow::handleBoutonSupprimer2Clicked()
{
    // Your code here to handle the button click
    QMessageBox::information(this, "Button Clicked", "BoutonSupprimer_2 Clicked!");
}



