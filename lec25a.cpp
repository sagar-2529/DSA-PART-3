// pointers
#include<iostream>
using namespace std;

int main(){
    int i = 5;

    int *p = 0;
    p = &i;
    i++;

  
    cout<< " value is: " << *p << endl;
    cout<< " adress is : " << p << endl; 
    
    int num = 5;

    int *ptr = &num;

    int a = *ptr;
    a++;
    cout<< a << endl;
    cout<< *ptr;
    int *t= &num;
    cout <<" before : "<<  t << endl;
    t = t + 1;
    cout << " after : " << t;
}