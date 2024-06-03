#include<iostream>

//include the string header  file
#include<string>

//include algorithm file for using the sort function
#include<algorithm>

using namespace std;
int main()
{

//    decaleration of string
    string str1="aditya";
    string str2=(5,"adity");
    string str;

//input string
    cin>>str;
    cout<<str<<endl;

//clear the string
    str.clear();

//input line and store in string
    getline(cin,str);
    cout<<"string=="<<str;

//append the string
    string s1="test is";
    string s2="good";
    cout<<s1.append(s2)<<endl;
//another way of appending the string
//    cout<<s1+s2;


//inserting the specific index;
    string s4="aditya";
    s4.insert(0,"mr:");
    cout<<s4;



//assging the new value to the previous variable
    string s5="aditya";
    s5.assign("enter name");
// also use = operator just like
//  s1="new string ";
    cout<<s5;



//access the element using the index
    string s6="aditya";
    cout<<s6[0]<<endl;
    cout<<s6.at(2);

//comparing the string
    string s7="adi";
    string s8="adi";

    if(s7.compare(s8)==0)
    {
        cout<<"string are equal";
    }
    else{
        cout<<"String are not equal";
    }

//check string are empty or not
    string s9="adi";
    if(s9.empty())
    {
        cout<<"string are empty ";
    }
    else{
        cout<<"String are not empty";
    }

//delete the some part of string using the erase function
    string s10="aditya";
    s10.erase(1,2);
    cout<<s10;


//finding the sub string in the give string or not
    string s11="aditya";
//find () it will return the starting index of the given string
    cout<<s11.find("it");


// finding the length of the given string
    cout<<endl<<s11.length();

// finding the size of the given string
    cout<<endl<<s11.size();


// resize the give string to specific length
    s11.resize(3);
    cout<<s11;

// creating the substring of the given string
    string s12="adityaasnjahd";
    string s13=s12.substr(2,5);
    cout<<s12;


// convert the string to the int data type
    string s14="12";
    cout<<stoi(s14)+2<<endl;

// convert the int to string
    int s15=12;
    cout<< to_string(s15) +"1"<<endl;


// sort the string using the algorithm lib

    string s16="asdfsdnfkasndfjkasfem";

//    .begin() gives the starting index of the given string
//    .end gives the ending index of the given string
    sort(s16.begin(),s16.end());
    cout<<s16;


}
