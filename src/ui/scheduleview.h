#ifndef SCHEDULEVIEW_H
#define SCHEDULEVIEW_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class ScheduleView; }
QT_END_NAMESPACE

class ScheduleView : public QDialog
{
    Q_OBJECT

public:
    explicit ScheduleView(QWidget *parent = nullptr);
    ~ScheduleView();

private:
    Ui::ScheduleView *ui;
};

#endif
