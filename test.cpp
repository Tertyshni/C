#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int passed, debtors;

    cout << "������� ���������� ���������, ������� �������: ";
    cin >> passed;

    cout << "������� ���������� ���������: ";
    cin >> debtors;

    int total = passed + debtors;

    if (total == 0) {
        cout << "����� ���������� ��������� �� ����� ���� �������." << endl;
    }
    else {
        
        double percentPassed = (static_cast<double>(passed) / total) * 100;
        double percentDebtors = (static_cast<double>(debtors) / total) * 100;

        
        cout << fixed << setprecision(2);
        cout << "������� ���������, ������� �������: " << percentPassed << "%" << endl;
        cout << "������� ���������: " << percentDebtors << "%" << endl;
    }

    return 0;
}
