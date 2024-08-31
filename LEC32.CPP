#include<iostream>
using namespace std;

void fibbonaci(int n){
    int a = 0;
    int b = 1;
    int c = a + b;;
    for(int i = 3; i<=n; i++){
         c = a + b;
        a = b;
        b = c;
    }
    cout << c << "  " ;
}
int main(){
    int n;
    cin >> n;
    fibbonaci(n);
}