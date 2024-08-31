// return true if substring founds in main string
#include<iostream>
using namespace std;

bool checkequal(int arr1[], int arr2[]){
for(int i=0; i< 26; i++){
    if( arr1[i] != arr2[i] ){
        return 0;
    }
    return 1;
}
}

bool checksubstring( string a, string b){
    int arr1[26]={0};
    for(int i=0; i< b.length(); i++){
        int index= b[i]-'a';
        arr1[index]++;
    }
    int i=0;
     int arr2[26]={0};
    while( i< a.length() ){
       
        int index= a[i]-'a';
        arr2[index]++;
        i++;

    }
    int size= a.size();
    for(int i= size; i<b.size(); i++){
        int index= arr2[i]-'a';
        arr2[index]++;
        index= arr2[i-size]-'a';
        arr2[index]--;
        
    }
    if(checkequal(arr1, arr2)){
        return 1;
    }
    return 0;
}
int main(){
    char a[23];
    char b[45];
    cout<< " what is main string : ";
    cin>> b;
     cout<< " what is sub string : ";
    cin>> a;
    int ans = checksubstring(a,b);
    cout<< ans;
}
#include<iostream>
using namespace std;

void rowwisesum(int arr[][3], int n, int m){
    
    int sum = 0;
    int arr[0][3];
    int no = 0;

    for(int j =0 ; j< m; j++){
        for(int i=0; i < n; i++){
          sum = sum + arr[i][j];
        }
        arr[0][no] = sum;
        no ++;
        sum = 0;

    }

}
void printarray( int arr[][0], int n){
    
    for (int i=0 ; i< 1; i++){
        for ( int j= 0 ; j < n; j++){
            cout << arr[i][j];
        }
    }
}

int main(){

    int arr[4][3];

    cout << "array is : "<< endl;

    for( int i = 0; i < 4 ; i++){
        for( int j = 0; j < 3 ; j++){
            cin >> arr[i][j];
        }
    }
    rowwisesum( arr ,  4, 3);


}