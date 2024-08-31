// max occurence in string
#include<iostream>
using namespace std;

char getmaxchracter( string s){
    int arr[26]={0};
    for(int i=0; i< s.length(); i++){
        int number=0;
        if (s[i]>='a' && s[i]<='z'){
            number = s[i] - 'a';
        }
        else{
            number = s[i]-'A';
        }
        arr[number]++;
    }
      int maxi=-1;
        int ans=0;
    for(int i=0; i<26; i++){
      
        if (arr[i]>maxi){
            ans=i;
            maxi= arr[i];
            

        }
       
    }
      char  temp ='a'+ans;
    return temp;
}
int main(){
   char ch[20];
   cout<< " what is string : " ;
   cin >> ch;
    char ans = getmaxchracter(ch);
    cout<< ans;
}