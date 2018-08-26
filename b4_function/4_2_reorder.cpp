//
// Created by Qianyong on 2018/8/25.
//

#include <iostream>

using namespace::std;

int reorder(int num)
{
    int rt = 0;
    while (num>0)
    {
        rt = rt*10 + num%10;
        num/=10;
    }
    return rt;
}

int main()
{
    cout<<reorder(1234)<<endl;
}