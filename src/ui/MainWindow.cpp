#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "patientform.h"
#include "bookingdialog.h"
#include "scheduleview.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
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
    dialog.exec();
}

void MainWindow::openBookingDialog()
{
    BookingDialog dialog(this);
    dialog.exec();
}

void MainWindow::openScheduleView()
{
    ScheduleView dialog(this);
    dialog.exec();
}
