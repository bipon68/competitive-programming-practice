#include <bits/stdc++.h>
using namespace std;

struct info{
    string address;
    int roll;
    info(){}
};

int main(){
    /*
        1. negative index!
        2. huge index!
        3. index er range unknown!
    */
    // int, string, double

    /*map<string, info>mp; // <key_type, value_type>

    info info_arif;
    info_arif.address = "BD";
    info_arif.roll = 100;

    mp["Arif"] = info_arif;
    cout << mp["Arif"].address << " " << mp["Arif"].roll << "\n"; */

    /*if(mp.find(-5) != mp.end()){
        cout << "Khuje paisi " << "\n"; // stream flush with endl in c++
    }
    if(mp.find(-5) == mp.end()){
        cout << "Khuje pai nai! " << "\n"; // stream flush with endl in c++
    }*/
    //cout << mp[-5] << "\n";

    unordered_map<string, int>mp;
    mp["ZZ"] = 2; // lexicographical order
    mp["XYZ"] = 1;
    mp["Y"] = 100;
    mp["YZ"] = 100;

    for(auto item : mp){
        cout << item.first << " " << item.second << "\n";
    }

    return 0;
}
