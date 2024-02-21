#include <iostream>
using namespace std;

class Classroom{
public:
        static int board; //one board shared by all instances of classroom
        int desk;
        void writeOnDesk(int desk){
                this->desk = desk;
        }
        static void writeOnBoard(int content){
                Classroom::board = content; //refer to board of classroom
        }
};

int Classroom::board = 0;

int main(){
    Classroom s1;
    Classroom s2;

    Classroom::writeOnBoard(10); //both student share the same content
    s1.writeOnDesk(1);
    s2.writeOnDesk(2);

    cout << "Board: "<<Classroom::board<<endl;
    cout << "Student 1 "<<s1.desk<<endl;
    cout << "Student 2 "<< s2.desk<<endl;
}