#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "RU");

    double hryvnias, usd_rate, eur_rate, rub_rate;

    std::cout << "������� ����� � �������: ";
    std::cin >> hryvnias;

    std::cout << "������� ���� �������: ";
    std::cin >> usd_rate;

    std::cout << "������� ���� ����: ";
    std::cin >> eur_rate;

    std::cout << "������� ���� �����: ";
    std::cin >> rub_rate;


    int usd = static_cast<int>(hryvnias / usd_rate);
    int eur = static_cast<int>(hryvnias / eur_rate);
    int rub = static_cast<int>(hryvnias / rub_rate);

    double change_usd = hryvnias - (usd * usd_rate);
    double change_eur = hryvnias - (eur * eur_rate);
    double change_rub = hryvnias - (rub * rub_rate);

    std::cout << "\n�� ������ ������:\n";
    std::cout << usd << " ��������, �����: " << change_usd << " ���\n";
    std::cout << eur << " ����, �����: " << change_eur << " ���\n";
    std::cout << rub << " ������, �����: " << change_rub << " ���\n";

    return 0;
}
