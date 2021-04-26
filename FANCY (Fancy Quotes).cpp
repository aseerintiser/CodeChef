#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int flag=0;
        string s;
        cin.ignore();
        getline(cin,s);

        stringstream str(s);
        string word;
        while(str>>word)
        {
            if(word=="not")
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"Real Fancy"<<endl;
        }
        else
        {
            cout<<"regularly fancy"<<endl;
        }
    }
}
