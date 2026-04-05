#include<bits/stdc++.h>
using namespace std;
void Selection_Sort(vector<int> &x){
	for(int i=0;i<x.size()-1;i++){
	int m=i;
  		for(int j=i+1;j<x.size();j++){
  			if(x[i]>x[j]){m=j;}
  		}
  		swap(x[i],x[m]);
  	}
}
int main(){
  vector<int> x(1000);
  for(int i=0;i<x.size();i++){x[i]=x.size()-i;}
  Selection_Sort(x);
  for(auto&v:x){cout<<v<<' ';}
  return 0;
}
