/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *Employer;
    QWidget *Ajouter_2;
    QGroupBox *groupBox_2;
    QLabel *ID_2;
    QLabel *Nom_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *pb_ajouter_2;
    QPushButton *BoutonModifier_2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *le_id_2;
    QLineEdit *le_nom_2;
    QLineEdit *le_prenom_2;
    QLineEdit *le_mail_2;
    QLineEdit *le_adresse_2;
    QLineEdit *le_num_2;
    QLineEdit *age;
    QWidget *Gerer_2;
    QLabel *label_3;
    QLineEdit *LineSupprimer_2;
    QPushButton *BoutonSupprimer_2;
    QLabel *label_4;
    QLineEdit *LineChercher_2;
    QTableView *tableView_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1125, 711);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Employer = new QTabWidget(centralwidget);
        Employer->setObjectName("Employer");
        Employer->setEnabled(true);
        Employer->setGeometry(QRect(0, 0, 1311, 1071));
        QFont font;
        font.setFamilies({QString::fromUtf8("Adobe Fan Heiti Std")});
        font.setPointSize(8);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(true);
        Employer->setFont(font);
        Employer->setCursor(QCursor(Qt::ArrowCursor));
        Employer->setTabletTracking(false);
        Employer->setAutoFillBackground(false);
        Employer->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 127);"));
        Employer->setDocumentMode(false);
        Employer->setTabsClosable(false);
        Employer->setMovable(false);
        Employer->setTabBarAutoHide(false);
        Ajouter_2 = new QWidget();
        Ajouter_2->setObjectName("Ajouter_2");
        groupBox_2 = new QGroupBox(Ajouter_2);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(0, 0, 1121, 791));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Adobe Fan Heiti Std")});
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        groupBox_2->setFont(font1);
        groupBox_2->setTabletTracking(false);
        groupBox_2->setAutoFillBackground(false);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 127);"));
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        ID_2 = new QLabel(groupBox_2);
        ID_2->setObjectName("ID_2");
        ID_2->setGeometry(QRect(120, 80, 22, 19));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(true);
        font2.setUnderline(false);
        ID_2->setFont(font2);
        Nom_2 = new QLabel(groupBox_2);
        Nom_2->setObjectName("Nom_2");
        Nom_2->setGeometry(QRect(112, 143, 45, 19));
        Nom_2->setFont(font2);
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(112, 203, 80, 19));
        label_10->setFont(font2);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(112, 264, 141, 19));
        label_11->setFont(font2);
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(112, 325, 86, 19));
        label_12->setFont(font2);
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(112, 386, 151, 19));
        label_13->setFont(font2);
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(112, 446, 151, 19));
        label_14->setFont(font2);
        pb_ajouter_2 = new QPushButton(groupBox_2);
        pb_ajouter_2->setObjectName("pb_ajouter_2");
        pb_ajouter_2->setGeometry(QRect(750, 180, 241, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("8514oem")});
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setUnderline(false);
        pb_ajouter_2->setFont(font3);
        pb_ajouter_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-style: solid;\n"
"   border-width: 2px;\n"
"   border-color: #9999aa;\n"
"   border-radius: 10px;\n"
"   color: black;\n"
"	background-color : qlineargradient(spread:pad, x1:0.07, y1:0.159091, x2:0.552174, y2:0.705, stop:0 rgba(36, 63, 130, 1), stop:1 rgba(114, 34, 127, 1))\n"
"   \n"
"}\n"
"QPushButton:enabled {\n"
"      background-color:qlineargradient(spread:pad, x1:0.07, y1:0.159091, x2:0.552174, y2:0.705, stop:0 rgba(36, 63, 130, 1), stop:1 rgba(114, 34, 127, 1)) ;\n"
"      color: white;\n"
"}\n"
" QPushButton:pressed{\n"
"    background-color:#c24e4e;\n"
"      color: white;\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"     background-color: #c24e4e ;\n"
"      color: white;\n"
"}\n"
" QPushButton:disabled{\n"
"     background-color: #c24e4e ;\n"
"      color: white;\n"
"}\n"
"\n"
""));
        BoutonModifier_2 = new QPushButton(groupBox_2);
        BoutonModifier_2->setObjectName("BoutonModifier_2");
        BoutonModifier_2->setGeometry(QRect(750, 280, 241, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("8514oem")});
        BoutonModifier_2->setFont(font4);
        BoutonModifier_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-style: solid;\n"
