#include <iostream>
using namespace std;

class Square {
private:
        int *side;
public: 
        Square(): side(new int(0)){} //default constructor
        //copy assingment operator for deep copy
        square &operator=(const Square& other){
                if (this != &other){
                        *side = *(other.side); //deep copy to copy the value
                }
                return *this;
 
        }
        void setSide(int s){
                *side = s;
        }
        int getSide() const{
                return *side;
        }
        int area() const{
                return (*side) * (*side);
        }
};

int main(){
        Square s1, s2, s3;
        s1.setSide(25);
        s2 = s1;
        cout << "S2: "<<s2.getSide() << " the area is " << s2.area() << endl;
        s1.setSide(20);
        s3 = s1;
        cout << "S2: "<<s1.getSide() << " the area is " << s1.area() << endl;
        cout << "S2: "<<s3.getSide() << " the area is " << s3.area() << endl;

return 0;
}