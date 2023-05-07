#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int array[n];
	
	int maximum =INT_MIN;
	int minimum =INT_MAX;
	
	for(int i =0;i<n;i++){
		cin>>array[i];
	}
	
	for(int i=0;i<n;i++){
		if(array[i]>maximum)
		maximum =array[i];
	
	if(array[i]<minimum){
		minimum=array[i];
	}
}
	cout<<maximum<<" "<<minimum<<endl;
	return 0;
}
