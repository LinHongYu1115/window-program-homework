// 組員 3 頁面（選擇檔案路徑）
 
 QWidget member3Page;
 QVBoxLayout *member3Layout = new QVBoxLayout(&member3Page);
 QPushButton *fileButton = new QPushButton("File Select", &member3Page);
 member3Layout->addWidget(fileButton);
 QObject::connect(fileButton, &QPushButton::clicked, [&]() {
 QString filePath = QFileDialog::getOpenFileName(&member3Page, "Select File");
 if (!filePath.isEmpty()) {
 captainLabel->setText(QString("選擇的檔案路徑：\n%1").arg(filePath));
 }
 });