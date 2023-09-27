#include<iostream>
using namespace std;
int main (){
    //Q4. Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
    int n;
    cout<<"ENTER VALUE OF N : ";
    cin>>n;
    for(int i =4;i<=n;i+=3) cout<<i<<" ";
}