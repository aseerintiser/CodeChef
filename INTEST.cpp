#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int total=0;

    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        if(t%k==0)
            total++;
    }
    cout<<total<<endl;
}
