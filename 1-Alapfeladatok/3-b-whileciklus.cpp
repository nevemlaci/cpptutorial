#include <iostream>

using namespace std;

int main(){

    //bekérési változó és összegeik

    int x;
    int ossz=0;

    //amíg a feltétel igaz, addig fut
    while(ossz<100){
        cin>>x;
        ossz+=x;
    }

    return 0;
}
