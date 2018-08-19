//
// Created by Qianyong on 2018/8/19.
//
#include <iostream>
using  namespace::std;

double ca_retg_area(double l, double w);

int main()
{
    double l = 0, w = 0;
    cout<<"Please input the length and width of rectangle: ";
    cin>>l>>w;
    cout<<endl<<"The area of rectangle is: "<<ca_retg_area(l,w);
}

double ca_retg_area(double l, double w)
{
    return l*w;
}