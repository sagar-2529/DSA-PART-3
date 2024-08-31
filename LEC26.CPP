#include<Iostream>
using namespace std;

void update( int *p){
    *p = *p + 1;
}

int main(){

    // int arr[3]= {1,2 ,3};

    // cout<< *(arr+1) << endl;

    // int i = 2;
    // cout<< i[arr]<< endl;

    // int a[10] = {1,2,3,4};

    // int *p = &a[0];

    // cout<< p<< endl;

    // cout << " adress of pointer is : "<< &p << endl;


  
    // cout<< a<< endl;

    int a[5]={1,2,3,4,5};

    char ch[5]= "abcd" ;

     cout<< a << endl;
     cout<< &ch[1]<< endl ;

    char *c = & ch[0];

    cout << *c ; 

    // in function if we pass p and do anything with p then after no change will occur on p but it can changes the value of p
    // actually when we passes array in function then it will not send whole array but it will send only pointer

    // int a = 7;
    // int *p = &a;
        // cout<< *p << endl;

    // update(p);
    // cout<< *p;


}

  


    
