// count prime upto n numbers
#include<iostream>
using namespace std;

bool isprime(int n){
    for(int i=2; i< n; i++){
        if( n%i == 0 ){
            return 0;
        }
    }
    return 1;
}

int countprime( int n){
    int count=0;
    for ( int i = 2; i < n; i++){
        if (isprime(i)){
            count ++;
        }
    }
    return count;
}
int main(){
    int n;
    cout<< " enter number : "<< " ";
    cin >> n;
    int countofprime = countprime( n );
    cout<< "count of primes upto n number is :"<< countofprime; 

}