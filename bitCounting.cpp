#include <iostream>
#include <string>
#include <bitset>

using namespace std;

unsigned int bitCounting(unsigned long long num){
    unsigned int bitCount = 0;
    string str = bitset<64>(num).to_string();
    cout << str << endl;
    for (int i = 0; i < str.length(); i++){
        if (str[i] == '1'){
            bitCount++;
        }
    }
    return bitCount;
}

int main(){
    int num = 1234;
    int bitCount = bitCounting(num);
    cout << "num: " << num << endl;
    cout << "bitCount: " << bitCount;
    return 0;
}