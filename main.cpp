//
//  main.cpp
//  Derived Class- Constructor and Destructors
//
//  Created by Sarahi Cardenas Trejo on 10/29/19.
//  Copyright © 2019 Sarahi Cardenas Trejo. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Mother.hpp"
#include "Daughter.hpp"

int main() {
    //Mother ma; //no need for this because when we invoque the Daughter class it calls everything that is needed in its base classs first and then invoques the Daughter class. Same process if there was a grandmother class or a greatgrandmother. It's as if the Daughter needs to first call out the Mother in order to check that it works, that way the Daughter will work
    Daughter daughtOb; //This will print out first the Mother's code (base class) and then the Daughter's
    
    return 0;
}
