#include<iostream>
#include<vector>
using namespace std;
int main(){
    int A,B,X,sum = 0;
    cin >> A >> B >> X;
    if(A/2 >= B){
        sum = B*(X/500+1);
    }
    else{
        while(X>=1000){
            X-=1000;
            sum+=A;
        }
        sum+=(X>=500)?A:B;
    }
    cout << sum << endl;
    
    return 0;
}

//180 100 2400 
//460
//200 90 2018
//450