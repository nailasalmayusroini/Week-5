#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

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

    return 0;
}

