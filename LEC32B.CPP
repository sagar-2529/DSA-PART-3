#include<iostream>
using namespace std;

void printnumber( int n , string arr[]){

    if (n ==0){
        return ;
    }

    int digit = n % 10;
    n = n / 10;

    printnumber( n ,arr);

    cout << arr[digit]<< " ";



}
int main(){
    string arr[10]= { " zero", " one ", " two", " three ", " four", "five ", " six", "seven", "eight", " nine"};
    int n;
    cin >> n;
    printnumber(n , arr);
}
