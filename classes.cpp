#include <iostream>

using namespace std;

class ThatsAClass{
    public:
        void coolSaying(){
            cout << "Hello Worlds" << endl;
        }
};


int main()
{
    ThatsAClass thatObject;
    thatObject.coolSaying();
    return 0;
}
