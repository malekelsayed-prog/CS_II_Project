/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *sidebar;
    QLabel *lblLogo;
    QLabel *lblWelcome;
    QLabel *lblAdmin;
    QLabel *lblSideText;
    QFrame *headerBox;
    QLabel *lblTitle;
    QLabel *lblSub;
    QFrame *card1;
    QLabel *lblPatientIcon;
    QLabel *lblP1;
    QLabel *label;
    QPushButton *btnAddPatient;
    QFrame *card2;
    QLabel *lblBookIcon;
    QLabel *lblP2;
    QPushButton *btnBookAppointment;
    QFrame *card3;
    QLabel *lblScheduleIcon;
    QLabel *lblP3;
    QLabel *label_2;
    QPushButton *btnViewSchedule;
    QFrame *card4;
    QLabel *lblExitIcon;
    QLabel *lblP4;
    QPushButton *btnExit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1450, 900);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"QMainWindow{\n"
"background:qlineargradient(x1:0,y1:0,x2:1,y2:1,\n"
"stop:0 #06111f, stop:1 #0a1830);\n"
"}\n"
"\n"
"QFrame{\n"
"background:#081a31;\n"
"border:1px solid #18446f;\n"
"border-radius:18px;\n"
"}\n"
"\n"
"QLabel{\n"
"color:white;\n"
"font-size:14px;\n"
"border:none;\n"
"background:transparent;\n"
"}\n"
"\n"
"QPushButton{\n"
"background:#16b8d4;\n"
"color:white;\n"
"font-size:15px;\n"
"font-weight:bold;\n"
"border:none;\n"
"border-radius:14px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background:#0ea5c0;\n"
"}\n"
"\n"
"QPushButton#btnExit{\n"
"background:#ef4444;\n"
"}\n"
"\n"
"QPushButton#btnExit:hover{\n"
"background:#dc2626;\n"
"}\n"
" "));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        sidebar = new QFrame(centralwidget);
        sidebar->setObjectName("sidebar");
        sidebar->setGeometry(QRect(20, 20, 280, 860));
        lblLogo = new QLabel(centralwidget);
        lblLogo->setObjectName("lblLogo");
        lblLogo->setGeometry(QRect(95, 45, 130, 130));
        lblLogo->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lblWelcome = new QLabel(centralwidget);
        lblWelcome->setObjectName("lblWelcome");
        lblWelcome->setGeometry(QRect(45, 420, 120, 30));
        lblAdmin = new QLabel(centralwidget);
        lblAdmin->setObjectName("lblAdmin");
        lblAdmin->setGeometry(QRect(45, 455, 220, 40));
        QFont font;
        font.setBold(true);
        lblAdmin->setFont(font);
        lblSideText = new QLabel(centralwidget);
        lblSideText->setObjectName("lblSideText");
        lblSideText->setGeometry(QRect(45, 510, 210, 70));
        headerBox = new QFrame(centralwidget);
        headerBox->setObjectName("headerBox");
        headerBox->setGeometry(QRect(325, 20, 1105, 105));
        lblTitle = new QLabel(centralwidget);
        lblTitle->setObjectName("lblTitle");
        lblTitle->setGeometry(QRect(355, 42, 520, 38));
        lblTitle->setFont(font);
        lblSub = new QLabel(centralwidget);
        lblSub->setObjectName("lblSub");
        lblSub->setGeometry(QRect(357, 82, 260, 24));
        card1 = new QFrame(centralwidget);
        card1->setObjectName("card1");
        card1->setGeometry(QRect(340, 170, 245, 330));
        lblPatientIcon = new QLabel(card1);
        lblPatientIcon->setObjectName("lblPatientIcon");
        lblPatientIcon->setGeometry(QRect(0, 50, 241, 171));
        lblPatientIcon->setPixmap(QPixmap(QString::fromUtf8("../../../../../Downloads/8CF0CAB5-9AA4-429F-A102-7DE201516C0E.png")));
        lblPatientIcon->setScaledContents(true);
        lblPatientIcon->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lblP1 = new QLabel(card1);
        lblP1->setObjectName("lblP1");
        lblP1->setGeometry(QRect(80, 20, 170, 30));
        lblP1->setFont(font);
        label = new QLabel(card1);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 200, 181, 41));
        btnAddPatient = new QPushButton(centralwidget);
        btnAddPatient->setObjectName("btnAddPatient");
        btnAddPatient->setGeometry(QRect(370, 420, 195, 52));
        card2 = new QFrame(centralwidget);
        card2->setObjectName("card2");
        card2->setGeometry(QRect(620, 160, 245, 330));
        lblBookIcon = new QLabel(centralwidget);
        lblBookIcon->setObjectName("lblBookIcon");
        lblBookIcon->setGeometry(QRect(695, 220, 90, 90));
        lblBookIcon->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lblP2 = new QLabel(centralwidget);
        lblP2->setObjectName("lblP2");
        lblP2->setGeometry(QRect(655, 185, 180, 30));
        lblP2->setFont(font);
        btnBookAppointment = new QPushButton(centralwidget);
        btnBookAppointment->setObjectName("btnBookAppointment");
        btnBookAppointment->setGeometry(QRect(645, 420, 195, 52));
        card3 = new QFrame(centralwidget);
        card3->setObjectName("card3");
        card3->setGeometry(QRect(900, 160, 245, 330));
        lblScheduleIcon = new QLabel(card3);
        lblScheduleIcon->setObjectName("lblScheduleIcon");
        lblScheduleIcon->setGeometry(QRect(-40, 30, 331, 221));
        lblScheduleIcon->setPixmap(QPixmap(QString::fromUtf8("../../../../../Downloads/E03BB6B2-D4FC-48A9-9A47-7A9BB67E7DFE.png")));
        lblScheduleIcon->setScaledContents(true);
        lblScheduleIcon->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lblP3 = new QLabel(card3);
        lblP3->setObjectName("lblP3");
        lblP3->setGeometry(QRect(70, 20, 150, 30));
        lblP3->setFont(font);
        label_2 = new QLabel(card3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 230, 161, 20));
        btnViewSchedule = new QPushButton(centralwidget);
        btnViewSchedule->setObjectName("btnViewSchedule");
        btnViewSchedule->setGeometry(QRect(920, 420, 195, 52));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(170, 0, 255, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush2(QColor(212, 127, 255, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        QBrush brush3(QColor(191, 63, 255, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        QBrush brush4(QColor(85, 0, 127, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        QBrush brush5(QColor(113, 0, 170, 255));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush2);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
        QBrush brush8(QColor(0, 0, 0, 127));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
        QBrush brush9(QColor(85, 0, 127, 127));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
        QBrush brush10(QColor(195, 76, 255, 255));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        btnViewSchedule->setPalette(palette);
        card4 = new QFrame(centralwidget);
        card4->setObjectName("card4");
        card4->setGeometry(QRect(1170, 160, 245, 330));
        lblExitIcon = new QLabel(centralwidget);
        lblExitIcon->setObjectName("lblExitIcon");
        lblExitIcon->setGeometry(QRect(1245, 220, 90, 90));
        lblExitIcon->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lblP4 = new QLabel(centralwidget);
        lblP4->setObjectName("lblP4");
        lblP4->setGeometry(QRect(1260, 185, 60, 30));
        lblP4->setFont(font);
        btnExit = new QPushButton(centralwidget);
        btnExit->setObjectName("btnExit");
        btnExit->setGeometry(QRect(1195, 420, 195, 52));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hospital Management System", nullptr));
        lblLogo->setText(QCoreApplication::translate("MainWindow", "LOGO", nullptr));
        lblWelcome->setText(QCoreApplication::translate("MainWindow", "WELCOME", nullptr));
        lblAdmin->setText(QCoreApplication::translate("MainWindow", "Admin Panel", nullptr));
        lblSideText->setText(QCoreApplication::translate("MainWindow", "Manage patients,\n"
"appointments and schedules.", nullptr));
        lblTitle->setText(QCoreApplication::translate("MainWindow", "Hospital Management System", nullptr));
        lblSub->setText(QCoreApplication::translate("MainWindow", "Premium Medical Dashboard", nullptr));
        lblPatientIcon->setText(QString());
        lblP1->setText(QCoreApplication::translate("MainWindow", "Add Patient", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Add new patient", nullptr));
        btnAddPatient->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        lblBookIcon->setText(QCoreApplication::translate("MainWindow", "ICON", nullptr));
        lblP2->setText(QCoreApplication::translate("MainWindow", "Book Appointment", nullptr));
        btnBookAppointment->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        lblScheduleIcon->setText(QString());
        lblP3->setText(QCoreApplication::translate("MainWindow", "View Schedule", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "View Schedule Info", nullptr));
        btnViewSchedule->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        lblExitIcon->setText(QCoreApplication::translate("MainWindow", "ICON", nullptr));
        lblP4->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        btnExit->setText(QCoreApplication::translate("MainWindow", "Close App", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
