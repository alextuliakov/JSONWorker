#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("JSON Worker v1.0");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_choose_clicked()
{
    QList<QUrl> list = QFileDialog::getOpenFileUrls(this, "Выбрать JSON файлы", QUrl(), "*.json");
    if(!list.empty()) {
        for(QUrl &u : list) {
            QString str = u.path();
            ui->listWidget->addItem(str.mid(1, str.length()-1));
        }
    }
}

void MainWindow::on_btn_create_clicked()
{
    QUrl saveUrl = QFileDialog::getSaveFileUrl(this, "Сохранить JSON файл", QUrl(), "*.json");
    if(!saveUrl.isEmpty()) {
        QString saveUrlStr = saveUrl.path();
        saveUrlStr = saveUrlStr.mid(1, saveUrlStr.length()-1);

        QStringList files_paths;
        QString res;
        for(int i = 0; i < ui->listWidget->count(); i++) {
            QListWidgetItem *item = ui->listWidget->item(i);
            files_paths.push_back(item->text());
        }

        for(int i = 0; i < files_paths.count(); i++) {
            QFile f(files_paths[i]);
            if(f.open(QIODevice::ReadOnly)) {
                QByteArray arr = f.readAll();
                QString str(arr);
                int a = str.lastIndexOf("}")-1;
                str = str.mid(1, a);
                res += (i < files_paths.count()-1) ? str+',' : str;
                double val = (i+1) / files_paths.count();
                ui->progressBar->setValue((int)val*100);
                f.close();
            }
            else {
                QMessageBox::critical(this, "Не найден файл!", "Не найден файл по пути: "+f.fileName());
            }
        }

        res = '{' + res + '}';

        QFile res_file(saveUrlStr);
        if(res_file.open(QIODevice::WriteOnly)) {
            res_file.write(res.toUtf8());
            QMessageBox::information(this, "Готово", "Файл успешно создан!");
            ui->progressBar->setValue(0);
            res_file.close();
        }
        else {
            QMessageBox::critical(this, "Ошибка!", "Не удалось открыть файл для записи!");
        }
    }
}


void MainWindow::on_btn_delete_clicked()
{
    QList<QListWidgetItem*> items = ui->listWidget->selectedItems();
    foreach(QListWidgetItem *item, items)
    {
        delete ui->listWidget->takeItem(ui->listWidget->row(item));
    }
}

