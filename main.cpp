#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include<vector>
#include <bits/stdc++.h>
using namespace std;


int convert(int num){
    int dec=0;
    int lastnum;
    int weight = 1;
    while (num!=0){
        lastnum = num % 10;
        dec += lastnum * weight;
        num /= 10;
        weight *= 2;
    }

    return dec;
}

int main(){
    
    string input;
    getline(cin, input);
    istringstream iss(input);
    vector<string> binaryNums{istream_iterator<string>{iss}, istream_iterator<string>{}};
    
    
    
    for(auto& i : binaryNums) {
        int j = convert(stoi(i));
        
        cout << char(j);
        
    }
    
    return 0;
}



