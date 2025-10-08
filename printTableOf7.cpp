#include<iostream>
using namespace std;
int main(){
    // printing the table of 7
    // for(int i =1; i<=10; i++){
    //     cout<<"7 X "<<i<<" = "<<7*i<<endl;
    // }


    // lets make it more dynamic one
    int n; 
    cout<<"Enter the number whoose table you want to print: ";
    cin>>n;
    for(int i = 1; i<=10; i++){
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}