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
