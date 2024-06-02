#include<iostream>
using namespace std;

int main()
{

    //    check input output
       // char a[100];

       // cin>>a;

       // cout<<a;

    //check word is paliadrom or not

    int s=5;

    char word[s+1];
    cin>>word;

    bool flag=false;
    for(int i=0;i<s;i++)
    {
        if(word[i]!=word[s-1-i])
        {
            flag=true;
        }
    }
    if(flag==false)
    {
        cout<<" paliadrom  word";
    }
    else{
        cout<<"not a paliadrom";
    }
}
