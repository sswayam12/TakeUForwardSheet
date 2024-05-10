#include<bits/stdc++.h>
using namespace std;

vector<int>Divisor(int n){
    vector<int>divisor;

    int SqrtN = sqrt(n);

    for(int i = 1;i <= SqrtN;i++){
        if(n % i == 0){
            divisor.push_back(i);
        }
        if (i != n / i) {
                // Add the counterpart
                // divisor to the list
                divisor.push_back(n / i); 
            }
    }
}

int main(){
    int number = 12;
    vector<int> divisors = Divisor(number);

    cout << "Divisors of " << number << " are: ";
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;

    return 0;

}