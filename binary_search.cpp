// thuật toán tìm kiếm nhị phân
#include <iostream>
using namespace std;

int binary_search(int a[], int n, int x)
{
	int left=0;
	int right=n-1;
	int mid=(left+right)/2;
	while(left<right)
	{
		if(a[mid]==x) cout<< mid;
		else if(a[mid]<x)
		{
			left=mid+1;
		}
		else{
			right=mid-1;
		}
	}
	return -1;
}

int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	binary_search(a,n,k);
}