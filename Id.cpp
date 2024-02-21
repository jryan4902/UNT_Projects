#include <iostream>
#include <string>
using namespace std;
class Student {
    private:
        string name;
        int id;
    public:
        Student(string stuName); //constructor
        static int nextId; //static data member
        void print();
};

int Student::nextId = 1000; //initialize

void Student::print(){
    cout << "Student info: id = "<< id;
    cout << ", name = " << name << "\n";
}

Student::Student(string stuName) :name(stuName) ,id(nextId) {  //constructor
    nextId += 10;
}
int main() {
    Student stu1("Bob");
    Student stu2("John");

    stu1.print();
    stu2.print();

return 0;
}