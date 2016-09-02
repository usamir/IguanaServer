#include "iguanawindow.h"
#include <QtWidgets>

IguanaWindow::~IguanaWindow()
{

}

IguanaWindow::IguanaWindow()
{
    // system tray creation
    createActions();
    createTrayIcon();

    // set tray icon
    QIcon icon = QIcon(":/images/iguana_icon.jpg");
    trayIcon->setIcon(icon);
    trayIcon->show();

    // call to run iguana executable
    runIguana();


}

void IguanaWindow::createActions()
{
    quitAction = new QAction(tr("&Quit"), this);
    connect(quitAction, &QAction::triggered, this, &IguanaWindow::quitApp);

    restartAction = new QAction(tr("&Restart"), this);
    connect(restartAction, &QAction::triggered, this, &IguanaWindow::restart);

    helpAction = new QAction(tr("&Help"), this);
    connect(helpAction, &QAction::triggered, this, &IguanaWindow::help);

    aboutAction = new QAction(tr("&About"), this);
    connect(aboutAction, &QAction::triggered, this, &IguanaWindow::about);

}

void IguanaWindow::createTrayIcon()
{
    trayIconMenu = new QMenu(this);
    trayIconMenu->addAction(quitAction);
    trayIconMenu->addAction(restartAction);
    trayIconMenu->addAction(helpAction);
    trayIconMenu->addAction(aboutAction);

    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setContextMenu(trayIconMenu);
}

void IguanaWindow::runIguana()
{
    process = new QProcess();
    // location of iguana to start process
    // TODO create to read system variable
    process->start("C:\\Users\\usamir\\Dropbox\\Upwork\\SuperNET\\agents\\win64\\iguana");
}

void IguanaWindow::killProcess()
{
    process->terminate();
    delete process;
}

void IguanaWindow::restart()
{
    killProcess();
    runIguana();
}

void IguanaWindow::quitApp()
{

    killProcess();
    QApplication::quit();
}

void IguanaWindow::help()
{
    QDesktopServices::openUrl(QUrl("http://wiki.supernet.org/wiki/Main_Page"));
}

void IguanaWindow::about()
{
    QMessageBox::information(this, tr("Iguana"),
                                     tr("SuperNET is a group of people who work "
                                        "on blockchain technology. Iguana serves "
                                        "as a unified codebase for all of  "
                                        "SuperNET's myriad services."));
}
