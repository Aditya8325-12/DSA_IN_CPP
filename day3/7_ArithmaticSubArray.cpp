#include<iostream>
using namespace std;
int main()
{
    int a[7]={10,7,4,10,11};


    int pd=0;
    int diff=0;
    int maxlen=0;
    int len=0;
    for(int i=1;i<=6;i++)
    {
            cout<<endl;

            diff=a[i]-a[i-1];

            if(pd != diff)
            {
                if(maxlen < len)
                {
                        maxlen=len;
                }
                len=1;
                pd=diff;
            }
            else{
                pd=diff;
                len++;
            }


    }

    cout<<endl<<"max len "<<maxlen;
}
