#include <bits/stdc++.h>
using namespace std;

void VECTOR(){
/*
//https://zobayer2009.wordpress.com/
//http://www.cplusplus.com/reference/vector/vector/
        Vector
        //cout << "Hello! World \n ";
    vector<int>vc;
    vc.push_back(5); // 0(1) = 1 ta execution hobe
    vc.push_back(12312);
    vc.push_back(-13);
    vc.push_back(-20);
    vc.push_back(0);

    //sorting
    sort(vc.begin(), vc.end()); // Intro Sort = Quick Sort + Heap Sort / Merge Sort + Insertion Sort, 0(NlogN)


    for(int i = 0; i < vc.size(); i++){
        cout << vc[i] << " ";
    }

    //cout << vc.size() << "\n";
    return 0;

    */
}

int main(){
    //vector push_back, pop_back, size, empty
    vector<int>simple;
    for(int i = 1; i < 10; i++){
        simple.push_back(i*100);
        cout << "inserting : " << simple.back() << "\n";
    }
    cout << "----------------\n";

    while(!simple.empty()){
        cout << "size: " << simple.back() << "\n";
        cout << " last element : " << simple.back() << "\n";
        simple.pop_back();
    }
    cout << "vector empty\n";

    return 0;
}
