#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
        You are give N integers. Find the number of distinct integers among them;
        9
        1 2 1 2 3 1 2 2 3
    */
    set<int>my_set; // item gulo ascending order e sorted thake

    my_set.insert(1);
    my_set.insert(2);
    my_set.insert(1);
    my_set.insert(2);
    my_set.insert(3);
    for(auto val: my_set)
        cout << val << " ";
    return 0;
    /*
    my_set.insert(1) << "\n";
    my_set.insert(2) << "\n";
    my_set.insert(2) << "\n";
    my_set.insert(3) << "\n";
    */


    return 0;
}
