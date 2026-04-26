#include "scheduleview.h"
#include "ui_scheduleview.h"

ScheduleView::ScheduleView(QWidget *parent)
    : QDialog(parent),
      ui(new Ui::ScheduleView)
{
    ui->setupUi(this);

    ui->tableSchedule->setColumnCount(7);
    ui->tableSchedule->setHorizontalHeaderLabels({
        "Doctor", "ID", "Department", "Date", "Start", "End", "Status"
    });

    // Connect filters
    connect(ui->cmbDoctor, &QComboBox::currentTextChanged,
            this, &ScheduleView::doctorFilterChanged);

    connect(ui->cmbDepartment, &QComboBox::currentTextChanged,
            this, &ScheduleView::departmentFilterChanged);
}

ScheduleView::~ScheduleView() {
    delete ui;
}

void ScheduleView::setDoctors(const std::vector<Doctor>& doctors)
{
    ui->cmbDoctor->clear();
    ui->cmbDoctor->addItem("All Doctors");

    for (const auto& d : doctors) {
        ui->cmbDoctor->addItem(QString::fromStdString(d.getName()));
    }
}

void ScheduleView::setDepartments(const std::vector<std::string>& departments)
{
    ui->cmbDepartment->clear();
    ui->cmbDepartment->addItem("All Departments");

    for (const auto& dept : departments) {
        ui->cmbDepartment->addItem(QString::fromStdString(dept));
    }
}

void ScheduleView::updateSchedule(const std::vector<TimeSlot>& slots)
{
    ui->tableSchedule->setRowCount(slots.size());

    for (int i = 0; i < slots.size(); ++i) {
        const TimeSlot& s = slots[i];

        ui->tableSchedule->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(s.getDoctorName())));
        ui->tableSchedule->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(s.getDoctorID())));
        ui->tableSchedule->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(s.getDepartment())));
        ui->tableSchedule->setItem(i, 3, new QTableWidgetItem(QString::fromStdString(s.getDate())));
        ui->tableSchedule->setItem(i, 4, new QTableWidgetItem(QString::fromStdString(s.getStartTime())));
        ui->tableSchedule->setItem(i, 5, new QTableWidgetItem(QString::fromStdString(s.getEndTime())));

        QString status = s.getIsBooked() ? "Booked" : "Available";
        ui->tableSchedule->setItem(i, 6, new QTableWidgetItem(status));
    }
}