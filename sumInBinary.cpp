#include <iostream>
#include <string>
#include <bitset>

using namespace std;

string removeLeadingZeros(string str) {
    while (str[0] == '0') {
        str.erase(str.begin());
    }
    return str;
}

string sumInBinary(int a, int b){
    int num = a + b;
    return removeLeadingZeros(bitset<32>(num).to_string());
}

int main(){
    int a, b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;

    string bin = sumInBinary(a, b);

    printf("Sum of %d and %d in binary is ", a, b);
    cout << bin;

    return 0;
}