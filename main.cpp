#include "input.hpp"
#include "calculation.hpp"
#include "output.hpp"
#include <iostream>
using namespace std;

int main() {
    int a, b;

    // 2 user inputs
    getInput(a, b);

    // get sum and average
    int sum = getSum(a, b);
    double avg = getAvg(a, b);

    // print output using the returned values from the getSum and getAvg function
    printOutput(sum, avg);  
    return 0;
}
