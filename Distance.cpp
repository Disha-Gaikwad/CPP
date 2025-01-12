#include<iostream>
#include<cmath>
using namespace std;

float distance(int x1,int y1,int x2,int y2)
{
    float dist;
    dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));  
    return dist;
}

int main() 
{
    int x1, y1, x2, y2;
    
    cout << "Enter coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;

    float dist = distance(x1, y1, x2, y2);
    
    cout << "The distance between the points (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is: " << dist << endl;
    
    return 0;
}
