#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
        1. negative index!
        2. huge index!
        3. index er range unknown!
    */
    // int, string, double

    map<string, int>mp; // <key_type, value_type>
    mp["Bipon"] = 55;
    mp["Arif"] = 100;
    mp["Shazol"] = 110;

    cout << mp["Arif"] << "\n";

    /*if(mp.find(-5) != mp.end()){
        cout << "Khuje paisi " << "\n"; // stream flush with endl in c++
    }
    if(mp.find(-5) == mp.end()){
        cout << "Khuje pai nai! " << "\n"; // stream flush with endl in c++
    }*/
    //cout << mp[-5] << "\n";

    return 0;
}
