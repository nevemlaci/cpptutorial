#include <iostream>

using namespace std;

int main(){

    //tömb
    int t[5];

    //bekérés
    for(int i=0;i<5;i++){
        cin>>t[i];
    }

    //rendezés
    for(int i=0;i<5;i++){
        for(int j=i+1;j<6;j++){
            if(t[i]<t[j]){
                swap(t[i] , t[j]);
            }
        }
    }

    //rendezett elemek kiíratása
    for(int i=0;i<5;i++){
        cout<<t[i];
    }
    
    return 0;
}