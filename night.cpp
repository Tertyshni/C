#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int secondsPassed;


    cout << "Введите количество секунд, прошедших с начала дня: ";
    cin >> secondsPassed;

    const int totalSecondsInDay = 24 * 60 * 60;

    if (secondsPassed < 0 || secondsPassed > totalSecondsInDay) {
        cout << "Некорректное значение. В сутках 86400 секунд." << endl;
    }
    else {
        
        int secondsLeft = totalSecondsInDay - secondsPassed;

        int hours = secondsLeft / 3600;
        int minutes = (secondsLeft % 3600) / 60;
        int seconds = secondsLeft % 60;

        
        cout << "До полуночи осталось: "
            << hours << " ч "
            << minutes << " мин "
            << seconds << " сек" << endl;
    }
    return 0;
}
