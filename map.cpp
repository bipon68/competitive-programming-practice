#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
        1. negative index!
        2. huge index!
        3. index er range unknown!
    */
    map<int, int>mp; // <key_type, value_type>
    mp[-51] = 3;
    mp[23123] = 4;
    mp[10] = 5;

    if(mp.find(-5) != mp.end()){
        cout << "Khuje paisi " << "\n"; // stream flush with endl in c++
    }
    if(mp.find(-5) == mp.end()){
        cout << "Khuje pai nai! " << "\n"; // stream flush with endl in c++
    }
    //cout << mp[-5] << "\n";

    return 0;
}
