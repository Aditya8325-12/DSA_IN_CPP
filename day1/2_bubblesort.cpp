#include<iostream>
using namespace std;
int main()
{

    int a[6]={2,4,5,3,1,6};

    for(int i=0;i<=5;i++)
    {
        cout<<a[i]<<"\t";

    }
    cout<<endl<<"new aray"<<endl;



    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=5 - i ;j++)
        {

            if(a[j] > a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }


    for(int i=0;i<=5;i++)
    {
        cout<<a[i]<<"\t";

    }
    cout<<endl;


}


