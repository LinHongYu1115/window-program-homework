#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QColorDialog>
#include <QLabel>


// 組員1頁面（更改文字顏色）
QWidget member1Page;
QVBoxLayout *member1Layout = new QVBoxLayout(&member1Page);
QPushButton *colorButton = new QPushButton("Color Select", &member1Page);
member1Layout->addWidget(colorButton);

QLabel *captainLabel = new QLabel("Captain", &member1Page);
member1Layout->addWidget(captainLabel);

QObject::connect(colorButton, &QPushButton::clicked, [&]() {
    QColor color = QColorDialog::getColor(Qt::white, &member1Page, "Select Color");
    if (color.isValid()) {
        QString style = QString("color: %1;").arg(color.name());
        captainLabel->setStyleSheet(style);
    }
});