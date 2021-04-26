#include<iostream>
using namespace std;
int main()
{
    int T,even=0,odd=0;cin>>T;
    while(T--)
    {
        int n;cin>>n;
        if(n%2==0)
            even++;
        else odd++;
    }
    if(even>odd)
        cout<<"READY FOR BATTLE"<<endl;
    else if(even<=odd)
        cout<<"NOT READY"<<endl;
}
