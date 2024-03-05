#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "spectator.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void pb_ajouter_2();
    void handleBoutonSupprimer2Clicked();
    void on_BoutonSupprimer_2_clicked();

private:
    Ui::MainWindow *ui;
    std::unique_ptr<Spectator> spectator; // Using std::unique_ptr for memory management
};

#endif // MAINWINDOW_H
