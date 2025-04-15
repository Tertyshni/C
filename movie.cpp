#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double fileSizeGB;
    double speedBps;


    cout << "¬ведите размер фильма (в гигабайтах): ";
    cin >> fileSizeGB;

    cout << "¬ведите скорость »нтернет-соединени€ (в битах в секунду): ";
    cin >> speedBps;


    double fileSizeBits = fileSizeGB * 1024 * 1024 * 1024 * 8;

    double timeSeconds = fileSizeBits / speedBps;


    int hours = static_cast<int>(timeSeconds) / 3600;
    int minutes = (static_cast<int>(timeSeconds) % 3600) / 60;
    int seconds = static_cast<int>(timeSeconds) % 60;


    cout << "¬рем€ загрузки фильма: "
        << hours << " ч "
        << minutes << " мин "
        << seconds << " сек" << endl;

    return 0;
}
