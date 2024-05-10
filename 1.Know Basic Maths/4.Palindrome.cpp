#include<bits/stdc++.h>
using namespace std;

bool Palindrome(int n){
    int originalNum = n;
    int revNum = 0;
    while(n > 0){
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }
    if(revNum == originalNum){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int N = 1561;

    bool ans = Palindrome(N);

    cout<<ans<<endl;


}