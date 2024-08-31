// linear search using recursion
#include<iostream>
using namespace std;

bool search_element( int *arr, int n, int key){
    if( n == 0){
        return false;
    }
    if (arr[0] == key){
        
        return true;
    }
    else{
        bool remaining_part = search_element ( arr+1 , n-1, key);
        return remaining_part;
    }
}
    int main(){
         int n;
         cout << " size of array is : ";
    cin >> n;
    int key;
    cout << " enter the element to be searched: ";
    cin >> key;
    int *arr = new int [n];

    for (int i= 0; i< n; i++){
        cin >> arr[i];
    }
     bool ans = search_element(arr, n,key );
    if (ans ==0){
        cout<< " not find an element"<< endl;
    }
    else{
        cout<< " finds an element ";
    }
   

    }


