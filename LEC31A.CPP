// // RECURSION
// #include<Iostream>
// using namespace std;

// int factorial ( int n){
//     // base case
//     if( n == 0){
//         return 1;
//     }
//     int choti = factorial(n-1);
//     int badi = n* choti;
//     return badi;
// }
// int main(){
//     int n;
//     cout<< " the number is : ";
//     cin>> n;
//     cout<< " value is : " << factorial(n);
// }
#include<Iostream>
using namespace std;

int power( int a, int n){
    if(a==1 || n==0){
        return 1;
    }
    return a * power(a,n-1);

}
int main(){
    int a;
    int n;
    cout << " number is : ";
    cin >> a;
   
    cout<< " power is : ";
    cin >> n;
    
   int ans = power(a,n);
   cout << ans;
   

}