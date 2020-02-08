//
//  main.cpp
//  LR1
//
//  Created by Роберт Артур Меликян on 08/02/2020.
//  Copyright © 2020 Роберт Артур Меликян. All rights reserved.
//

#include <iostream>
#include <vector>
#include "ME.h"
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    vector<ME> screens;
    for(int i = 0 ; i < n; i++){
        string name;
        int num;
        cin >> name;
        cin >> num;
        ME m(name,num);
        screens.push_back(m);
    }
    int classNumber;
    cin >> classNumber;
    for(int i = 0 ; i < screens.size() ; i++){
        if (screens[i].allowToUse(classNumber)){
            screens[i].print();
        }
    }
    return 0;
}
