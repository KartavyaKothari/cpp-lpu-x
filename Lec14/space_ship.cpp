#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> solar_sys = {"Mercury","Venus","Earth","Mars","Jupitor","Saturn","Uranus","Neptune","Pluto"};
    vector<string>::iterator falcon = solar_sys.begin();
    vector<string>::iterator milano = solar_sys.begin();

    advance(falcon,3);
    cout<<"Falcon is at "<<*falcon<<endl;
    advance(falcon,-1);
    cout<<"Falcon is at "<<*falcon<<endl;

    cout<<"Falcon is "<<distance(milano,falcon)<<" planets away"<<endl;
    cout<<"Milano is "<<distance(falcon,milano)<<" planets away"<<endl;

    cout<<"Next planet to us is "<<*next(falcon,1)<<endl;
    cout<<"Falcon is currently at "<<*falcon<<endl;

    // advance(itr,n)
    // itr = next(itr,n)

    return 0;
}