#include <iostream>
using namespace std;

class Point{
public:
        int x,y;
        Point(int x, int y){
                this->x=x;
                this->y=y;
        }
        bool operator==(const Point& rhs){
                return (x==rhs.x)&&(y==rhs.y);
        }
        bool operator<(const Point& rhs){
                return(x+y)<(rhs.x+rhs.y);
        }
};

int main(){
        int x1, x2, y1, y2;
        cout<<"Enter the first point: ";
        cin>>x1>>y1;
        cout<<"Enter the second point: ";
        cin >>x2>>y2;

        Point p1(x1,y1);
        Point p2(x2,y2);

        if(p1==p2){
                cout << "Same Point" <<"\n";
        }
        else {
                cout << "Diff Point" <<"\n";
        }

        if(p1<p2) {
                cout<<"p1 less than p2"<<endl;
        } else if (p2<p1){
                cout<<"p2 is less than p1"<<endl;
        } else{
                cout<<"Are the same";
        }

return 0;
}