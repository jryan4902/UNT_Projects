#include <iostream>
using namespace std;

class MyClass{
public:
        MyClass(int size){
                cout << "Constructor called" << endl;
                data = new int(size);
                this->size = size;
        }
        MyClass(const MyClass& other){
                cout << "Copy constructor called"<<endl;
                data = new int[other.size];
                size = other.size;
                for(int i = 0; i < size; i++){
                        data[i] = other.data[i]; //copy each element
                }
        }
        ~MyClass(){
                cout <<"Destructor called"<<endl;
                delete[] data;
        }
        void setData(int index, int value){
            data[index] = value;
        }
        int getData(int index) const{
                return data[index];
        }
        void printData(){
            for(int i = 0; i < size; i++) {
                    cout << data[i] << " ";
            }
            cout << endl;
        }
private:
        int *data;
        int size;
};

int main(){
        MyClass obj1(5);
        cout << "Set some data in obj1"<<endl;
        for(int i = 0; i < 5; i++){
                obj1.printData();
                obj1.setData(i,i+1);
        }
        MyClass obj2 = obj1;
        obj2.printData();
        cout << "Modify obj2: ";
        for(int i = 0; i < 5; i++){
                obj2.printData();
                obj2.setData(i, obj2.getData(i)*10);
        }
        cout << "Final version: ";
        obj1.printData();
        obj2.printData();

return 0;
}