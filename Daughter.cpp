//
//  Daughter.cpp
//  Derived Class- Constructor and Destructors
//
//  Created by Sarahi Cardenas Trejo on 10/29/19.
//  Copyright © 2019 Sarahi Cardenas Trejo. All rights reserved.
//

#include "Mother.hpp"
#include "Daughter.hpp"
using namespace std;
#include <iostream>

Daughter::Daughter(){
    cout << "I am the daughter constructor" << endl;
}

Daughter::~Daughter(){
    cout << "I am the duaghter deconstructor" << endl;
}
