#include<bits/stdc++.h>
using namespace std;
int reverseDigit(int n){
    int revNum = 0;
    while(n > 0){
        int ld = n % 10;
        revNum = (revNum * 10) + ld;

        n = n / 10;
    }

    return revNum;
}

int main(){

    int N;
    cin>>N;
    int result = reverseDigit(N);

    cout<<result<<endl;

}