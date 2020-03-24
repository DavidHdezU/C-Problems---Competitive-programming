#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
        int s, n, m;
        double ai, aux;
            for(int i = 1; i <=t ; i++){
                cin >> s >> n;
                m = 1;
                for(int j = 1; j <= n; j++){
                    cin >> ai;
                    if(j == 1){
                        aux = ai;
                    }else{
                        if(ai < aux){
                            aux = ai;
                            m = j;
                        }
                    }
                }
                cout << "Case " << i << ": " << "comprar en dia " << m << endl;
            }
    
return 0;
}