#include<iostream>
using namespace std;

void Palindrome(int n)
{
    int rev = 0;  
    int r;        
    int m = n;    

    while(n > 0)
    {
        r = n % 10;      
        n = n / 10;     
        rev = rev * 10 + r;
    }

    if(rev == m)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Palindrome(num);  
    return 0;
}

