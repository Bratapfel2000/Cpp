#include <iostream>
#include "Beans.h"
using namespace std;

int main(){
    Beans beanObj;
    beanObj.printNewStuff();

    const Beans constObj;
    constObj.printNewStuff2();

}
