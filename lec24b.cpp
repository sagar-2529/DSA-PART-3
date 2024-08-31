// sieve of erasothenes
#include<iostream>
#include<vector>
using namespace std;

int countprime(int n){
vector<bool> prime( n+1 , true);
int count = 0;

for(int i = 2; i < n; i++){
    if (prime[i]){
        count++;
        for( int j = 2*i; j < n; j = j+i){
            prime[j]= false;
        }

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