//
// Created by Qianyong on 2018/8/25.
//

#include <iostream>

using namespace::std;

int hanoi(int n);

int main()
{
    int han =0;
    cout<<"enter the number of hanoi:";
    cin>>han;
    cout<<"need "<<hanoi(han)<<" step to move "<<han<<" floor of hanoi";
}

int hanoi(int n)
{
    if (n==1)
        return 1;
    else
        return 2*hanoi(n-1)+1;
}