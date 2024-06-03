#include <iostream>
using namespace std;

int main() {
    int i = 1;

ulang:
    if (i % 2 == 0) {
        cout << i << " ";
    }
    i++;
    if (i <= 10) {
        goto ulang;
    }

    return 0;
}
