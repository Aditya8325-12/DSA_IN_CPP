#include<iostream>
using namespace std;

int main()
{
    int a1[3][4]={
                {2,4,1,2},
                {8,4,3,6},
                {1,7,9,5}
                };
    int a2[4][3]={
                {1,2,3},
                {4,5,7},
                {7,8,9},
                {4,5,6}};

    int c[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<4;k++)
            {

                c[i][j] += a1[i][k] * a2[k][j];
            }

        }
    }


        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<c[i][j]<<"\t";

            }
            cout<<endl;
        }

}
