#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <string>
#include "Controller.h"
#include "Robot.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
        Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();
        double f(double x);
        double g(double x);
        double h(double x);
        char pathFunction;
        Robot* robot;

    private slots:
        void updateLoop();
        void on_radioButton_4_clicked();
        void on_radioButton_3_clicked();
        void on_radioButton_5_clicked();
        void on_pushButton_2_clicked();
        void on_pushButton_clicked();
	void on_pushButton_3_clicked();

    private:
	bool stop;
        Ui::MainWindow *ui;
        QTimer* updater;
        Controller* controller;
        double speed;
        double sum, count, lastAve;
        std::string filename;
	double inmin, inmax, outmin, outmax;

};

#endif // MAINWINDOW_H
