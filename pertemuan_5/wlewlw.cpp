#include <iostream>

using namespace std;
int main()
{
a:
    cout << "hello world" << endl;
    goto d;
b:
    cout << "USU" << endl;
    return 0;
c:
    cout << "Fasilkom TI" << endl;
    goto d;
d:
    cout << "Ilmu Komputer" << endl;
    goto c;
}

