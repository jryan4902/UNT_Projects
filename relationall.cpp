#include <iostream>
using namespace std;

class Myclass{
private:
        int value;
public:
        //default constructor
        Myclass(int val): value(val){}
        //copy constructor
        Myclass(const Myclass &other):value(other.value){
                cout<<"Copy constructor called"<<endl;
        }
        //overload < operator
        bool operator<(const Myclass &rhs){
                return value<rhs.value;
        }
        int getValue() const{return value;}//getter
};

int main(){
        Myclass obj1(10);
        Myclass obj2(20);
        //using the copy constructor
        Myclass obj3 = obj2; // same as Myclass obj3(obj2);
        cout<<"Obj1 = " << obj1.getValue()<<endl;
        cout<<"Obj2 = " << obj2.getValue()<<endl;
        cout<<"Obj3(copy of obj2) = " << obj3.getValue()<<endl;

        //using the overload< operator
        if(obj3<obj2){
                cout<<"Obj3 is less"<<endl;
        }else{
                cout<<"Obj3 is not less"<<endl;
        }

return 0;
}