"   border-width: 2px;\n"
"   border-color: #9999aa;\n"
"   border-radius: 10px;\n"
"   color: black;\n"
"	background-color : qlineargradient(spread:pad, x1:0.07, y1:0.159091, x2:0.552174, y2:0.705, stop:0 rgba(254, 84, 0, 255), stop:1 rgba(255, 255, 255, 255))\n"
"   \n"
"}\n"
"QPushButton:enabled {\n"
"      background-color:qlineargradient(spread:pad, x1:0.07, y1:0.159091, x2:0.552174, y2:0.705, stop:0 rgba(36, 63, 130, 1), stop:1 rgba(114, 34, 127, 1)) ;\n"
"      color: white;\n"
"}\n"
" QPustButton:pressed{\n"
"    background-color:#c24e4e;\n"
"      color: white;\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"     background-color: #c24e4e ;\n"
"      color: white;\n"
"}\n"
" QPushButton:disabled{\n"
"     background-color: #c24e4e ;\n"
"      color: white;\n"
"}\n"
"\n"
""));
        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(300, 50, 173, 451));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        le_id_2 = new QLineEdit(layoutWidget_2);
        le_id_2->setObjectName("le_id_2");
        le_id_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(le_id_2);

        le_nom_2 = new QLineEdit(layoutWidget_2);
        le_nom_2->setObjectName("le_nom_2");
        le_nom_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(le_nom_2);

        le_prenom_2 = new QLineEdit(layoutWidget_2);
        le_prenom_2->setObjectName("le_prenom_2");
        le_prenom_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(le_prenom_2);

        le_mail_2 = new QLineEdit(layoutWidget_2);
        le_mail_2->setObjectName("le_mail_2");
        le_mail_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(le_mail_2);

        le_adresse_2 = new QLineEdit(layoutWidget_2);
        le_adresse_2->setObjectName("le_adresse_2");
        le_adresse_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(le_adresse_2);

        le_num_2 = new QLineEdit(layoutWidget_2);
        le_num_2->setObjectName("le_num_2");
        le_num_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(le_num_2);

        age = new QLineEdit(layoutWidget_2);
        age->setObjectName("age");
        age->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(age);

        Employer->addTab(Ajouter_2, QString());
        Gerer_2 = new QWidget();
        Gerer_2->setObjectName("Gerer_2");
        label_3 = new QLabel(Gerer_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 80, 171, 31));
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8(""));
        LineSupprimer_2 = new QLineEdit(Gerer_2);
        LineSupprimer_2->setObjectName("LineSupprimer_2");
        LineSupprimer_2->setGeometry(QRect(230, 80, 181, 31));
        LineSupprimer_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        BoutonSupprimer_2 = new QPushButton(Gerer_2);
        BoutonSupprimer_2->setObjectName("BoutonSupprimer_2");
        BoutonSupprimer_2->setGeometry(QRect(440, 80, 171, 31));
        BoutonSupprimer_2->setFont(font3);
        BoutonSupprimer_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"   border-style: solid;\n"
"   border-width: 2px;\n"
"   border-color: #9999aa;\n"
"   border-radius: 10px;\n"
"   color: black;\n"
"	background-color : qlineargradient(spread:pad, x1:0.07, y1:0.159091, x2:0.552174, y2:0.705, stop:0 rgba(36, 63, 130, 1), stop:1 rgba(114, 34, 127, 1))\n"
"   \n"
"}\n"
"QPushButton:enabled {\n"
"      background-color:qlineargradient(spread:pad, x1:0.07, y1:0.159091, x2:0.552174, y2:0.705, stop:0 rgba(36, 63, 130, 1), stop:1 rgba(114, 34, 127, 1)) ;\n"
"      color: white;\n"
"}\n"
" QPustButton:pressed{\n"
"    background-color:#c24e4e;\n"
"      color: white;\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"     background-color: #c24e4e ;\n"
"      color: white;\n"
"}\n"
" QPushButton:disabled{\n"
"     background-color: #c24e4e ;\n"
"      color: white;\n"
"}\n"
"\n"
""));
        label_4 = new QLabel(Gerer_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 140, 151, 31));
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8(""));
        LineChercher_2 = new QLineEdit(Gerer_2);
        LineChercher_2->setObjectName("LineChercher_2");
        LineChercher_2->setGeometry(QRect(230, 140, 181, 31));
        LineChercher_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tableView_2 = new QTableView(Gerer_2);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(30, 210, 1211, 401));
        tableView_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Employer->addTab(Gerer_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        Employer->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "AJOUTER", nullptr));
        ID_2->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        Nom_2->setText(QCoreApplication::translate("MainWindow", "NOM:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "PRENOM:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "ADRESSE MAIL:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "ADRESSE:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "NUM TELEPHONE:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "AGE:", nullptr));
        pb_ajouter_2->setText(QCoreApplication::translate("MainWindow", "AJOUTER", nullptr));
        BoutonModifier_2->setText(QCoreApplication::translate("MainWindow", "MODIFIER", nullptr));
        Employer->setTabText(Employer->indexOf(Ajouter_2), QCoreApplication::translate("MainWindow", "Ajouter spectateur", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Supprimer par ID:", nullptr));
        BoutonSupprimer_2->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Chercher par ID:", nullptr));
        Employer->setTabText(Employer->indexOf(Gerer_2), QCoreApplication::translate("MainWindow", "Gerer  spectateurs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
