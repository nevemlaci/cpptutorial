#include <iostream>

using namespace std;

int main(){

    //t�mb
    int t[5];

    //bek�r�s
    for(int i=0;i<5;i++){
        cin>>t[i];
    }

    //rendez�s
    for(int i=0;i<5;i++){
        for(int j=i+1;j<6;j++){
            if(t[i]<t[j]){
                swap(t[i] , t[j]);
            }
        }
    }

    //rendezett elemek ki�rat�sa
    for(int i=0;i<5;i++){
        cout<<t[i];
    }
    
    return 0;
}