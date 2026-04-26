#include "bookingdialog.h"
#include "ui_bookingdialog.h"
#include <QMessageBox>

BookingDialog::BookingDialog(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::BookingDialog)
{
    ui->setupUi(this);

    ui->cmbDoctor->addItem("Dr Ahmed");
    ui->cmbDoctor->addItem("Dr Sara");

    ui->cmbSlot->addItem("09:00");
    ui->cmbSlot->addItem("09:20");
    ui->cmbSlot->addItem("09:40");

    connect(ui->btnBook, &QPushButton::clicked, this, [=]()
            {
                QMessageBox::information(this, "Success", "Appointment Booked");
                accept();
            });

    connect(ui->btnCancel, &QPushButton::clicked,
            this, &BookingDialog::reject);
}

BookingDialog::~BookingDialog()
{
    delete ui;
}

QString BookingDialog::getPatientID() const {
    return ui->txtPatientId->text();
}

QString BookingDialog::getDoctorID() const {
    return ui->cmbDoctor->currentText();
}

QString BookingDialog::getDate() const {
    return ui->dateAppointment->text();
}

QString BookingDialog::getStartTime() const {
    return ui->cmbSlot->currentText();
}