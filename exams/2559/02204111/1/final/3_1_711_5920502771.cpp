#include<iostream>
using namespace std;
int main()
{
string a,b;
int c;
cout<<"Enter test :";
getline(cin,a,'\n');
cout<<"Enter keyword :";
getline(cin,b,'\n');
c=a.find(b,0);
if(c>=0)
cout<<"'"<<b<<"'"<<"is in abover test."<<endl;     
else
cout<<"Incorrect keyword!"<<endl; 
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
    
system("pause");
return 0;
}