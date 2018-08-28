//
// Created by Qianyong on 2018/8/26.
//

#include <iostream>

using namespace::std;

//1
void order_list()
{
    int length = 10;
    int a[length];
    for(int i=0;i<length;i++)
    {
        a[i] = rand();
    }
    for(int i=0;i<length;i++)
    {
        cout<<a[i]<<endl;
    }
    int ex = 0;
    for (int j=1;j<length;j++)
    {
        for (int k=j;k>0;k--)
            if (a[k]>a[k-1])
            {
                ex = a[k-1];
                a[k-1] = a[k];
                a[k] = ex;
            }
    }
    cout<<endl;
    for(int i=0;i<length;i++)
    {
        cout<<a[i]<<endl;
    }
}

//2
void score_statistics()
{
    int student_num = 0;
    cout<<"please input sutudent numbers:";
    cin>>student_num;
    double score_statistics[student_num][3];
    double class_statistics[3]={0.0,0.0,0.0};
    for (int i=1;i<student_num+1;i++)
    {
        cout<<"please enter the score of No. "<<i<<" student (Chinese/Math/English):";
        cin>>score_statistics[i][0]>>score_statistics[i][1]>>score_statistics[i][2];
        class_statistics[0] += score_statistics[i][0];
        class_statistics[1] += score_statistics[i][1];
        class_statistics[2] += score_statistics[i][2];
    }
    cout<<"class total:"<<class_statistics[0]<<"/"<<class_statistics[1]<<"/"<<class_statistics[2]<<endl;
    cout<<"class average:"<<class_statistics[0]/student_num<<"/"<<class_statistics[1]/student_num<<"/"<<class_statistics[2]/student_num<<endl;
    for (int i=1;i<student_num+1;i++)
    {
        cout<<"No. "<<i<<"student's total score is "<<score_statistics[i][0]+score_statistics[i][1]+score_statistics[i][2]<<endl;
        cout<<"No. "<<i<<"student's average score is "<<(score_statistics[i][0]+score_statistics[i][1]+score_statistics[i][2])/3<<endl;
    }
}

//3
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

//4

void insert_string()
{
    char a[5] = {'s','t','o','p','a'};
    char b[7] = {'c','o','u','n','t','r','y'};
    int insert_place=0;
    cout<<"please insert place: ";
    cin>>insert_place;
    while(insert_place>= sizeof(a)/ sizeof(a[0]))
    {
        cout<<"wrong! please insert place: ";
        cin>>insert_place;
    }
    char c[(sizeof(a)+sizeof(b))/sizeof(a[0])] = {};
    for (int i=0;i<(sizeof(c)/ sizeof(c[0]));i++)
    {
        if (i<insert_place)
            c[i]=a[i];
        else if (i<insert_place+sizeof(b)/sizeof(b[0]))
            c[i]=b[i-insert_place];
        else
        {
            cout<<a[i-sizeof(b)/sizeof(b[0])]<<endl;
            c[i]=a[i-sizeof(b)/sizeof(b[0])];
            cout<<c[i]<<endl<<c<<endl;
        }
    }
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<"*"<<endl;
}

//5 reorder

void reorder()
{
    char a[14]="this is good!";
    for(int i=sizeof(a)/ sizeof(a[0]);i> 0;i--)
    {
        cout<<a[i-1];
    }
    cout<<endl;
}

//5
void del()
{
    char a[14]="this is good!";
    char del_c='o';
    cout<<a;
    cout<<"please input del:";
    cin>>del_c;
    int num=0;
    for(int i=0;i<sizeof(a)/ sizeof(a[0]);i++)
    {
        if (a[i]==del_c)
        {
            num+=1;
            for (int j=i;j<sizeof(a)/ sizeof(a[0])-num+1;j++)
            {
                a[j]=a[j+1];
            }
            a[sizeof(a)/ sizeof(a[0])-num]='\0';
        }
    }
    cout<<a;
}

void min_string()
{
    char a[15]="sdfsadfsdsssss";
    char b[12]="asdfasdfas";
    char c[55]="sdfasdfasdfasdf";
    if (sizeof(a)<sizeof(b))
    {
        cout<<(sizeof(a)<sizeof(c)?a:c);
    } else
    {
        cout<<(sizeof(b)<sizeof(c)?b:c);
    }
}

int main()
{
    //order_list();
    //score_statistics();
    //insert_string();
    //reorder();
    //del();
    min_string();
}
