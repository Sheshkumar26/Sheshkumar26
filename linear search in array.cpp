#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int s, int key){
	
	for(int i=0;i<s;i++){
		if(arr[i]==key)
		return i;
	}
	return -1;
	
}

int main(){
	int s;
	cin>>s;
	
	int arr[s];
	
	for(int i =0;i<s;i++){
		cin>>arr[i];
	}
	
	int key;
	cin>>key;
	
	cout<<linearSearch(arr,s,key)<<" "<<endl;
}
