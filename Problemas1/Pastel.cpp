#include<iostream>
using namespace std;
int main(){
    int t , n;
    cin >> t;
    if(t >= 1){
        for(int i =1; i <= t; i++){
            cin >> n;
            cout << "Area a comprar: " <<  n*2 << endl;
        }
    }
    return 0;   
}