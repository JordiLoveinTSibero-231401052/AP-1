#include <iostream>

using namespace std;

int main() {
    float luas, p, l;

    // const float PHI = 3.14; cara membuat konstanta

    cout << "Masukkan panjang : ";
    cin >> p;

    cout << "Masukkan lebar : ";
    cin >> l;

    luas = p * l;

    cout << "Luas = " << luas << endl;

    return 0;
}