// Static Array Implementation in 
#include <iostream>
using namespace std;

void arrayExample() {
    int arr[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Dynamic Array Implementation 
#include <iostream>
#include <vector>
using namespace std;

void vectorExample() {
    vector<int> vec = {1, 2, 3, 4, 5};
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}
