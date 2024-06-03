#include <iostream>
using namespace std;

int main(){
    //while
/* int i=1;
while(i <= 10) {
    if(i % 2 == 0){
        cout << i << " ";
    }

    //do while
    i++; */
 /*    int i = 1;
    do {
        cout << i << endl;
    } while(i <= 0); */

    //for
    for (int i = 1; i <=5; i++) {
        for(int j = 1; j <= i; j++){
        cout << "* ";
        }
        cout << endl;
    }
}
