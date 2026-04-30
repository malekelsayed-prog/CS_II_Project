/********************************************************************************
** Form generated from reading UI file 'bookingdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKINGDIALOG_H
#define UI_BOOKINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BookingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblTitle;
    QFormLayout *formLayout;
    QLabel *label1;
    QLineEdit *txtPatientId;
    QLabel *label2;
    QComboBox *cmbDoctor;
    QLabel *label3;
    QLineEdit *txtDepartment;
    QLabel *label4;
    QDateEdit *dateAppointment;
    QLabel *label5;
    QComboBox *cmbSlot;
    QHBoxLayout *buttonLayout;
    QPushButton *btnBook;
    QPushButton *btnCancel;

    void setupUi(QDialog *BookingDialog)
    {
        if (BookingDialog->objectName().isEmpty())
            BookingDialog->setObjectName("BookingDialog");
        BookingDialog->resize(650, 500);
        verticalLayout = new QVBoxLayout(BookingDialog);
        verticalLayout->setObjectName("verticalLayout");
        lblTitle = new QLabel(BookingDialog);
        lblTitle->setObjectName("lblTitle");
        lblTitle->setAlignment(Qt::AlignCenter);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        lblTitle->setFont(font);

        verticalLayout->addWidget(lblTitle);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label1 = new QLabel(BookingDialog);
        label1->setObjectName("label1");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label1);

        txtPatientId = new QLineEdit(BookingDialog);
        txtPatientId->setObjectName("txtPatientId");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, txtPatientId);

        label2 = new QLabel(BookingDialog);
        label2->setObjectName("label2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label2);

        cmbDoctor = new QComboBox(BookingDialog);
        cmbDoctor->setObjectName("cmbDoctor");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, cmbDoctor);

        label3 = new QLabel(BookingDialog);
        label3->setObjectName("label3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label3);

        txtDepartment = new QLineEdit(BookingDialog);
        txtDepartment->setObjectName("txtDepartment");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, txtDepartment);

        label4 = new QLabel(BookingDialog);
        label4->setObjectName("label4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label4);

        dateAppointment = new QDateEdit(BookingDialog);
        dateAppointment->setObjectName("dateAppointment");
        dateAppointment->setCalendarPopup(true);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, dateAppointment);

        label5 = new QLabel(BookingDialog);
        label5->setObjectName("label5");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label5);

        cmbSlot = new QComboBox(BookingDialog);
        cmbSlot->setObjectName("cmbSlot");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, cmbSlot);


        verticalLayout->addLayout(formLayout);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        btnBook = new QPushButton(BookingDialog);
        btnBook->setObjectName("btnBook");

        buttonLayout->addWidget(btnBook);

        btnCancel = new QPushButton(BookingDialog);
        btnCancel->setObjectName("btnCancel");

        buttonLayout->addWidget(btnCancel);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(BookingDialog);

        QMetaObject::connectSlotsByName(BookingDialog);
    } // setupUi

    void retranslateUi(QDialog *BookingDialog)
    {
        BookingDialog->setWindowTitle(QCoreApplication::translate("BookingDialog", "Book Appointment", nullptr));
        lblTitle->setText(QCoreApplication::translate("BookingDialog", "Book Appointment", nullptr));
        label1->setText(QCoreApplication::translate("BookingDialog", "Patient ID:", nullptr));
        label2->setText(QCoreApplication::translate("BookingDialog", "Doctor:", nullptr));
        label3->setText(QCoreApplication::translate("BookingDialog", "Department:", nullptr));
        label4->setText(QCoreApplication::translate("BookingDialog", "Date:", nullptr));
        label5->setText(QCoreApplication::translate("BookingDialog", "Available Slot:", nullptr));
        btnBook->setText(QCoreApplication::translate("BookingDialog", "Book Appointment", nullptr));
        btnCancel->setText(QCoreApplication::translate("BookingDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookingDialog: public Ui_BookingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINGDIALOG_H
