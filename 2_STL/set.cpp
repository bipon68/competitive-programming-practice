#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
        You are give N integers. Find the number of distinct integers among them;
        9
        1 2 1 2 3 1 2 2 3
        // self balancing binary search tree
    */
    unordered_set<int>my_set; // item gulo ascending order e sorted thake
    int n;
    cin >> n; // equivalent to scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        my_set.insert(val);
    }
    for(int val: my_set) cout << val << " ";
    //cout << my_set.size() << "\n"; // print("%d\n", my_set.size());



    return 0;
}
