#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Circle{
private:
        double radius;
        static int circleCount; //keep track of the number of circles created
        double calcArea(){
                return M_PI*radius*radius;
        } //private helper function
public:
        Circle(){
                radius = 0;
                circleCount++;
        } //default constructor
        Circle(double r){
                radius = r;
                circleCount++;
        }// second constructor
        static int getCircleCount() {return circleCount;}//accessor to read
        void display() {
                cout<<"Circle info: "<<radius<<" "<< calcArea()<<"\n";
        }
};
int Circle::circleCount = 0; //intitailizing static data memeber
int main() {
        Circle c1,c2(5),c3(8);
        cout << "Total number of circles: " << Circle::getCircleCount()<<"\n";
        c1.display();
        c2.display();
        c3.display();


return 0;
}