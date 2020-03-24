#include<iostream>
using namespace std;
int main(){
    long long int a, b;
    cin >> a >> b;
    if((a >= 1 || a <= 3037000400) && (b >= 1 || b <= 3037000400)){
        cout << a*b << endl;
    }
    return 0;
}