#include <iostream>
using namespace std;

class Number{
public:
        int value;
        Number(int val):value(val){ //constructor 
                cout << "Number "<< value <<" created"<< endl;
        }
        ~Number() { //destuctor
                cout << "Number "<< value<<" destroyed"<< endl;
        }
};

int main() {
        Number *n1 = new Number(10);
        Number *n2 = new Number(20);
        Number *n3 = new Number(30);
        Number *n4 = new Number(40);

        delete n1;
        delete n2;
        delete n3;
        delete n4;
}