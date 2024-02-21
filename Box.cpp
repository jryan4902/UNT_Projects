#include <iostream>
using namespace std;

class Box{
public: 
        Box() {
                length = 1;
                width = 1;
                height = 1;
        }   // default constructor

        Box(int side) : length(side), width(side), height(side){} //2nd constructor
        Box(int l, int w, int h): length(l),width(w), height(h) {}
        void display(){
            cout << length << " "<<width<< " "<<height<< endl;
            if(isSmall()){
                cout<<"It is a small box."<<endl;
            }
            else{
                cout << "A large Box." << endl;
            }
        }
private:
        int length, width, height;
        bool isSmall(){
            return (length*width*height)<100;
        }
};

int main() {
    Box b1;
    Box b2(5);
    Box b3(6, 7, 4);

    b1.display();
    b2.display();
    b3.display();

cout << endl;

return 0;
}