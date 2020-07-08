#include <iostream>
#include "Beans.h"
using namespace std;

int main(){

    Beans beansObject;
    Beans *beansPointer = &beansObject;

    beansObject.printStuff();
    beansPointer->printStuff();
}
