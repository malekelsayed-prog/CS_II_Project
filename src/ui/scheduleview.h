#ifndef SCHEDULEVIEW_H
#define SCHEDULEVIEW_H

#include <QDialog>

class SystemController;
class TimeSlot;

QT_BEGIN_NAMESPACE
namespace Ui { class ScheduleView; }
QT_END_NAMESPACE

class ScheduleView : public QDialog
{
    Q_OBJECT

public:
    explicit ScheduleView(SystemController *controller, QWidget *parent = nullptr);
    ~ScheduleView();

private:
    void loadAppointments();

    Ui::ScheduleView *ui;
    SystemController *controller;
};

#endif
