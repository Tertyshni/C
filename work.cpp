#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    int seconds_passed;
    std::cout << "������� ���������� ������, ��������� � ������ �������� ���: ";
    std::cin >> seconds_passed;

    const int total_work_seconds = 8 * 3600; 
    int seconds_left = total_work_seconds - seconds_passed;

    if (seconds_left <= 0) {
        std::cout << "������� ���� ��� ��������!" << std::endl;
    }
    else {
        int hours_left = seconds_left / 3600; 
        std::cout << "�������� ������ �� ������: " << hours_left << " �." << std::endl;
    }

    return 0;
}
