#include <iostream>
#include <string>

using namespace std;

class ThatsANewClass{
    public:
        ThatsANewClass(string z){
            setName(z);
        }
        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }
    private:
        string name;

};


int main()
{
    ThatsANewClass newz("New Name for the Class");
    cout << newz.getName()<< endl;

    ThatsANewClass oldz("Other Name for the Class");
    cout << oldz.getName();

    return 0;
}
