#include "scheduleview.h"
#include "ui_scheduleview.h"
#include <QTableWidgetItem>

ScheduleView::ScheduleView(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::ScheduleView)
{
    ui->setupUi(this);

    ui->cmbDoctor->addItem("All Doctors");
    ui->cmbDoctor->addItem("Dr Ahmed");

    ui->cmbDepartment->addItem("All Departments");
    ui->cmbDepartment->addItem("Cardiology");

    ui->tableSchedule->setRowCount(1);

    ui->tableSchedule->setItem(0,0,new QTableWidgetItem("Dr Ahmed"));
    ui->tableSchedule->setItem(0,1,new QTableWidgetItem("101"));
    ui->tableSchedule->setItem(0,2,new QTableWidgetItem("Cardiology"));
    ui->tableSchedule->setItem(0,3,new QTableWidgetItem("26/04/2026"));
    ui->tableSchedule->setItem(0,4,new QTableWidgetItem("09:00"));
    ui->tableSchedule->setItem(0,5,new QTableWidgetItem("09:20"));
    ui->tableSchedule->setItem(0,6,new QTableWidgetItem("Available"));
}

ScheduleView::~ScheduleView()
{
    delete ui;
}
