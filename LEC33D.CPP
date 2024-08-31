// binary search using recursion
#include<iostream>
using namespace std;

void print(int arr[], int s, int e){
    for(int i= s ; i<=e; i++){
        cout << arr[i]<< " ";
    }
    cout<< endl;
}

bool binarysearch( int *arr,  int key ,  int s , int e  ){
     cout << endl;
    print(arr,s,e);

 
    int mid = s + (e - s)/2;

    cout<< " value of mid is : "<< arr[mid];
   

    if ( s> e){
        return false;
    }

    if ( arr[mid] == key){
        return true;
    }
    else if(arr[mid]> key){

      return binarysearch(arr,key,0,mid-1);

    }
    else{
         return binarysearch(arr,key,mid+1,e);

    }


   

}
int main(){

   int s;
         cout << " starting of array is : ";
    cin >> s;
     int e;
         cout << " endingof array is : ";
    cin >> e;
    int key;
    cout << " enter the element to be searched: ";
    cin >> key;
    int *arr = new int [e+1];

    for (int i= 0; i<= e; i++){
        cin >> arr[i];
    }

     bool ans = binarysearch(arr, key,s,e );
    if (ans ==0){
        cout<< " not find an element"<< endl;
    }
    else{
        cout<< " finds an element ";
    }
   

    }


