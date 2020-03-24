#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n >= 1 || n <= 1000){
        int res = 0;
        for(int i = 0; i <= n ; i++){
            res += (i*(i+1))/2;
        }
        cout << res << endl;
    }
    return 0;
}
