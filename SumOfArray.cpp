#include<iostream>
using namespace std;

int main()
{
	int n,sum=0;
	cout<<"\nEnter no. of elements in array: ";
	cin>>n;
	int a[n];
	cout<<"\nEnter array elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
    }
  
	cout<<"sum is: "<<sum;
	return 0;    
}
