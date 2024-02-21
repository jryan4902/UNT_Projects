#include <iostream>

using namespace std;

class Point{
    private:
        int x, y;
    public:
        //overload operator +
        Point operator+(const Point &p){
                Point res;
                res.x = x+p.x;
                res.y = y+p.y;
                return res;
        }
        //overload operator -:
        Point operator-(const Point &p){
                Point res;
                res.x = x-p.x;
                res.y = y-p.y;
                return res;
        }
        //overload insertion and extraction operator
        friend istream& operator>>(istream &in, Point&p){
                cout <<"Enter x and y: ";
                in>>p.x>>p.y;
                return in;
        }
        friend ostream& operator<<(ostream &out, Point&p){
                out<<"("<<p.x<<","<<p.y<<")";
                return out;
        }
};

int main(){
        Point p1, p2;
        cin>>p1;
        cin>>p2;
        //p1.setX(1), wihtout overloading
        Point p3 = p1+p2;
        Point p4 = p1-p2;

        cout << p3 << endl;
        cout << p4 << endl;

return 0;
}