#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int array[n];
	
	for(int i =0; i<n;i++){
		
		cin>>array[i];
	}
	int maximum=INT_MIN;
	int minimum=INT_MAX; 
	for(int i =0;i<n;i++){
		maximum=max(maximum,array[i]);
		minimum=min(minimum,array[i]);
}
		cout<<"maximum is "+maximum<<endl;
		cout<<"minimum is "+minimum<<endl;
	
	return 0;
}
