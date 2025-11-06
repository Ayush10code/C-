#include <iostream>
using namespace std;
int main()
{
    int n = 9;
    int num =1;
    while( num<= n){
        for (int rn = 1; rn <= n; rn++){
            for (int j = rn; j <= n; j++){
                cout << j;
            }
            if ((rn * 2 - 3) < 0){
                int cal = (n - 1);
                for (int p = cal; p > 0; p--){
                    cout << p;
                }
            }
            else{
                for (int j = 1; j <= (((rn * 2) - 3)); j++){
                    cout << (" ");
                }
                for (int j = n; j >= rn; j--){
                    cout << j;
                }
            }
            cout << (endl);
        }
        num=num+n;
    }
    while(num >n && num<(n*2)){
        int rno= n-1;
         for (int rn = rno; rn >0; rn--){
            for (int j = rn; j <= n; j++){
                cout << j;
            }
            if ((rn * 2 - 3) < 0){
                int cal = (n - 1);
                for (int p = cal; p > 0; p--){
                    cout << p;
                }
            }
            else{
                for (int j = 1; j <= (((rn * 2) - 3)); j++){
                    cout << (" ");
                }
                for (int j = n; j >= rn; j--){
                    cout << j;
                }
            }
            cout << (endl);
        }
        num=num*3;
        

    }
}
