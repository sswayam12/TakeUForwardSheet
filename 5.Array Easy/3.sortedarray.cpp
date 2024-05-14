#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n){
    for(int i = 0;i<n;i++){
        if(arr[i] > arr[i+1])
            return false;
    }
        return true;
    
}

int main(){
    int arr[] = {1, 2, 4, 3, 5}, n = 5;

    bool result = isSorted(arr,n);

    cout<<result<<endl;

}