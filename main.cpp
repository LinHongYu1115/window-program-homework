#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QTabWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;
    QVBoxLayout *mainLayout = new QVBoxLayout(&window);
    QTabWidget *tabs = new QTabWidget(&window);

    // 隊長頁面
    QWidget captainPage;
    QVBoxLayout *captainLayout = new QVBoxLayout(&captainPage);
    QLabel *captainLabel = new QLabel("林泓宇\n林采儀\n林映辰\n陳仕育", &captainPage);
    captainLayout->addWidget(captainLabel);

    tabs->addTab(&captainPage, "林泓宇");

    mainLayout->addWidget(tabs);
    window.setWindowTitle("Widget小組作業");
    window.resize(400, 300);
    window.show();

    return app.exec();
}
