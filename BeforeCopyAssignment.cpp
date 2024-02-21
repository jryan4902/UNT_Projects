#include <iostream>
using namespace std;

class Point{
private:
        int *x, *y;
public:
        //default constructor
        Point(){
            x = new int(0);
            y = new int(0);
        }
        void setPoint(int i, int j){
            *x = i;
            *y = j;
        }
        void print(){
            cout << "Point: "<<"("<<*x<<", "<<*y<<")"<<endl;
        }
};

int main(){
        Point p1, p2;
        p1.setPoint(5,2); //p1(5,2) p2(0,0)
        p2 = p1; //copy everything to p2 from p1
        p1.setPoint(3,3);
        p1.print(); //(3,3)
        p2.print(); //
        

return 0;
}