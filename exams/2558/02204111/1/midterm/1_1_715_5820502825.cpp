#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x,y,a,b,cost;
    cout<<"Please input usage : ";cin>>x;
    if(x<0)
    cout<<"Invalid Input !!! "<<endl;
    cout<<"Please input voltage : ";cin>>y;
    cout<<endl;
    do
    {  
       
       if(y>=22||y<=33)
           {
           cout<<"Electricity Cost : "<<x*2.4649<<endl;
           cout<<"Service : "<<228.17<<endl;
           cout<<"Ft : "<<2.4649*46.38<<endl;
           cout<<"Vat 7 % : "<<7/100*x*2.4649<<endl;
           cost=(x*2.4649)+(228.17)+(46.38*x)+(7/100);
           cout<<endl;
           cout<<"Total cost : "<<cost<<" Baht\n";
           } 
       if(y<22)
           {
           if(x>=0||x>=150)
           cout<<"Electricity Cost 0-150: "<<(x*1.8047)+(40.90)+(46.38*x)+(7/100)<<endl;
           else if(b>150||b>=400)
           cout<<"Electricity Cost 151-400: "<<(x*2.7781)+(40.90)+(46.38*x)+(7/100)<<endl;
           else if(b>400)
           cout<<"Electricity Cost 401 -> : "<<(x*2.9780)+(40.90)+(46.38*x)+(7/100)<<endl;
           }
    }
    while(y<0);  
    
system ("pause");
return 0;
}
    
    
