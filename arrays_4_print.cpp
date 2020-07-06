#include <iostream>

using namespace std;

void printArray(int theArray[], int sizeOfArray);

int main(){
    int number_array_1[3] = {20,54,1441};
    int number_array_2[6] = {75,42,97,26,10,94};

    printArray(number_array_2, 6);
}

void printArray(int theArray[], int sizeOfArray){

    for(int x=0; x<sizeOfArray; x++){
        cout << theArray[x] << endl;
    }
}
