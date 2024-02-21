#include <iostream>
using namespace std;

class MyArray{
private: 
        int data[5];
public:
        MyArray(){
                for(int i = 0; i<5; i++){
                    data[i]=i; //initialize value
                }
        }
        //copy constructor
        void display(){
                for(int i = 0; i<5; i++){
                    cout << data[i]<< " ";
                }
        cout << "\n";
        }
        //setter
        void setValue(int index, int value){
                data[index] = value;
        }
};

int main(){
    MyArray arr1;
    MyArray arr2 = arr1; //shallow copy
    arr1.display();
    arr2.display();

    arr2.setValue(1, 999);
    cout << "After modification: ";
    arr1.display(); //0 1 2 3 4
    arr2.display(); //0 999 2 3 4

return 0;
}