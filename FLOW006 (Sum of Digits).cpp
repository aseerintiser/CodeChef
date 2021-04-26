// Sum of Digits
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
        string s = str1.str();  //string of numbers.

        long long sum = 0;
        int len = s.length();
        for(int i=0;i<len;i++)
        {
            char x = s[i];
            int p = (int)x;
            p = p - 48;  //we get digits.

            sum = sum + p;
        }
        cout<<sum<<endl;
    }
}
