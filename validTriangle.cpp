#include <iostream>

using namespace std;

bool validTriangle(int a, int b, int c){
    if (a + b > c && a + c > b && b + c > a){ return true; }
    return false;
}

int main(){
    int a, b, c;
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter side c: ";
    cin >> c;

    printf("Triangle with side lengths of %d, %d and %d is ", a, b, c);
    if (!validTriangle(a, b, c)) { cout << "not "; }
    cout << "a valid triangle.";

    return 0;
}