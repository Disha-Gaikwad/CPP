#include<iostream>
using namespace std;

void Working(int hour)
{
    if(hour >= 9 && hour <= 18)
        cout << "working";
    else
        cout << "leisure";
}

int main()
{
    int hour;
    cout << "Enter hour: ";
    cin >> hour;

    Working(hour);  
    
    return 0;
}

