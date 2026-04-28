#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "patientform.h"
#include "bookingdialog.h"
#include "scheduleview.h"
#include "../../include/controller/SystemController.hpp"

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
    if(dialog.exec() == QDialog::Accepted)
    {
        controller->bookAppointment(
            dialog.getPatientID(),
            dialog.getDoctorID(),
            dialog.getDate(),
            dialog.getStartTime()
        );
    }
}

void MainWindow::openScheduleView()
{
    ScheduleView dialog(controller, this);

    controller->loadSchedule();

    dialog.exec();
}
