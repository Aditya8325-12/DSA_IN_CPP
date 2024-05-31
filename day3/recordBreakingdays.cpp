#include<iostream>
using namespace std;
int main()
{
    int a[8]={1,2,0,7,2,0,2,2};

    int countdays=0;
    int rcday=0;
    for(int i=1;i < 6;i++)
    {
        if(a[i] > a[i-1] && a[i] > a[i+1] && rcday < a[i]  )
        {
            rcday=a[i];
            cout<<a[i]<<"=="<<i<<endl;
            countdays++;
        }
    }

    cout<<"record breking days =="<<countdays;
}
