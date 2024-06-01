
#include<iostream>
using namespace std;

int main()
{

    int a[6]={12,45,23,51,19,8};


    cout<<"unsorted array "<<endl;

    for(int i=0;i<=5;i++)
    {

        cout<<a[i]<<"\t";
    }


    for(int i=1;i<=5;i++)
    {
        int current=a[i];
        int j=i-1;

        while(j>=0 && a[j] > current)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }


    cout<<endl<<"sorted array"<<endl;

    for(int i=0;i<=5;i++)
    {

        cout<<a[i]<<"\t";
    }
}
