#include <cmath>
#include <iostream>

float root1(int a, int b, int c) {
    float discriminant = b * b - 4 * a * c;
    
    if (discriminant < 0) {
        std::cout << "No real roots" << std::endl;
        return -1; 
    }

    float root1 = (-b + sqrt(discriminant)) / (2 * a);
    return root1;
}

float root2(int a, int b, int c) {
    float discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        std::cout << "No real roots" << std::endl;
        return -1;  
    }

    float root2 = (-b - sqrt(discriminant)) / (2 * a);
    return root2;
}

int main() {
    int a, b, c;
    
    std::cout << "Enter coefficients a, b, c: ";
    std::cin >> a >> b >> c;
    
    float r1 = root1(a, b, c);
    if (r1 != -1) {
        std::cout << "First root: " << r1 << std::endl;
    }

    float r2 = root2(a, b, c);
    if (r2 != -1) {
        std::cout << "Second root: " << r2 << std::endl;
    }

    return 0;
}

