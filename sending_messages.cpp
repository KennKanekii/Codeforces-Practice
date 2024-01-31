#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;

    while (t>0)
    {
        int n;
        long long f,a,b;
        cin >>n >>f >>a >>b;
        vector<int>arr(n+1);
        arr[0] =0;
        for(int i=1; i<=n; i++){
            cin >>arr[i];
        }
        for(int i=1; i<=n; i++){
            long long time_a = a*static_cast<long long>(arr[i] -arr[i-1]);
            f -= min(time_a,b);
        }
        cout << (f > 0 ? "YES" : "NO") << endl;
        t--;
    }
    return 0;
}