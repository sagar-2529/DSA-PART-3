#include<Iostream>
using namespace std;

// void update( int **p ){
//     **p = **p + 1;
// }

// int main(){
//     int a = 5;
//     int *p = &a;
//     int **p2 = &p;

//     // cout<< p<< endl;
  
//     // cout<< &p<< endl;
//     // cout<<  p2 << endl;
//     //  cout<< *p2;

//     cout << " before : "<< a << endl;
//     cout << " before : "<< p << endl;
//     cout << " before : "<< p2 << endl;

//     cout << endl;

//     update(p2);

//      cout << " after: "<< a << endl;
//     cout << " after : "<< p << endl;
//     cout << " after : "<< p2 << endl;

int main(){

    char str[]= "abcde";
    char *pa = str;
    cout<< str[0] << " " << pa[0] << endl;

     char arr[]= "abcde";
    char *p = &arr[0];
    cout<< p  << " " << p[0];
    return 0;
   
}