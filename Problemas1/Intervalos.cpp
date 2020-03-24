#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(c > b){
        cout << "DERECHA" << endl;
    }else if(c < a){
         cout << "IZQUIERDA" << endl;
     }else if(c >= a || c <= b){
        cout << "INTERVALO" << endl;
      }
    
    return 0;
}