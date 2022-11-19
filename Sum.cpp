#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>d;
    while(d>0)
    {
        cin>>a>>b>>c;
        cout<<endl;
        if(a+b==c || a+c==b || b+c==a)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
        d--;
    }
    return 0;    
}