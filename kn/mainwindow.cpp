#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
int i,j, n = 1;
int mas[3][3]= {{3, 6, 9}, {4, 8, 12}, {5, 10, 15}};
int pr = 0;
void MainWindow::pr_n(){
    if(pr == 9){
        ui->label->setText("Ничья!");
    }
}

void MainWindow::pr_v(){
    if((mas[0][0] == mas[0][1]) && (mas[0][0] == mas[0][2]) && (mas[0][1] == mas[0][2])){
        if(n == 0){
            ui->label->setText("Победа игрока - 1");
       }else
       if(n == 1){
            ui->label->setText("Победа игрока - 2");
       }
       for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                mas[i][j] = 1;
            }
        }
    }
    if((mas[0][0] == mas[1][0]) && (mas[0][0] == mas[2][0]) && (mas[1][0] == mas[2][0])){
        if(n == 0){
            ui->label->setText("Победа игрока - 1");
       }else
       if(n == 1){
            ui->label->setText("Победа игрока - 2");
       }
       for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                mas[i][j] = 1;
            }
        }
    }
    if((mas[0][0] == mas[1][1]) && (mas[0][0] == mas[2][2]) && (mas[1][1] == mas[2][2])){
        if(n == 0){
            ui->label->setText("Победа игрока - 1");
       }else
       if(n == 1){
            ui->label->setText("Победа игрока - 2");
       }
       for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                mas[i][j] = 1;
            }
        }
    }
    if((mas[0][1] == mas[1][1]) && (mas[0][1] == mas[2][1]) && (mas[1][1] == mas[2][1])){
        if(n == 0){
            ui->label->setText("Победа игрока - 1");
       }else
       if(n == 1){
            ui->label->setText("Победа игрока - 2");
       }
       for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                mas[i][j] = 1;
            }
        }
    }
    if((mas[0][2] == mas[1][1]) && (mas[0][2] == mas[2][0]) && (mas[1][1] == mas[2][0])){
        if(n == 0){
            ui->label->setText("Победа игрока - 1");
       }else
       if(n == 1){
            ui->label->setText("Победа игрока - 2");
       }
       for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                mas[i][j] = 1;
            }
        }
    }
    if((mas[0][2] == mas[1][2]) && (mas[0][2] == mas[2][2]) && (mas[1][2] == mas[2][2])){
        if(n == 0){
            ui->label->setText("Победа игрока - 1");
       }else
       if(n == 1){
            ui->label->setText("Победа игрока - 2");
       }
       for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                mas[i][j] = 1;
            }
        }
    }
    if((mas[1][0] == mas[1][1]) && (mas[1][0] == mas[1][2]) && (mas[1][1] == mas[1][2])){
        if(n == 0){
            ui->label->setText("Победа игрока - 1");
       }else
       if(n == 1){
            ui->label->setText("Победа игрока - 2");
       }
       for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                mas[i][j] = 1;
            }
        }
    }
    if((mas[2][0] == mas[2][1]) && (mas[2][0] == mas[2][2]) && (mas[2][1] == mas[2][2])){
        if(n == 0){
            ui->label->setText("Победа игрока - 1");
       }else
       if(n == 1){
            ui->label->setText("Победа игрока - 2");
       }
       for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                mas[i][j] = 1;
            }
        }
    }
}

void MainWindow::on_toolButton_clicked()
{
    if((mas[0][0] != 1) && (mas[0][0] != 2)){
    if(n == 1){
    ui->toolButton->setText("X");
    ui->statusBar->showMessage("Ход игрока - 2");
    n = 0;
    mas[0][0]=1;
    }else
    if(n == 0){
       ui->toolButton->setText("O");
       ui->statusBar->showMessage("Ход игрока - 1");
       n = 1;
       mas[0][0]=2;
    }
    pr = pr +1;
    pr_n();
    pr_v();
    }
}

void MainWindow::on_toolButton_6_clicked()
{
    if((mas[0][1] != 1) && (mas[0][1] != 2)){
    if(n == 1){
    ui->toolButton_6->setText("X");
    ui->statusBar->showMessage("Ход игрока - 2");
    n = 0;
    mas[0][1]=1;
    }else
    if(n == 0){
       ui->toolButton_6->setText("O");
       ui->statusBar->showMessage("Ход игрока - 1");
       n = 1;
       mas[0][1]=2;
    }
    pr = pr +1;
    pr_n();
    pr_v();
    }
}

