#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double number;


    cout << "������� ������� �����: ";
    cin >> number;

    cout << fixed << setprecision(2);
    cout << "����������� �����: " << number << endl;

    return 0;
}
