#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int T; cin>>T;

    while(T--)
    {
        int n; cin>>n;
        ostringstream str1;
        str1<<n;
        string s = str1.str();

        int sum = 0;
        int len = s.length();

        char x = s[0];
        int p = (int)x;
        p = p - 48;

        char y = s[len-1];
        int q = (int)y;
        q = q - 48;

        sum = p + q;

        cout<<sum<<endl;
    }
}
