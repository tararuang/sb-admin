#include <iostream>
using namespace std;
int main(){
    char Y,N,x;
    int a,b;
    cout<<"Are you member (Y or N): ";
    cin>>x;
    cout<<endl;
    cout<<"How old are you?: ";
    cin>>a;
    cout<<endl;
    cout<<"Normal price : ";
    cin>>b;
    cout<<endl;
    if (x=='Y')
    {
               if (a<2)
               {
                       cout<<"You have to pay 0"<<endl;
               }
               else if (a<=12||a>=2)
               {
                       cout<<"You have to pay  "<<b*0.3<<endl;        
               }
               else if (a>12)
               {
                       cout<<"You have to pay  "<<b*0.5<<endl;
               }
    }
    else if (x=='N')
    {
                if (a<2)
                {
                        cout<<"You have to pay 0"<<endl;
                }
                else if (a<=10&&a>=2)
                {
                        cout<<"You have to pay  "<<b*0.5<<endl;
                }
                else if (a>10)
                {
                        cout<<"You have to pay  "<<b<<endl;
                }
    }
      
                             
    system ("pause");
    return 0;
}
               
