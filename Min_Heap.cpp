#include<iostream>
using namespace std;
void MinHeapify(int a[],int i,int n)
{
	int j,temp;
	temp=a[i];
	j=2*i;
    while(j<=n)
    {
    	if(j<n&&a[j+1]<a[j])
    	j=j+1;
    	if(temp<a[j])
    	break;
    	else if(temp>=a[j])
    	{
    		a[j/2]=a[j];
    		j=2*j;
		}
	}
	a[j/2]=temp;
	return;
}
void Build_MinHeap(int a[],int n)
{
	int i;
	for(i=n/2;i>=1;i--)
	MinHeapify(a,i,n);
}
int main()
{
	int n,i,arr[100];
	cout<<"\nEnter the number of data element to be sorted:";
	cin>>n;
	n++;
	for(i=1;i<n;i++)
	{
		cout<<"Enter element "<<i<<":";
		cin>>arr[i];
	}
	Build_MinHeap(arr,n-1);
	cout<<"Min Heap:";
	for(i=1;i<n;i++)
	cout<<" "<<arr[i];
	return 0;
}
