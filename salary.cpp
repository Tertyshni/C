#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    double totalSales;
    const double baseSalary = 100.0;
    const double commissionRate = 0.05;

    cout << "¬ведите общую сумму сделок за мес€ц: ";
    cin >> totalSales;

    double commission = totalSales * commissionRate;
    double totalSalary = baseSalary + commission;


    cout << "»тогова€ зарплата менеджера: " << totalSalary << " грн" << endl;

    return 0;
}
