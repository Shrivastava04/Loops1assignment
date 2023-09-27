#include<iostream>
using namespace std;
int main(){
    // Q3. Print the table of ‘n’. Here ‘n’ is an integer which the user will input.
    int n;
    cout<<"ENTER NUMBER : ";
    cin>>n;
    for(int i=1;i<=10*n;i++)
    if(i%n==0){
        cout<<i<<endl;
    }
}