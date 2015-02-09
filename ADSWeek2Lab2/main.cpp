//
//  main.cpp
//  ADSWeek2Lab2
//
//  Created by david swift on 09/02/2015.
//  Copyright (c) 2015 david swift. All rights reserved.
//

#include <iostream>
#include "GenericArray.h"

int main(int argc, const char * argv[]) {
    
    GenericArray<int> test(15);
    test.addEntry(2);
    test.addEntry(5);
    std::cout << "total: " << test.totalValue() << std::endl;
    
    GenericArray<double> testD(5);
    testD.addEntry(6.5);
    testD.addEntry(17.89);
    testD.addEntry(3.45);
    testD.addEntry(7.9);
    testD.addEntry(673.1298);
    testD.addEntry(2);
    std::cout << "total: " << testD.totalValue() << std::endl;
    
    return 0;
}
