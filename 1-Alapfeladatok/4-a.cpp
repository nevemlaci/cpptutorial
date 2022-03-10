#include <iostream>

using namespace std;

int main(){

    //tömb deklarálása: int nev[elemszam];
    int t[10];
    //vizsgált bekérési változó és bekérések darbaszáma
    int x , db=0;
    for(int i=0;i<10;i++){
        cin>>x;
        //if-else elágazás, else: ha a feltétel nem igaz, csak fusson le
        if(x==0){
            break;
        }else{
            t[i]=x;
            db++;
        }
    }

    //maximum és minimumkeresés

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