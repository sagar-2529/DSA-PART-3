#include<Iostream>
using namespace std;

// fayda hai inline ka ye memory aur use nhi krta 

inline int getmax( int& a , int& b){
    return (a>b) ? a: b;
}
// default argument
// priority rightmost to left
void printarray( int arr[], int n, int start = 0){

    for(int i=start; i< n; i++){
        cout << arr[i] << " ";
    }

}


int main(){

    int a = 2, b =3;

   int ans =  getmax(a,b);

   cout << ans << endl;

   int arr[5] = { 1,2,3,4,5};

   printarray( arr, 5, 2);



}