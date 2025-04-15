#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");

    int distance, time;
    std::cout << "¬ведите расто€ние: ";
    std::cin >> distance;

    std::cout << "¬ведите врем€: ";
    std::cin >> time;

    int speed = distance / time;

    std::cout << "—корость : " << speed << "км/год" << std::endl;

    return 0;
}