#include<iostream>
using namespace std;
    
int main()
{
	int n,max;
	cout<<"\nEnter no. of elements in array: ";
	cin>>n;
	int A[n];
	cout<<"\nEnter array elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	max=A[0];
	
	for(int i=0;i<n;i++)
	{
		if(A[i]>max)
		{
		    max=A[i];
		}
	}	
	cout<<"Maxmium no is: "<<max;
	return 0;	
}
