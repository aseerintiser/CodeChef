#include<iostream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int flag=0;
        string s; cin>>s;
        for(int i=0;i<s.size();i=i+2)
        {
            if(s[i]=='A')
            {
                if(s[i+1]=='A')
                {
                    flag=1;
                    break;
                }
            }
            else if(s[i]=='B')
            {
                if(s[i+1]=='B')
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
}
