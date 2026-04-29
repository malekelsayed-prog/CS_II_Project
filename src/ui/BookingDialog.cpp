#include "bookingdialog.h"
#include "ui_bookingdialog.h"
#include <QMessageBox>

BookingDialog::BookingDialog(QWidget *parent)
    : QDialog(parent),
      ui(new Ui::BookingDialog)
{
    ui->setupUi(this);

    connect(ui->btnBook, &QPushButton::clicked, this, [=]()
    {
        QMessageBox::information(this, "Success", "Appointment Booked");
        accept();
    });

    connect(ui->btnCancel, &QPushButton::clicked,
            this, &BookingDialog::reject);
}

void BookingDialog::setDoctors(const std::vector<std::pair<QString, QString>>& doctors)
{
    ui->cmbDoctor->clear();

    for (const auto& doc : doctors)
    {
        ui->cmbDoctor->addItem(doc.first, doc.second); 
    }
}

void BookingDialog::setSlots(const std::vector<QString>& slots)
{
    ui->cmbSlot->clear();

    for (const auto& slot : slots)
    {
        ui->cmbSlot->addItem(slot);
    }
}

BookingDialog::~BookingDialog()
{
    delete ui;
}

QString BookingDialog::getPatientID() const {
    return ui->txtPatientId->text();
}

QString BookingDialog::getDoctorID() const {
    return ui->cmbDoctor->currentData().toString();
}

QString BookingDialog::getDate() const {
    return ui->dateAppointment->text();
}

QString BookingDialog::getStartTime() const {
    return ui->cmbSlot->currentText();
}