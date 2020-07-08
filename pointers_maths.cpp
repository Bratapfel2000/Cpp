#include <iostream>
using namespace std;

int main(){

    int numberz[5];
    int *np0 = &numberz[0];
    int *np1 = &numberz[1];
    int *np2 = &numberz[2];
    int *np3 = &numberz[3];

    cout << "np0 is at " << np0 << endl;
    cout << "np1 is at " << np1 << endl;
    cout << "np2 is at " << np2 << endl;
    cout << "np3 is at " << np3 << endl;

    np0 += 3;
    cout << "np0 is now at " << np0 << endl;

}
