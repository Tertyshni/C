#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");

    int days, hours, minutes, seconds;
    std::cout << "������� ���������� ����: ";
    std::cin >> days;

    std::cout << "������� ���������� �����: ";
    std::cin >> hours;

    std::cout << "������� ���������� �����: ";
    std::cin >> minutes;

    std::cout << "������� ���������� �������: ";
    std::cin >> seconds;

    int total_seconds = (days * 86400) + (hours * 3600) + (minutes * 60) + seconds;

    std::cout << "����� ���������� ������: " << total_seconds << std::endl;

    return 0;
}
