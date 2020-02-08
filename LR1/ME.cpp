//
//  ME.cpp
//  LR1
//
//  Created by Роберт Артур Меликян on 08/02/2020.
//  Copyright © 2020 Роберт Артур Меликян. All rights reserved.
//

#include <stdio.h>
#include "ME.h"

using namespace std;

ME::ME(string n,int num){
    name=n;
    number=num;
}

void ME::set(string n,int num){
    name = n;
    number = num;
}

bool ME::allowToUse(int classNumber){
    return number <= classNumber;
}

void ME::print(){
    cout << name << " " << number << endl;
}

