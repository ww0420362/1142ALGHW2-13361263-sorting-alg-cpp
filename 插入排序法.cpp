#include<bits/stdc++.h>
using namespace std;
void Insertion_Sort(vector<int> &arr) {
    int n=arr.size();
    for (int i=1;i<n;i++) {
        int key = arr[i];
        int j=i-1;
        while (j>=0&&arr[j]>key) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
  vector<int> x(1000);
  for(int i=0;i<x.size();i++){x[i]=x.size()-i;}
  Insertion_Sort(x);
  for(auto&v:x){cout<<v<<' ';}
  return 0;
}
