#include<Iostream>
using namespace std;
# define SQUARE(n) (n*n)
# define PRINT(x) cout<< " value is : "<< x
# define PRINT_RECTANGLE(width, height)     \
     for (int i =0; i<height; i++){          \
        for(int j=0; j< width; j++){        \
             cout<< " * ";                  \
        }                                   \
        cout<< endl;                       \
     }                                    \

int main(){

    int no = 7;
   PRINT(SQUARE(no));
   cout<< endl;
   PRINT_RECTANGLE(4,3);
}