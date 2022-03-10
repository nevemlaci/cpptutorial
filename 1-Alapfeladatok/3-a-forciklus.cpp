#include <iostream>

using namespace std;

int main(){
    
    //indexelt ciklus(for) és eldöntés(if)

    //0-ról induló számláló, ciklusonként 1-el növekszik
    //a ciklus addig ismétlõdik, amíg 'i' kisebb, mint 21
    for(int i=0;i<21;i++){
        if((i+1)%2==0){
            cout<<i+1<<endl;
        }
    }

    return 0;
}