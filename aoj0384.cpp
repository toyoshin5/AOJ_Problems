#include<iostream>
#include<cmath>
using namespace std;
int main (){
    int a,n,m,summ = 0,count = 0;
    cin >> a >> n >> m;

    for (size_t j = 1; j < m; j++)
    {
        for (size_t i = 0; i < 9; i++)
         {
            summ += (j/int(pow(10,i))%10);
         }
        if(j == pow(summ + a,n))count++;
        summ = 0;
    }
    cout << count << endl;
    
}