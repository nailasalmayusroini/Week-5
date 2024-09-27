#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

vector<string> fizzbuzzResult(100);

    for(int i = 0; 1<=100; i++){
        if (i % 3 == 0 && i % 5 == 0) {
            fizzbuzzResult[i-1] = "FizzBuzz";   
        }
        else if (i % 5 == 0) {
            fizzbuzzResult[i-1] = "Buzz";
        }
        else if (i % 3 == 0) {
            fizzbuzzResult[i-1] = "Fizz";
        }
        fizzbuzzResult[i-1] = to_string(i);
    }
    

    for (int i = 0; i <= 100; i++)
        cout << fizzbuzzResult[i] << endl;

    return 0;
}

