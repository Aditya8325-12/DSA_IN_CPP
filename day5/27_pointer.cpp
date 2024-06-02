#include<iostream>
using namespace std;

int main()
{

    int arr[]={10,20,30};


    int *ptr=&arr[0];

    //cout<<*ptr;

    //cout<<*ptr;

    //cout<<*(arr+1);

    for(int i=0;i<3;i++)
    {

        cout<<*(arr+i);
    }


  //  pointer to pointer

  cout<<endl;
  int aa=40;
  int *ptr1=&aa;
  int **p=&ptr1;

  cout<<ptr1;
  cout<<*p;
}
