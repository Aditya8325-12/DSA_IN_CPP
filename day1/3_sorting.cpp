#include<iostream>
using namespace std;
int main()
{

    int a[6]={12,18,20,42,8,10};

    for(int i=0;i<=5;i++)
    {
        cout<<a[i]<<"\t";

    }
    cout<<endl;

    for(int i=0;i<=4;i++)
    {
        for(int j=i+1;j<=5;j++)
        {

            if(a[i] > a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }


    for(int i=0;i<=5;i++)
    {
        cout<<a[i]<<"\t";

    }
    cout<<endl;


}

