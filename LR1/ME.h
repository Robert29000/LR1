//
//  ME.h
//  LR1
//
//  Created by Роберт Артур Меликян on 08/02/2020.
//  Copyright © 2020 Роберт Артур Меликян. All rights reserved.
//

#ifndef ME_h
#define ME_h
#include <iostream>
using namespace std;

class ME{
    string name;
    int number;
    
public:
    ME(string n,int num);
    
    void set(string n,int num);
    bool allowToUse(int classNumber);
    
    void print();
    
};

#endif /* ME_h */
