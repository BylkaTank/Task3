#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> storage(20);
    int number;
    while (true){
        cout << "Input number:";
        cin >> number;
        if (number == -1){
            cout  << "output:";
            for (int j = 0; j < storage.size(); j++) {
                cout  << " " << storage[j];
            }
            cout << endl;
        } else {
            for (int i = 1 ; i <= storage.size() - 1; i++) {
                storage[i - 1] = storage[i];
            }
            storage[storage.size() - 1] = number;
        }
    }
}
