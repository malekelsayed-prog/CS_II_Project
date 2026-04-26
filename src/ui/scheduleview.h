#ifndef SCHEDULEVIEW_H
#define SCHEDULEVIEW_H

#include <QDialog>
#include <vector>
#include "TimeSlot.hpp"
#include "Doctor.hpp"

namespace Ui {
class ScheduleView;
}

class ScheduleView : public QDialog {
    Q_OBJECT

public:
    explicit ScheduleView(QWidget *parent = nullptr);
    ~ScheduleView();

    void setDoctors(const std::vector<Doctor>& doctors);
    void setDepartments(const std::vector<std::string>& departments);

public slots:
    void updateSchedule(const std::vector<TimeSlot>& slots);

signals:
    void doctorFilterChanged(const QString& name);
    void departmentFilterChanged(const QString& dept);

private:
    Ui::ScheduleView *ui;
};

#endif