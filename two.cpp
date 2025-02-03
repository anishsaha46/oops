// concept of Encapsulation by calculating the area of Rectangle
#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    private:
    double length,breadth;
    public:
    void setDimensions(double l,double b){
        if(l >0 && b>0){
            length=l;
            breadth=b;
        }
    }

    double getArea() const{
        return length * breadth;
    }
};

int main(){
    Rectangle rec;
    rec.setDimensions(5.0,3.0);
    cout<<"Area is"<<rec.getArea()<<endl;
    return 0;
}
