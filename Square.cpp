#include <iostream>
using namespace std;

class Square{
private: 
        int side;
public:
        Square(int s){
                side = s;
        } //constructor
        void set(int s){side =s;} //setter
        int get() const{return side;} //getter
};

int main(){
        Square s1;(50); //create a square with side of 50
        Square s2 = s1;
        cout<<s1.get()<<" "<<s2.get()<<endl; //50 50
        s2.get(33);
        cout<<s1.get()<<" "<<s2.get()<<endl; //50 33
}