#include <iostream>
#include <string>

using namespace std;

int digitTimesDigit(int num){
    string str = to_string(num);
    string output = "";
    int temp;
    for (int i = 0; i < str.length(); i++){
        temp = int(str[i]) - 48;
        cout << temp << endl;
        temp *= temp;
        cout << temp << endl;
        output.append(to_string(temp));
        cout << output << endl;
    }
    return stoi(output);
}

int main(){
    int num, numTimesNum;
    cout << "Enter a number: ";
    cin >> num;
    numTimesNum = digitTimesDigit(num);
    cout << numTimesNum;
}