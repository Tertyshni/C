#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double pricePerLaptop, discountPercent;
    int quantity;

    cout << "������� ��������� ������ ��������: ";
    cin >> pricePerLaptop;

    cout << "������� ���������� ���������: ";
    cin >> quantity;

    cout << "������� ������� ������: ";
    cin >> discountPercent;


    double total = pricePerLaptop * quantity;

    double discount = total * (discountPercent / 100.0);


    double finalTotal = total - discount;

    cout << "����� ����� ������ � ������ ������: " << finalTotal << " ���" << endl;

    return 0;
}
