#include<iostream>
using namespace std;


 int binarySearch(int key, int a[],int Size)
 {
    int s=0;
    int e=Size-1;


    while(s < e)
        {

            int mid=(s+e)/2;

            if(a[mid]==key)
            {
               return mid;
            }else
            if(a[mid]< key)
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }

        }
     return -1;
 }

int main()
{

    int a[6]={12,18,20,42,8,10};


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
    cout<<binarySearch(81,a,6)<<endl;




}





