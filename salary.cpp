#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    double totalSales;
    const double baseSalary = 100.0;
    const double commissionRate = 0.05;

    cout << "������� ����� ����� ������ �� �����: ";
    cin >> totalSales;

    double commission = totalSales * commissionRate;
    double totalSalary = baseSalary + commission;


    cout << "�������� �������� ���������: " << totalSalary << " ���" << endl;

    return 0;
}
