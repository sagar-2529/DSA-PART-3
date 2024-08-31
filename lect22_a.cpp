// check palindrome ?
#include<iostream>
using namespace std;

bool check ( char arr[], int n){
    int s =0;
    int e=n-1;
    while(s<e){
        if(arr[s] != arr[e])
        {
          return 0;
        }
        else{
           s++;
           e--;
        }
    }
    return 1;
}
int main(){
    int n;
    cout<< " size of string is : ";
    cin>> n;
    char ch[n];
    cout<< " what is the string: ";
    cin >> ch;
     int ans = check(ch,n);
     cout<< "palindrome or not : "<< ans;

}