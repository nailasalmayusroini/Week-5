#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

vector<string> expectedResult = {
    "1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz",
    "11", "Fizz", "13", "14", "FizzBuzz", "Fizz", "17", "Fizz", "19", "Buzz",
    "Fizz", "22", "23", "Fizz", "Buzz", "26", "Fizz", "28", "29", "FizzBuzz",
    "31", "32", "Fizz", "34", "FizzBuzz", "Fizz", "37", "38", "Fizz", "Buzz"
    "41", "Fizz", "43", "44", "Buzz", "46", "47", "Fizz", "49", "Buzz",
    "Fizz", "52", "53", "Fizz", "Buzz", "56", "Fizz", "58", "59", "FizzBuzz", 
    "61", "62", "Fizz", "64", "Buzz", "Fizz", "67", "68", "Fizz", "Buzz",
    "71", "Fizz", "73", "74", "FizzBuzz", "76", "77", "Fizz", "79", "Buzz",
    "Fizz", "82", "83", "Fizz", "Buzz", "86", "Fizz", "88", "89", "FizzBuzz",
    "91", "92", "Fizz", "94", "Buzz", "Fizz", "97", "98", "Fizz", "Buzz"
};

vector<string> fizzbuzzResult(100);

// Loop from 1 to 100
    for(int i = 1; i <= 100; i++){
        if (i % 3 == 0 && i % 5 == 0) { // for every multiples of three and five, the output will be "FizzBuzz"
            fizzbuzzResult[i-1] = "FizzBuzz";   
        }
        else if (i % 5 == 0) { // for every multiples of five, the output will be "Buzz"
            fizzbuzzResult[i-1] = "Buzz";
        }
        else if (i % 3 == 0) { // for every multiples of three, the output will be "Fizz"
            fizzbuzzResult[i-1] = "Fizz";
        }
        else { // the output will be an order of 1 to 100 except the ones that are multiples of three and five
            fizzbuzzResult[i-1] = to_string(i);
        }
        
    }
    
    // the final output
    for (int i = 0; i <= 100; i++)
        cout << fizzbuzzResult[i] << endl;


    bool testPassed = true;
    for (int i = 0; i < 100; i++) {
        if (expectedResult[i] != fizzbuzzResult[i]) {
        testPassed = false;
        break;
        }
    }

    if (testPassed) {
        cout << "Test Passed" << endl;
    }
    else {
        cout << "Test Failed" << endl;
    }

    return 0;
}

