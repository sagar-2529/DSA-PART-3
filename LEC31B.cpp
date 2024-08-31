#include<Iostream>
using namespace std;

void printcounting(int n){
    if(n == 1){
        cout<< 1 << " ";
    }
    else{
          printcounting(n-1);
    cout << n << " ";
  

}
}

int main(){

    int n;

    cin >> n;

    printcounting(n);

}