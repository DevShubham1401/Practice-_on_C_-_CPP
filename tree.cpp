#include <iostream>
using namespace std;

 void pyramid(int start, int end) {
        for (int i = start; i <= end; i++) {
            for (int spaces = 1; spaces <= end - i; spaces++)
                cout<<(" ");
            for (int j = 1; j <= (2 * i) - 1; j++)
                cout<<("*");
            cout<<("\n");
        }
    }

    void base(int rows){
        for(int i=0;i<=rows*0.3;i++){
            for(int spaces=1;spaces<=rows*0.75;spaces++) cout<<(" ");
                for(int j=1;j<=rows*0.75;j++) cout<<("*");
                cout<<("\n"); 
        }
    }

    int main(){
        int rows=15;
        pyramid(0, rows);
        pyramid(rows/2, rows);
        pyramid(rows/2, rows);
        base(rows);
    }
