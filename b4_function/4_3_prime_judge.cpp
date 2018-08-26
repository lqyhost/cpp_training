//
// Created by Qianyong on 2018/8/25.
//

#include <iostream>

using namespace::std;

bool prime_judge(int num)
{
    if (num<=1)
        return false;
    for (int i=2; i<num/2+1; i++)
        if (num%i == 0)
            return false;
    return true;
}

int main()
{
    cout<<prime_judge(15);
}