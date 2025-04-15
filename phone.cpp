#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    int h1, m1, s1, h2, m2, s2;

    std::cout << "Введите время начала разговора (часы минуты секунды): ";
    std::cin >> h1 >> m1 >> s1;

    std::cout << "Введите время окончания разговора (часы минуты секунды): ";
    std::cin >> h2 >> m2 >> s2;

    int start_seconds = h1 * 3600 + m1 * 60 + s1;
    int end_seconds = h2 * 3600 + m2 * 60 + s2;

    if (end_seconds < start_seconds) {
        std::cout << "Ошибка: время окончания меньше времени начала!" << std::endl;
        return 1;
    }

    int duration_seconds = end_seconds - start_seconds;
    int duration_minutes = (duration_seconds + 59) / 60; 

    double cost = duration_minutes * 0.30;

    std::cout << "Длительность разговора: " << duration_minutes << " мин." << std::endl;
    std::cout << "Стоимость разговора: " << cost << " грн" << std::endl;

    return 0;
}
