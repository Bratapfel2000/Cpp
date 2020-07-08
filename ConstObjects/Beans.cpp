#include "Beans.h"
#include <iostream>
using namespace std;

Beans::Beans()
{
}

void Beans::printNewStuff(){
    cout << "this is a regular function" << endl;
    }

void Beans::printNewStuff2() const{
    cout << "i am the constant function"  << endl;
}
