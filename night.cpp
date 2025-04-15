#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int secondsPassed;


    cout << "������� ���������� ������, ��������� � ������ ���: ";
    cin >> secondsPassed;

    const int totalSecondsInDay = 24 * 60 * 60;

    if (secondsPassed < 0 || secondsPassed > totalSecondsInDay) {
        cout << "������������ ��������. � ������ 86400 ������." << endl;
    }
    else {
        
        int secondsLeft = totalSecondsInDay - secondsPassed;

        int hours = secondsLeft / 3600;
        int minutes = (secondsLeft % 3600) / 60;
        int seconds = secondsLeft % 60;

        
        cout << "�� �������� ��������: "
            << hours << " � "
            << minutes << " ��� "
            << seconds << " ���" << endl;
    }
    return 0;
}
