// 組員2頁面（更改文字樣式）QWidget member2Page;
QVBoxLayout *member2Layout = new QVBoxLayout(&member2Page);
QPushButton *styleButton = new QPushButton("Font Select", &member2Page);
member2Layout->addWidget(styleButton);
QObject::connect(styleButton, &QPushButton::clicked, [&]() {
bool ok;
QFont font = QFontDialog::getFont(&ok, captainLabel->font(), &member2Page, "Select Font");
if (ok) {
captainLabel->setFont(font);
}
});
