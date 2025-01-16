#include<iostream>
using namespace std;

void Sign(int n)
{
    if(n>=0)
        cout<<"positive";
    else
        cout<<"negative";
}
int main()
{
	int n;
	cout<<"\nEnter a number : ";
	cin>>n;
	cout<<"\nThe entered number "<<n<<" is ";
	Sign(n);
	return 0;
}
