//5920501456 chanikarn Intarapairoj
#include<iostream>
using namespace std;
int main ()
{
    int  a,b,c,d,x,y,z;
    cout<<"Enter 1st number :";
    cin>>a;
    cout<<"Enter 2nd number :";
    cin>>b;
    cout<<"Enter 3rd number :";
    cin>>c;
    cout<<"Enter 4th number :";
    cin>>d;
     if ( d<a||d<c||d<b)
    {
       cout<<" 4th number is Minimum"<<endl;} 
    else if (a<b||a<c||a<d)
    {
       cout<<" 1st number is Minimum"<<endl;}
    
    
   else if (b<a||b<c||b<d)
    {
       cout<<" 2nd number is Minimum"<<endl;} 
       else if(c<a||c<b||c<d)
    {
       cout<<" 3rd number is Minimum"<<endl;}
       
    if (a>b||a>c||a>d)
    {
       cout<<" 1st number is Maximum"<<endl;}
    else if ( d>a||d>c||d>b)
    {
       cout<<" 4th number is Maximum"<<endl;}
   
        else if (b>a||b>c||b>d)
    {
       cout<<" 2nd number is Maximum"<<endl;}
    else if(c>a||c>b||c>d)
    {
       cout<<" 3rd number is Maximum"<<endl;}
      x=d;
      y=a;
       z=x-y;
    cout<<"The difference between Min. and Max. is"<<z<<endl;
   
    
       system ("pause");
       return 0;
       }
       
