#include <iostream>

using namespace std;

int main(){
    
    //indexelt ciklus(for) �s eld�nt�s(if)

    //0-r�l indul� sz�ml�l�, ciklusonk�nt 1-el n�vekszik
    //a ciklus addig ism�tl�dik, am�g 'i' kisebb, mint 21
    for(int i=0;i<21;i++){
        if((i+1)%2==0){
            cout<<i+1<<endl;
        }
    }

    return 0;
}