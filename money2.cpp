#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double deposit, annualRate;
    int months;

    cout << "������� ����� ������ (� �������): ";
    cin >> deposit;

    cout << "������� ���� ������ (� �������): ";
    cin >> months;

    cout << "������� ������� ���������� ������ (%): ";
    cin >> annualRate;


    double total = deposit + (deposit * (annualRate / 100) * months / 12);


    cout << fixed << setprecision(2);
    cout << "�������� ����� �� �����: " << total << " ���" << endl;

    return 0;
}
