#include <iostream>
#include <string>

using namespace std;
class Person{
private:
        string name;
        int age;
public:
        //overload insertion operation
        friend ostream& operator<<(ostream &out, Person &p){
                out<<"Name: "<<p.name<<"\n";
                out<<"Age: "<<p.age<<"\n";
                return out;
        }
        //overload extraction operator
        friend istream& operator<<(istream &in, Person &p){
                cout<<"Enter name: ";
                getline(in, p.name);
                cout<<"Enter age: ";
                in>>p.age;
                return in;
        }
};

int main(){
        Person p;
        cin >> p;
        cout<<p;

return 0;
}