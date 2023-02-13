#include <iostream>
#include <string>
#include <bitset>

using namespace std;

string removeLeadingZeros(string str) {
    while (str[0] == '0') {
        str.erase(str.begin());
    }
    if (str.length() == 0){
      return "0";
    }
    return str;
}

string sumInBinary(uint64_t a, uint64_t b){
    uint64_t sum = a + b;
    return removeLeadingZeros(bitset<64>(sum).to_string());
}

int main(){
    uint64_t a, b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;

    string bin = sumInBinary(a, b);

    printf("Sum of %d and %d in binary is ", a, b);
    cout << bin;

    return 0;
}