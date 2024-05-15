#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebEngineView>
#include <QToolBar>
#include <QTimer>
#include <QEvent>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void FocusLost();
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QWebEngineView *webview;
    QToolBar* toolbar;
    void setupToolBar();
    QTimer *monTimer;

protected:
    bool event(QEvent *event) override;

public slots :
    void finTempo();

};
#endif // MAINWINDOW_H