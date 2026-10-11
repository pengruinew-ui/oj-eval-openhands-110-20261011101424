#include <iostream>
#include "solution.cpp"
using namespace std;

int main() {
    // Test invalid dates
    Date d1(1899, 12, 31);  // Before 1900
    Date d2(2031, 1, 1);    // After 2030
    Date d3(2000, 2, 30);   // Invalid day
    Date d4(2000, 13, 1);   // Invalid month
    Date d5(2000, 0, 1);    // Invalid month
    
    cout << "Invalid dates should all be 1900-1-1:" << endl;
    cout << d1 << endl;
    cout << d2 << endl;
    cout << d3 << endl;
    cout << d4 << endl;
    cout << d5 << endl;
    
    return 0;
}