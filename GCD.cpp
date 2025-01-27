#include<iostream>
using namespace std;

int main()
{
	int m,n;
	cout<<"Enter first Numbers :";
	cin>>m;
	cout<<"Enter second Number : ";
	cin>>n;
	    
	while(m!=n)
    {
	if(m>n)
	  	m=m-n;
	else if(n>m)
	  	n=n-m;
    }	
	cout<<"GCD of 2 nos : "<<m;
	    
	return 0;
	    
}
