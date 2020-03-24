#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n >= 1 || n <= 10*10*10*10){
        int areaC = (2*n -1)*(2*n - 1);
        cout << areaC/2 + 1;
    }
    return 0;
}