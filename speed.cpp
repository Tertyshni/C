#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");

    int distance, time;
    std::cout << "������� ���������: ";
    std::cin >> distance;

    std::cout << "������� �����: ";
    std::cin >> time;

    int speed = distance / time;

    std::cout << "�������� : " << speed << "��/���" << std::endl;

    return 0;
}