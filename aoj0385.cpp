#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main (){
    int N;
    cin >> N;
    int a[300000],b[300000];
    for (size_t i = 0; i < N; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b,b+N);
    int d = 0;
 
    int Q;
    cin >> Q;
    
    for (size_t i = 0; i < N; i++)
    {
        d+=(a[i]==b[i])?0:1;
    }
    if(d == 0){
        cout << 0 << endl;
        return 0;
    }
    for (size_t i = 1; i <= Q; i++)
    {
        int x , y;
        cin >> x >> y;
        if(a[x-1]!=b[x-1])d--;
        if(a[y-1]!=b[y-1])d--;
        swap(a[x-1],a[y-1]);
        if(a[x-1]!=b[x-1])d++;
        if(a[y-1]!=b[y-1])d++;
        if(d == 0){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
    
}


