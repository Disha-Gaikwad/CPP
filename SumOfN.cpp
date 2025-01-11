#include<iostream>
using namespace std;

int SumOfN(int n)
{
    int sum;
    
    sum=n*(n+1)/2;
    
    
    return sum;
}

int main()
{
	int n;
    cout<<"\nEnter the no. for which you want to find sum: ";
    cin>>n;
    cout << "Sum of first " << n << " natural numbers: " << SumOfN(n) << endl;   
    return 0;
}
