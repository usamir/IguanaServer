#ifndef IGUANAWINDOW_H
#define IGUANAWINDOW_H

#include <QDialog>
#include <QSystemTrayIcon>
#include <QProcess>

class QAction;
class QMenu;

class IguanaWindow : public QDialog
{
    Q_OBJECT

public:
    ~IguanaWindow();
    IguanaWindow();

private:
    void createActions();
    void createTrayIcon();
    void runIguana();
    void restart();
    void quitApp();
    void help();
    void about();
    void killProcess();

    QAction *quitAction;
    QAction *restartAction;
    QAction *helpAction;
    QAction *aboutAction;


    QProcess *process;
    QSystemTrayIcon *trayIcon;
    QMenu *trayIconMenu;

};

#endif // IGUANAWINDOW_H
