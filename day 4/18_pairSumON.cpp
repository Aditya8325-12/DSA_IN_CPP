#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int a[]={2,4,7,11,14,16,20,21};

    int k=31;

    int n=8;

    int low=0;
    int high=n-1;

    while(low <= high)
    {

        cout<<a[low] + a[high]<<endl;
        if(a[low] + a[high]  == k)
        {
            cout<<"v1= "<<a[low]<<" :: v2 == "<<a[high];
        }

        if(a[low] + a[high] > k){
            high--;
        }else{
            low++;
        }
    }


}
