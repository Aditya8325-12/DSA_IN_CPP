#include<iostream>
using namespace std;
int main()
{
    int m=3;
    int n=3;

    int a[m][n]={{1,2,3},{4,5,6},{7,8,9}};

    int k=1;


    int r=0;
    int c=n-1;

    bool flag=false;
    while( r < m  && c < n )
    {
            if(a[r][c]==k)
            {
                flag=true;

                break;
            }

            a[r][c]<k ? r++ :c--;


    }


    if(flag)
    {
        cout<<"element found"<<r<<":"<<c;
    }
    else
    {
        cout<<"element not found ";
    }

}
