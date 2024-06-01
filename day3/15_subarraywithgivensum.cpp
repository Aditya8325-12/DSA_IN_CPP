
#include<iostream>
using namespace std;
int main()
{

    int a[5]={1,2,3,7,5};
    int s=-1;
    int e=-1;
    int sum=0;
    int j=0,i=0;
    while(j < 5 && sum + a[j] <= 12)
    {
        sum +=a[j];
        j++;
    }

    if(sum==12)
    {

        cout<<"s=="<<s<<"::e=="<<e;
    }


    while(j < 5 )
    {
        sum += a[j];
        while(sum > 12)
        {
            sum -=a[i];
            i++;
        }

        cout<<sum;
        if(sum == 12)
        {
            s=i+1;
            e=j+1;
            cout<<"s=="<<s<<"::e=="<<e;

            break;
        }
        j++;
    }

}
