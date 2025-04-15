#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double movieSizeGB;
    const double disketteSizeMB = 1.44;

  
    cout << "Введите объем фильма (в гигабайтах): ";
    cin >> movieSizeGB;


    double movieSizeMB = movieSizeGB * 1024;


    int disketteCount = static_cast<int>(ceil(movieSizeMB / disketteSizeMB));


    cout << "Для переноса фильма потребуется " << disketteCount << " дискет(ы)." << endl;

    return 0;
}
