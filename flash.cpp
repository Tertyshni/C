#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double flashSizeGB;
    const int movieSizeMB = 760;

    cout << "Введите объем флешки (в гигабайтах): ";
    cin >> flashSizeGB;


    double flashSizeMB = flashSizeGB * 1024;


    int movieCount = static_cast<int>(flashSizeMB / movieSizeMB);


    cout << "На флешку поместится " << movieCount << " фильмов размером 760 МБ." << endl;

    return 0;
}
