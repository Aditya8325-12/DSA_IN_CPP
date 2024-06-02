#include<iostream>
using namespace std;

int main()
{
        int r,c;
        cin>>r>>c;

        int a[r][c];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<"r:"<<i<<" c:"<<j<<":-";
                cin>>a[i][j];
                cout<<endl;
            }
        }


         for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]<<"\t";

            }
            cout<<endl;
        }


}
