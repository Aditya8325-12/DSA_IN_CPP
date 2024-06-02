#include<iostream>
using namespace std;


void increment(int *a)
{
     ++*a;
}


int main()
{
    int a1=2;
    int *a=&a1;
    increment(a);
    cout<<a1;
}
