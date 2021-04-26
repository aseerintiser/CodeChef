#include <iostream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int n,k; cin>>n>>k;
        string s; cin>>s;
        int cap=0, small=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                cap++;
            else if(s[i]>='a' && s[i]<='z')
                small++;
        }

        if(cap==small)
        {
            if(k>=cap)
                cout<<"both"<<endl;
            else if(k<cap)
                cout<<"none"<<endl;
        }
        else if(cap<small)
        {
            if(k>=small)
                cout<<"both"<<endl;
            else if(k<cap)
                cout<<"none"<<endl;
            else
                cout<<"chef"<<endl;
        }
        else if(cap>small)
        {
            if(k>=cap)
                cout<<"both"<<endl;
            else if(k<small)
                cout<<"none"<<endl;
            else
                cout<<"brother"<<endl;
        }
    }
}
