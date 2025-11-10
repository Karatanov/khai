// #include <QCoreApplication>
// #include <QTextStream>
// #include <QDate>
// #include <QLocale>
// #include <windows.h>

// int main(int argc, char *argv[])
// {
//     QCoreApplication app(argc, argv);

//     // 🔹 Установлюємо UTF-8 кодування для консолі (аналог chcp 65001)
//     SetConsoleOutputCP(CP_UTF8);
//     SetConsoleCP(CP_UTF8);

//     // 🔹 Встановлюємо українську локаль у Qt
//     QLocale::setDefault(QLocale(QLocale::Ukrainian, QLocale::Ukraine));

//     // 🔹 Створюємо потік для виводу
//     QTextStream out(stdout);
//     out.setEncoding(QStringConverter::Utf8);

//     // 🔹 Поточна дата і день тижня
//     QDate cd = QDate::currentDate();
//     QString dayName = QLocale().standaloneDayName(cd.dayOfWeek(), QLocale::LongFormat);

//     out << "Сьогодні: " << dayName << Qt::endl;

//     return 0;
// }


