#include <iostream>
using namespace std;
int main(){
    // basic approach to check if a number is palindrome or not
    // int n;
    // cin>>n;
    // int temp = n;
    // int rev =0;
    // while(n!=0){
    //     int rem = n%10;
    //     rev = rev*10 + rem;
    //     n = n/10;
    // }
    // if(temp == rev) cout<<"Palindrome Number";
    // else cout<<"Not a Palindrome Number";

    // optimal approach to check if a number is palindrome or not and prevent overflow
    int n;
    cin>>n;
    int rev = 0;
    if(n < 0 || ((n%10==0 && n!=0) ) ) cout<<"Not a Palindrome Number";
    else{

        while(n>rev){
            rev += rev*10 + n%10;
            n = n/10;
    
        }
        if(n == rev || n == rev/10) cout<<"Palindrome Number";
        else cout<<"Not a Palindrome Number";
    }
}