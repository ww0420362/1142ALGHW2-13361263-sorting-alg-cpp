#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& arr, int left, int mid, int right){
	int x=left,y=mid+1;
	vector<int> temp;
	while(x<=mid&&y<=right){
		if(arr[x]<=arr[y]){temp.push_back(arr[x++]);}
		else if(arr[x]>arr[y]){temp.push_back(arr[y++]);}
		//for(int i=0;i<temp.size();i++){cout<<temp[i]<<' ';}cout<<endl;
	}
	while(x <= mid) temp.push_back(arr[x++]);
    while(y <= right) temp.push_back(arr[y++]);
	for(int i=0;i<arr.size();i++){arr[i]=temp[i];}
}
int main(){
  vector<int> x({1,3,5,7,9}),y({2,4,6,8,10});
  x.insert(x.end(),y.begin(),y.end());
  int left=0,mid=x.size()/2-1,right=x.size()-1;
  merge(x,left,mid,right);
  for(auto&v:x){cout<<v<<' ';}
  return 0;
}
