#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double movieSizeGB;
    const double disketteSizeMB = 1.44;

  
    cout << "������� ����� ������ (� ����������): ";
    cin >> movieSizeGB;


    double movieSizeMB = movieSizeGB * 1024;


    int disketteCount = static_cast<int>(ceil(movieSizeMB / disketteSizeMB));


    cout << "��� �������� ������ ����������� " << disketteCount << " ������(�)." << endl;

    return 0;
}
