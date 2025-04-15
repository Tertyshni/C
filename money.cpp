#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "RU");

    double hryvnias, usd_rate, eur_rate, rub_rate;

    std::cout << "Введите сумму в гривнах: ";
    std::cin >> hryvnias;

    std::cout << "Введите курс доллара: ";
    std::cin >> usd_rate;

    std::cout << "Введите курс евро: ";
    std::cin >> eur_rate;

    std::cout << "Введите курс рубля: ";
    std::cin >> rub_rate;


    int usd = static_cast<int>(hryvnias / usd_rate);
    int eur = static_cast<int>(hryvnias / eur_rate);
    int rub = static_cast<int>(hryvnias / rub_rate);

    double change_usd = hryvnias - (usd * usd_rate);
    double change_eur = hryvnias - (eur * eur_rate);
    double change_rub = hryvnias - (rub * rub_rate);

    std::cout << "\nВы можете купить:\n";
    std::cout << usd << " долларов, сдача: " << change_usd << " грн\n";
    std::cout << eur << " евро, сдача: " << change_eur << " грн\n";
    std::cout << rub << " рублей, сдача: " << change_rub << " грн\n";

    return 0;
}
