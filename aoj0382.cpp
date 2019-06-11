#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N,C,sum = 0;cin >> N >> C;
    for (size_t i = 0; i < C; i++){int a;cin >> a;sum += a;}
    (sum%(N+1)) ? cout <<(sum/(N+1)+1)<< endl : cout << (sum/(N+1)) << endl;
    return 0;
}
