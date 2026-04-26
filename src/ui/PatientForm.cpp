#include "patientform.h"
#include "ui_patientform.h"
#include <QMessageBox>

PatientForm::PatientForm(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::PatientForm)
{
    ui->setupUi(this);

    ui->cmbGender->addItem("Male");
    ui->cmbGender->addItem("Female");

    connect(ui->btnSubmit, &QPushButton::clicked, this, [=]()
            {
                QMessageBox::information(this, "Success", "Patient Added");
                accept();
            });

    connect(ui->btnClear, &QPushButton::clicked, this, [=]()
            {
                ui->txtName->clear();
                ui->txtMobile->clear();
                ui->txtNationalId->clear();
            });
}

PatientForm::~PatientForm()
{
    delete ui;
}

QString PatientForm::getName() const {
    return ui->txtName->text();
}

QString PatientForm::getBirthdate() const {
    return ui->dateBirth->text();
}

QString PatientForm::getGender() const {
    return ui->cmbGender->currentText();
}

QString PatientForm::getMobile() const {
    return ui->txtMobile->text();
}

QString PatientForm::getNationalID() const {
    return ui->txtNationalId->text();
}