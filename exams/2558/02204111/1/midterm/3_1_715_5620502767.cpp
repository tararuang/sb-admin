#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char y;
   int a,b,c,d;
    cout<<"Are you member (Y or N): ";cin>>y;
    cout<<"How old are you?: ";cin>>a;
    cout<<"Normal price :";cin>>b;
    
    if(y=='Y')
    {
              if(a<2)
              cout<<"You have to pay 0 ";
              else if(a>=2&&a<12)
              {
              c=(b-(b*70/100));
              cout<<"You have to pay "<<c;
              }
              else if(a>12)
              {
              c=(b-(b*50/100));
              cout<<"You have to pay "<<c;
              }
              }
              else
              {
              if(a<2)
              cout<<"You have to pay 0 ";
              else if(a>=2&&a<10)
              {
              c=(b-(b*50/100));
              cout<<"You have to pay "<<c;
              }
              else if(a>10)
              {
              c=b;
              cout<<"You have to pay "<<c;
              }
              }
              
    system ("pause");
    return 0;
}
