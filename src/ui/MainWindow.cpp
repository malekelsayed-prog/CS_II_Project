#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "patientform.h"
#include "bookingdialog.h"
#include "scheduleview.h"
#include "../../include/controller/SystemController.hpp"

#include <QString>
#include <vector>
#include <utility>


MainWindow::MainWindow(SystemController *ctrl, QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    controller(ctrl)
{
    ui->setupUi(this);

    connect(ui->btnAddPatient, &QPushButton::clicked,
            this, &MainWindow::openPatientForm);

    connect(ui->btnBookAppointment, &QPushButton::clicked,
            this, &MainWindow::openBookingDialog);

    connect(ui->btnViewSchedule, &QPushButton::clicked,
            this, &MainWindow::openScheduleView);

    connect(ui->btnExit, &QPushButton::clicked,
            this, &MainWindow::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openPatientForm()
{
    PatientForm dialog(this);
    if(dialog.exec() == QDialog::Accepted) {
        controller->addPatient(
            dialog.getName(),
            dialog.getBirthdate(),
            dialog.getGender(),
            dialog.getMobile(),
            dialog.getNationalID()
        );
    }
}

void MainWindow::openBookingDialog()
{
    BookingDialog dialog(this);

    std::vector<std::pair<QString, QString>> doctors;

    for (const auto& doc : controller->getSys().getDoctors())
    {
        doctors.push_back({
            QString::fromStdString(doc.getName()),
            QString::fromStdString(doc.getDoctorID())
        });
    }

    dialog.setDoctors(doctors);

    std::vector<QString> slots;

    for (const auto& slot : controller->getSys().getAvailableSlots())
    {
        if (!slot.getIsBooked()) {
            slots.push_back(QString::fromStdString(slot.getStartTime()));
        }
    }

    dialog.setSlots(slots);

    dialog.exec();
}

void MainWindow::openScheduleView()
{
    ScheduleView dialog(controller, this);

    controller->loadSchedule();

    dialog.exec();
}

