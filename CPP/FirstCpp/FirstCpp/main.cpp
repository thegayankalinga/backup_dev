//
//  main.cpp
//  FirstCpp
//
//  Created by Gayan Kalinga on 2023-09-25.
//

#include <iostream>

int maxOfFour(int first, int second, int third, int fourth){
    int maxValue = first;
    maxValue = max(maxValue, second);
    maxValue = max(maxValue, third);
    maxValue = max(maxValue, fourth);
    
    return maxValue;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
