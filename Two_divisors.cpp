#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;

    while (t>0)
    {
        int a,b;
        cin >>a >>b;

        if(b%a==0){
            cout << b*(b/a) << endl;
        }
        else{
            cout << b*(a/__gcd(a,b))<< endl;
        }
        t--;
    }
    return 0;
}