void MainWindow::on_toolButton_9_clicked()
{
    if((mas[0][2] != 1) && (mas[0][2] != 2)){
    if(n == 1){
    ui->toolButton_9->setText("X");
    ui->statusBar->showMessage("Ход игрока - 2");
    n = 0;
    mas[0][2]=1;
    }else
    if(n == 0){
       ui->toolButton_9->setText("O");
       ui->statusBar->showMessage("Ход игрока - 1");
       n = 1;
       mas[0][2]=2;
    }
    pr = pr +1;
    pr_n();
    pr_v();
    }
}

void MainWindow::on_toolButton_2_clicked()
{
    if((mas[1][0] != 1) && (mas[1][0] != 2)){
    if(n == 1){
    ui->toolButton_2->setText("X");
    ui->statusBar->showMessage("Ход игрока - 2");
    n = 0;
    mas[1][0]=1;
    }else
    if(n == 0){
       ui->toolButton_2->setText("O");
       ui->statusBar->showMessage("Ход игрока - 1");
       n = 1;
       mas[1][0]=2;
    }
    pr = pr +1;
    pr_n();
    pr_v();
    }
}

void MainWindow::on_toolButton_5_clicked()
{
    if((mas[1][1] != 1) && (mas[1][1] != 2)){
    if(n == 1){
    ui->toolButton_5->setText("X");
    ui->statusBar->showMessage("Ход игрока - 2");
    n = 0;
    mas[1][1]=1;
    }else
    if(n == 0){
       ui->toolButton_5->setText("O");
       ui->statusBar->showMessage("Ход игрока - 1");
       n = 1;
       mas[1][1]=2;
    }
    pr = pr +1;
    pr_n();
    pr_v();
    }
}

void MainWindow::on_toolButton_8_clicked()
{
    if((mas[1][2] != 1) && (mas[1][2] != 2)){
    if(n == 1){
    ui->toolButton_8->setText("X");
    ui->statusBar->showMessage("Ход игрока - 2");
    n = 0;
    mas[1][2]=1;
    }else
    if(n == 0){
       ui->toolButton_8->setText("O");
       ui->statusBar->showMessage("Ход игрока - 1");
       n = 1;
       mas[1][2]=2;
    }
    pr = pr +1;
    pr_n();
    pr_v();
    }
}

void MainWindow::on_toolButton_3_clicked()
{
    if((mas[2][0] != 1) && (mas[2][0] != 2)){
    if(n == 1){
    ui->toolButton_3->setText("X");
    ui->statusBar->showMessage("Ход игрока - 2");
    n = 0;
    mas[2][0]=1;
    }else
    if(n == 0){
       ui->toolButton_3->setText("O");
       ui->statusBar->showMessage("Ход игрока - 1");
       n = 1;
       mas[2][0]=2;
    }
    pr = pr +1;
    pr_n();
    pr_v();
    }
}

void MainWindow::on_toolButton_4_clicked()
{
    if((mas[2][1] != 1) && (mas[2][1] != 2)){
    if(n == 1){
    ui->toolButton_4->setText("X");
    ui->statusBar->showMessage("Ход игрока - 2");
    n = 0;
    mas[2][1]=1;
    }else
    if(n == 0){
       ui->toolButton_4->setText("O");
       ui->statusBar->showMessage("Ход игрока - 1");
       n = 1;
       mas[2][1]=2;
    }
    pr = pr +1;
    pr_n();
    pr_v();
    }
}

void MainWindow::on_toolButton_7_clicked()
{
    if((mas[2][2] != 1) && (mas[2][2] != 2)){
    if(n == 1){
    ui->toolButton_7->setText("X");
    ui->statusBar->showMessage("Ход игрока - 2");
    n = 0;
    mas[2][2]=1;
    }else
    if(n == 0){
       ui->toolButton_7->setText("O");
       ui->statusBar->showMessage("Ход игрока - 1");
       n = 1;
       mas[2][2]=2;
    }
    pr = pr +1;
    pr_n();
    pr_v();
    }
}

void MainWindow::on_pushButton_clicked()
{
    ui->toolButton->setText("");
    ui->toolButton_2->setText("");
    ui->toolButton_3->setText("");
    ui->toolButton_4->setText("");
    ui->toolButton_5->setText("");
    ui->toolButton_6->setText("");
    ui->toolButton_7->setText("");
    ui->toolButton_8->setText("");
    ui->toolButton_9->setText("");
    ui->label->setText("");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            mas[i][j] = (i+3)*(j+1);
        }
    }
    pr = 0;

}
