#include<iostream>
using namespace std;

void OddEven(int n)
{
    if(n % 2 == 0)
        cout << "even";
    else
        cout << "odd";
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The entered number "<<n<<" is ";
    OddEven(n);  
    return 0;
}

