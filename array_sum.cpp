#include <iostream>
using namespace std;

int main() {
    int size, sum = 0;
    cout << "Enter the size of the Array: ";
    cin >> size;
    int myNumbers[size];
    for(int i=0; i<size; i++){
        cin >> myNumbers[i];
        sum += myNumbers[i];
    }
    cout << "The sum of the Array: " << sum;
    
    return 0;
}
