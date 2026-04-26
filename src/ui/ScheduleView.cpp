#include "scheduleview.h"
#include "ui_scheduleview.h"
#include "../../include/controller/SystemController.hpp"
#include <QTableWidgetItem>

ScheduleView::ScheduleView(SystemController* ctrl, QWidget *parent)
    : QDialog(parent),
    ui(new Ui::ScheduleView),
    controller(ctrl)
{
    ui->setupUi(this);

    ui->tableSchedule->setColumnCount(6);
    ui->tableSchedule->setHorizontalHeaderLabels({
        "Doctor", "Patient ID", "Date", "Start", "End", "Status"
    });

    loadAppointments();
}

void ScheduleView::loadAppointments()
{
    auto appointments = controller->getSys().getAppointments();

    ui->tableSchedule->setRowCount(appointments.size());

    int row = 0;
    for(const auto& a : appointments)
    {
        ui->tableSchedule->setItem(row, 0, 
            new QTableWidgetItem(QString::fromStdString(a.getDoctorID())));

        ui->tableSchedule->setItem(row, 1,
            new QTableWidgetItem(QString::fromStdString(a.getPatientID())));

        ui->tableSchedule->setItem(row, 2, 
            new QTableWidgetItem(QString::fromStdString(a.getDate())));

        ui->tableSchedule->setItem(row, 3, 
            new QTableWidgetItem(QString::fromStdString(a.getStartTime())));

        ui->tableSchedule->setItem(row, 4,
            new QTableWidgetItem(QString::fromStdString(a.getEndTime())));

        ui->tableSchedule->setItem(row, 5, 
            new QTableWidgetItem("Booked"));

        row++;
    }
}

ScheduleView::~ScheduleView()
{
    delete ui;
}
