#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int passed, debtors;

    cout << "Введите количество студентов, сдавших экзамен: ";
    cin >> passed;

    cout << "Введите количество должников: ";
    cin >> debtors;

    int total = passed + debtors;

    if (total == 0) {
        cout << "Общее количество студентов не может быть нулевым." << endl;
    }
    else {
        
        double percentPassed = (static_cast<double>(passed) / total) * 100;
        double percentDebtors = (static_cast<double>(debtors) / total) * 100;

        
        cout << fixed << setprecision(2);
        cout << "Процент студентов, сдавших экзамен: " << percentPassed << "%" << endl;
        cout << "Процент должников: " << percentDebtors << "%" << endl;
    }

    return 0;
}
