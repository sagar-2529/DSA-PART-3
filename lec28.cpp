#include<iostream>
using namespace std;

// void update ( int& n){
//     n++;
// }
// int main(){
    // int n = 5;
    // cout<< " before : " << n << endl;
    // update(n);
    //   cout<< " after : " << n << endl;

// }

int main(){
    int n; 
    cin >> n;
    int* arr = new int[n];
    for(int i=0; i< n; i++){
        cin >> arr[i];
    }
    for(int i=0; i< n; i++){
        cout <<  arr[i];
    }


}