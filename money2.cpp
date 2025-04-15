#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double deposit, annualRate;
    int months;

    cout << "¬ведите сумму вклада (в гривнах): ";
    cin >> deposit;

    cout << "¬ведите срок вклада (в мес€цах): ";
    cin >> months;

    cout << "¬ведите годовую процентную ставку (%): ";
    cin >> annualRate;


    double total = deposit + (deposit * (annualRate / 100) * months / 12);


    cout << fixed << setprecision(2);
    cout << "»тогова€ сумма на счету: " << total << " грн" << endl;

    return 0;
}
