#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,i;
	cout<<"Number of elements:";
	cin>>n;
	int a[n];
	cout<<"Enter elements:";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int ma=0;
	for(i=0;i<n;i++){
		ma=max(ma,a[i]);
	}
	int freq[ma+1]={0};
	for(i=0;i<n;i++){
		freq[a[i]]=freq[a[i]]+1;
		}
	cout<<"Dublicate elements:";
    int k=0;
	for(i=0;i<ma+1;i++){
		if(freq[i]>=1&&(k<=2)){
			int sum=sum+freq[i];
            k=k+1;
		}
		
	}
	return 0;
}
