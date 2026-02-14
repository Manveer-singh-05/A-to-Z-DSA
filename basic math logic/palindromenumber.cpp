#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp = n;
    int rev =0;
    while(n!=0){
        int rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    if(temp == rev) cout<<"Palindrome Number";
    else cout<<"Not a Palindrome Number";
}