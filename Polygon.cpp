#include <iostream>
using namespace std;

class Polygon{
private:
        int *side;
        int numside;
public:
        //default constructor
        Polygon(int n):numSide(n), side(new int[n]){
                for(int i = 0; i<n; i++){
                        side[i] = 1; //initialize all sides to 1
                }
        }
        //copy constructor
        Polygon(const Polygon &other):numSide(other.numSide), side(new int[other.numSide]) {
                for(int = 0; i < numSide; i++){
                        side[i] = other.side[i]; //deep copy all side
                }
        }
        Polygon &operator=(const Polygon &other){
                if (this != &other){
                        numSide = other.numSide;
                        delete[] side;
                        side = new int[numSide];
                        for(int i = 0; i < numSide; i++){
                                side[i] = other.side[i]; //deep copy all side
                        }
                }
                }
         return *this;
         //destructir
         ~Polygon() {
                delete[] side;
         }
         void setSide(int index, int length){
                side[index] = length;
         } //setter
         void print() const {
                for (int i = 0; i < numSide; i++){
                    cout << side[i]<<" ";
                }
        cout << endl;
         }
};

int main() {
    Polygon p1(5);
    p1.setSide(0, 6);
    p2.setSide(1, 5);
    cout << "P1: ";
    p1.print();
    //copy constructor called
    Polygon p2= p1;
    p2.setSide(3,4);
    cout <<"P2: ";
    p2.print();
    cout << "P1 remain the same: ";
    p1.print();

    //copy assingment operator
    Polygon p3(3); //p#(1, 1, 1)
    cout << "Old p3: ";
    p3.print;
    p3 = p1;

return 0;
}