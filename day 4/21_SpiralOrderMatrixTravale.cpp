#include<iostream>
using namespace std;

int main()
{

        int r=5,c=6;
        int a[r][c]={
                     {1,5,7,9,10,11},
                     {6,10,12,13,20,21},
                     {9,25,29,30,32,41},
                     {15,55,59,63,68,70},
                     {40,70,79,81,95,105}
                    };


        int r_start=0;
        int r_end=r-1;
        int c_start=0;
        int c_end=c-1;

        while(r_start <= r_end && c_start <= c_end)
        {
            for(int col=c_start;col<=c_end;col++)
            {
                cout<<" "<<a[r_start][col];
            }

            r_start++;
            //top  to bottom ->
            for(int row=r_start;row<=r_end;row++)
            {
                cout<<" "<<a[row][c_end];
            }

             c_end--;

            //right  to left ->
            for(int col=c_end;col>=c_start;col--)
            {
                cout<<" "<<a[r_end][col];
            }

            r_end--;
            //right  to left ->
            for(int row=r_end;row>=r_start;row--)
            {
                cout<<" "<<a[row][c_start];
            }
            c_start++;
        }
}

