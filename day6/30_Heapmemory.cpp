#include<iostream>
using namespace std;
int main()
{
    int a=20;

    int *p=new int(); // allocation memory in heap

    p=&a;

    cout<<"value=="<<*p;

    delete(p);  // deallocation memory in heap


    cout<<endl<<"value=="<<p;  //after deallocation memory in heap p pointer it will still but it will not store the any value

    // this situation called dangling pointer
    p=NULL;

    cout<<endl<<"value of p == "<<p;

}
