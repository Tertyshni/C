#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double flashSizeGB;
    const int movieSizeMB = 760;

    cout << "������� ����� ������ (� ����������): ";
    cin >> flashSizeGB;


    double flashSizeMB = flashSizeGB * 1024;


    int movieCount = static_cast<int>(flashSizeMB / movieSizeMB);


    cout << "�� ������ ���������� " << movieCount << " ������� �������� 760 ��." << endl;

    return 0;
}
