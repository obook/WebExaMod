#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebEngineView>
#include <QToolBar>
#include <QTimer>
#include <QEvent>
#include <QPushButton>
#include <QKeyEvent>
#include <QDateTime>
#include <QInputDialog>
#include <QWebEngineProfile>
#include <QWebEngineCookieStore>
#include <QMessageBox>
#include <QWebEnginePage>

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
    QPushButton* PushButtonRight;
    QPushButton* PushButtonLeft;
    void setupToolBar();
    void SetupToolBarStyleFocusOn();
    void SetupToolBarStyleFocusOff();
    void handleButtonRight();
    void handleButtonLeft();
    void UnlockWebView();
    void LockWebView();
    QTimer *monTimer;
    bool bFocusLost;
    bool bToogleColors;
    bool bWebViewHidden;
    int bFocusLostCounter;

protected:
    bool event(QEvent *event) override;
protected:
    void closeEvent(QCloseEvent *event);
public slots :
    void finTempo();

};
#endif // MAINWINDOW_H
