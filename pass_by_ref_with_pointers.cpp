#include <iostream>
using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main(){
    int turtle = 23;
    int donkey = 87;

    passByValue(turtle);
    passByReference(&donkey);

    cout << "turtle is now " << turtle << endl;
    cout << "donkey is now " << donkey << endl;
}

void passByValue(int x){
    x = 99;
}

void passByReference(int *x){
    *x = 66;
}
