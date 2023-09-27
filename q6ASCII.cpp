#include<iostream>
using namespace std;
int main(){
    //  Q6. Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.
    char ch = 'a';
    int i = 1;
    while(i <= 26) {
        cout << "ASCII value of " << ch << " is " << int(ch) << endl;
        ch++;
        i++;
    }
    return 0;
}