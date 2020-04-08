#include "iostream.h"
int Binary_Search(int *a,int n,int key)
{
	int low,high,mid;
	low=1,high=n;
	while (low<=high)
	{
		mid=(low+high)/2;
		if (key<a[mid])
			high=mid-1;
		else if (key>a[mid])
		low=mid+1;
		else 
			return mid;
	}
	return 0;
}
void main ()
{
	int number[11]={0,1,16,24,35,47,59,62,73,88,99};
	int count=10;
	int KEY=62;
	int x=Binary_Search(number,count,KEY);
	cout<<"mid= "<<x<<endl;
	cout<<number[x]<<endl;
	//test vi
}
