#include<iostream>
using namespace std;
int main()
{
     string name;
     cout<<"Hello, please type your name : "<<endl;;
     cin>>name;//input of name
     cout<<"hello,"+name+" "<<endl;//greetings
     cout<<"press 1 to reverse an array ,press 2 to reverse a string : "<<endl;//to reverse array or string
     int p;
     cin>>p;
     if(p==1)//if user press 1
     {
      cout<<"please enter the number of elements : "<<endl;;
           int n;
     cin>>n;
 cout<<"please enter all the elements : "<<endl;;
     int list[n];
     for (int i=0;i<n;i++)//input of elements of array
     {
          cin>>list[i];
     }
     int i=0;//pointer at zero index
     int j=n-1;//pointer at last index
     while(i<=j)//till both do not cross each other
     {
          swap(list[i],list[j]);
          i++;
          j--;
     }
     cout<<"The reversal of your array is : "<<endl;//reversed array
     for (int i=0;i<n;i++)
     {
          cout<<list[i];
     }
     }
     else if(p==2)//if user press 2
     {
 cout<<"please enter String : "<<endl;;
     string s;
     cin>>s;// input the string 
     int n=s.length();
     int i=0;//pointer at 0 index
     int j=n-1;//pointer at last index
     while(i<j)//while i and j do not cross each other
     {
          swap(s[i],s[j]);
          i++;
          j--;
     }
     cout<<"The reversal of your string is : "<<endl;//reversed string
          cout<<s<<endl;
     }
     else //if users enter any garbage value
          cout<<"please do not enter value other than 1 or 2"<<endl;
     cout<<"THANK YOU "<<endl;
}