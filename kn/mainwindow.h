#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void pr_n();

    void pr_v();

    void on_toolButton_clicked();

    void on_toolButton_6_clicked();

    void on_toolButton_9_clicked();

    void on_toolButton_2_clicked();

    void on_toolButton_5_clicked();

    void on_toolButton_8_clicked();

    void on_toolButton_3_clicked();

    void on_toolButton_4_clicked();

    void on_toolButton_7_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
