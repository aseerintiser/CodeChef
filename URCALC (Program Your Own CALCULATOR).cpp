#include<bits/stdc++.h>
using namespace std;
int main(){
   double a, b;
   cin >> a >> b;
   char c;
   cin >> c;
   if(c == '+')
        cout << setprecision(7) << fixed << a + b;
    else if(c == '-')
        cout << setprecision(7) << fixed << a - b;
    else if(c == '*')
        cout << setprecision(7) << fixed << a * b;
    else
        cout << setprecision(7) << fixed << a / b;
    return 0;
}
