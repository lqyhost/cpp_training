//
// Created by Qianyong on 2018/8/19.
//
#include <iostream>
using  namespace::std;

class Rectangle
{
public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }
    double get_area()
    {
        return length*width;
    }
private:
    double length = 0;
    double width = 0;
};


int main()
{
    double l = 0, w = 0;
    cout<<"Please input the length and width of rectangle: ";
    cin>>l>>w;
    Rectangle r = Rectangle(l,w);
    cout<<endl<<"The area of rectangle is: "<<r.get_area();
}