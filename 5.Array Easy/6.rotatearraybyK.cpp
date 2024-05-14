#include<bits/stdc++.h>
using namespace std;

void Rotateeletoright(vector<int>arr,int n,int k){
    k = k%n;

    reverse(0,n-k-1);
    reverse(n-k,n-1);
    reverse(0,n-1);
}

int main(){
    vector<int>arr = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 2;
  Rotateeletoright(arr, n, k);
  cout << "After Rotating the k elements to right ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}