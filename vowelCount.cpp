#include <iostream>
#include <string>

using namespace std;

int vowelCount(string str){
    string vowels = "aeiou";
    int count = 0;
    for (int i = 0; i < str.length(); i++){
        for (int j = 0; j < vowels.length(); j++){
            if (str[i] == vowels[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    string str;
    cout << "Enter a string of charcters: ";
    cin >> str;
    cout << str << endl;
    cout << "Vowels in string: ";
    int vowels = vowelCount(str);
    cout << vowels;
}