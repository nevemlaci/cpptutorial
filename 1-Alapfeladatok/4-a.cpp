#include <iostream>

using namespace std;

int main(){

    //t�mb deklar�l�sa: int nev[elemszam];
    int t[10];
    //vizsg�lt bek�r�si v�ltoz� �s bek�r�sek darbasz�ma
    int x , db=0;
    for(int i=0;i<10;i++){
        cin>>x;
        //if-else el�gaz�s, else: ha a felt�tel nem igaz, csak fusson le
        if(x==0){
            break;
        }else{
            t[i]=x;
            db++;
        }
    }

    //maximum �s minimumkeres�s

    int maxx=0;
    int minx=INT_MAX;

    for(int i=0;i<db;i++){
        if(t[i]>maxx){
            maxx=t[i];
        }
        if(t[i]<minx){
            minx=t[i];
        }
    }

    cout<<"Max: "<<maxx<<" Min: "<<minx;


    return 0;
}