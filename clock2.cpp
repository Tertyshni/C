#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");

    int days, hours, minutes, seconds;
    std::cout << "¬ведите количество дней: ";
    std::cin >> days;

    std::cout << "¬ведите количество часов: ";
    std::cin >> hours;

    std::cout << "¬ведите количество минут: ";
    std::cin >> minutes;

    std::cout << "¬ведите количество секунды: ";
    std::cin >> seconds;

    int total_seconds = (days * 86400) + (hours * 3600) + (minutes * 60) + seconds;

    std::cout << "ќбщее количество секунд: " << total_seconds << std::endl;

    return 0;
}
