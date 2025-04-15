#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    int total_seconds;
    std::cout << "Введите количество секунд: ";
    std::cin >> total_seconds;

    int days = total_seconds / 86400;
    total_seconds %= 86400;

    int hours = total_seconds / 3600;
    total_seconds %= 3600;

    int minutes = total_seconds / 60;
    int seconds = total_seconds % 60;

    std::cout << "Это составляет: "
        << days << " дн, "
        << hours << " ч, "
        << minutes << " мин, "
        << seconds << " сек." << std::endl;

    return 0;
}
