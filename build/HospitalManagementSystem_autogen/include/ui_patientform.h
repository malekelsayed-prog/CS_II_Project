/********************************************************************************
** Form generated from reading UI file 'patientform.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTFORM_H
#define UI_PATIENTFORM_H

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

class Ui_PatientForm
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblTitle;
    QFormLayout *formLayout;
    QLabel *label1;
    QLineEdit *txtName;
    QLabel *label2;
    QDateEdit *dateBirth;
    QLabel *label3;
    QComboBox *cmbGender;
    QLabel *label4;
    QLineEdit *txtMobile;
    QLabel *label5;
    QLineEdit *txtNationalId;
    QHBoxLayout *buttonLayout;
    QPushButton *btnSubmit;
    QPushButton *btnClear;

    void setupUi(QDialog *PatientForm)
    {
        if (PatientForm->objectName().isEmpty())
            PatientForm->setObjectName("PatientForm");
        PatientForm->resize(650, 500);
        verticalLayout = new QVBoxLayout(PatientForm);
        verticalLayout->setObjectName("verticalLayout");
        lblTitle = new QLabel(PatientForm);
        lblTitle->setObjectName("lblTitle");
        lblTitle->setAlignment(Qt::AlignCenter);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        lblTitle->setFont(font);

        verticalLayout->addWidget(lblTitle);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label1 = new QLabel(PatientForm);
        label1->setObjectName("label1");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label1);

        txtName = new QLineEdit(PatientForm);
        txtName->setObjectName("txtName");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, txtName);

        label2 = new QLabel(PatientForm);
        label2->setObjectName("label2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label2);

        dateBirth = new QDateEdit(PatientForm);
        dateBirth->setObjectName("dateBirth");
        dateBirth->setCalendarPopup(true);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, dateBirth);

        label3 = new QLabel(PatientForm);
        label3->setObjectName("label3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label3);

        cmbGender = new QComboBox(PatientForm);
        cmbGender->setObjectName("cmbGender");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, cmbGender);

        label4 = new QLabel(PatientForm);
        label4->setObjectName("label4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label4);

        txtMobile = new QLineEdit(PatientForm);
        txtMobile->setObjectName("txtMobile");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, txtMobile);

        label5 = new QLabel(PatientForm);
        label5->setObjectName("label5");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label5);

        txtNationalId = new QLineEdit(PatientForm);
        txtNationalId->setObjectName("txtNationalId");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, txtNationalId);


        verticalLayout->addLayout(formLayout);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        btnSubmit = new QPushButton(PatientForm);
        btnSubmit->setObjectName("btnSubmit");

        buttonLayout->addWidget(btnSubmit);

        btnClear = new QPushButton(PatientForm);
        btnClear->setObjectName("btnClear");

        buttonLayout->addWidget(btnClear);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(PatientForm);

        QMetaObject::connectSlotsByName(PatientForm);
    } // setupUi

    void retranslateUi(QDialog *PatientForm)
    {
        PatientForm->setWindowTitle(QCoreApplication::translate("PatientForm", "Add Patient", nullptr));
        lblTitle->setText(QCoreApplication::translate("PatientForm", "Add New Patient", nullptr));
        label1->setText(QCoreApplication::translate("PatientForm", "Full Name:", nullptr));
        label2->setText(QCoreApplication::translate("PatientForm", "Birthdate:", nullptr));
        label3->setText(QCoreApplication::translate("PatientForm", "Gender:", nullptr));
        label4->setText(QCoreApplication::translate("PatientForm", "Mobile Number:", nullptr));
        label5->setText(QCoreApplication::translate("PatientForm", "National ID:", nullptr));
        btnSubmit->setText(QCoreApplication::translate("PatientForm", "Submit", nullptr));
        btnClear->setText(QCoreApplication::translate("PatientForm", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientForm: public Ui_PatientForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTFORM_H
