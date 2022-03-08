#include<iostream>
using namespace std;
void MaxHeapify(int a[],int i,int n)
{
	int j,temp;
	temp=a[i];
	j=2*i;
    while(j<=n)
    {
    	if(j<n&&a[j+1]>a[j])
    	j=j+1;
    	if(temp>a[j])
    	break;
    	else if(temp<=a[j])
    	{
    		a[j/2]=a[j];
    		j=2*j;
		}
	}
	a[j/2]=temp;
	return;
}
void Build_MaxHeap(int a[],int n)
{
	int i;
	for(i=n/2;i>=1;i--)
	MaxHeapify(a,i,n);
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
	Build_MaxHeap(arr,n-1);
	cout<<"Max Heap:";
	for(i=1;i<n;i++)
	cout<<" "<<arr[i];
	return 0;
}
