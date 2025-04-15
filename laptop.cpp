#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double pricePerLaptop, discountPercent;
    int quantity;

    cout << "Введите стоимость одного ноутбука: ";
    cin >> pricePerLaptop;

    cout << "Введите количество ноутбуков: ";
    cin >> quantity;

    cout << "Введите процент скидки: ";
    cin >> discountPercent;


    double total = pricePerLaptop * quantity;

    double discount = total * (discountPercent / 100.0);


    double finalTotal = total - discount;

    cout << "Общая сумма заказа с учетом скидки: " << finalTotal << " грн" << endl;

    return 0;
}
