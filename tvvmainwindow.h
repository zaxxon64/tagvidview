#ifndef TVVMAINWINDOW_H
#define TVVMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class TvvMainWindow;
}

class TvvMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TvvMainWindow(QWidget *parent = 0);
    ~TvvMainWindow();

private:
    Ui::TvvMainWindow *ui;
};

#endif // TVVMAINWINDOW_H
