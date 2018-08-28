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

int least_common_multiple(int a, int b)
{
    int ab = a*b;
    int max = (a>b)?a:b;
    int lcm = ab;
    for (int i=ab; i>=max; i--)
    {
        if ((i%a==0)&&(i%b==0))
        {
            lcm = i;
        }
    }
    return lcm;
}

int factorial(int n)
{
    if (n>1)
        return n*factorial(n-1);
    else
        return n;
}

int minimum_common_divisor(int a, int b)
{
    int ab = a*b;
    int min = (a>b)?a:b;
    int lcm = ab;
    for (int i=1; i<=min; i++)
    {
        if ((a%i==0)&&(b%i==0))
        {
            lcm = i;
        }
    }
    return lcm;
}

char hex_more(int a)
{
    if (a>16)
        return '/';
    switch (a)
    {
        case 16:
            return 'G';
        case 15:
            return 'F';
        case 14:
            return 'E';
        case 13:
            return 'D';
        case 12:
            return 'C';
        case 11:
            return 'B';
        case 10:
            return 'A';
        default:
            return to_string(a)[0];
    }
}

void hex(int m,int d)
{
    string a="";
    while(m/d>0)
    {
        a=hex_more(m%d)+a;
        m = m/d;
    }
    a=hex_more(m)+a;
    cout<<a;
}



int main()
{
    cout<<prime_judge(15)<<endl;
    cout<<least_common_multiple(15,31)<<endl;
    cout<<minimum_common_divisor(15,30)<<endl;
    cout<<factorial(5)<<endl;
    hex(1024,2);
}