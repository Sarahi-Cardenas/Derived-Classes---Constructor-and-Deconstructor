//
//  Mother.cpp
//  Derived Class- Constructor and Destructors
//
//  Created by Sarahi Cardenas Trejo on 10/29/19.
//  Copyright © 2019 Sarahi Cardenas Trejo. All rights reserved.
//

#include "Mother.hpp"
#include "Daughter.hpp"
using namespace std;
#include <iostream>

Mother::Mother(){
    cout << "I am the mother constructor" << endl;
    
}

Mother::~Mother(){
    cout << "Mother deconstructor" << endl;//this will also automatically print out 
}
