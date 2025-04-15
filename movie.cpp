#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double fileSizeGB;
    double speedBps;


    cout << "������� ������ ������ (� ����������): ";
    cin >> fileSizeGB;

    cout << "������� �������� ��������-���������� (� ����� � �������): ";
    cin >> speedBps;


    double fileSizeBits = fileSizeGB * 1024 * 1024 * 1024 * 8;

    double timeSeconds = fileSizeBits / speedBps;


    int hours = static_cast<int>(timeSeconds) / 3600;
    int minutes = (static_cast<int>(timeSeconds) % 3600) / 60;
    int seconds = static_cast<int>(timeSeconds) % 60;


    cout << "����� �������� ������: "
        << hours << " � "
        << minutes << " ��� "
        << seconds << " ���" << endl;

    return 0;
}
