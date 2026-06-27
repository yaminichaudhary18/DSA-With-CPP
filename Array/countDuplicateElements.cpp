#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1};
    int size = 7;
    int count = 0;

    for(int i = 0; i < size; i++) {
        bool isDuplicate = false;

        // Check if arr[i] already appeared before
        for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                isDuplicate = true;
                break;
            }
        }

        if(isDuplicate) {
            continue;
        }

        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }

    cout << "Number of duplicate elements: " << count;

    return 0;
}