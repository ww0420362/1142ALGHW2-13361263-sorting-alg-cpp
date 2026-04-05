#include<bits/stdc++.h>
using namespace std;
void Bubble_Sort(vector<int> &x) {
    int n=x.size();
    for (int i=n-1;i>0;i--) {
        for(int j=1;j<=i;j++){
        	if (x[j-1]>x[j])swap(x[j-1],x[j]);
        }
    }
}
int main(){
  vector<int> x(1000);
  for(int i=0;i<x.size();i++){x[i]=x.size()-i;}
  Bubble_Sort(x);
  for(auto&v:x){cout<<v<<' ';}
  return 0;
}
