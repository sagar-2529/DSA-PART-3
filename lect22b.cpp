// check palindrome whwn other chracters involved
#include<iostream>
using namespace std;

char convertlowercase(char ch){
    if(( ch>= 'a'&& ch <= 'z') || (ch>='0' && ch<='9')){
        return ch;
    }

    else{ 
        char temp = ch-'A'+'a';
        return temp;
        
    }
}

bool valid ( char ch ){
    if((ch>= 'a'&& ch <= 'z') || (ch>='0' && ch<='9') || ( ch>= 'A' && ch<= 'Z')){
    return 1;
    }
    else{
        return 0;
    }
}
bool checkpalindrome(string a){
    int s = 0;
    int e= a.length()-1;
    while( s<e){
        if(a[s]!=a[e]){

            return 0;
        }

        else {
            s++;
            e--;
            
        }
       

    }
     return 1;
}
bool ispalindrome( string s){
    string temp ;
    for(int i=0 ; i< s.length(); i++){
        if (valid( s[i])){
            temp.push_back(s[i]);

        }
    }

   
    for(int i=0; i< temp.length(); i++){
        temp[i]= convertlowercase(temp[i]);
    }
    return  checkpalindrome(temp);

}

int main(){

string a= "NOO   /.;'[]n";
int ans= ispalindrome(a);
cout << ans;




}