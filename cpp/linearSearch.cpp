#include<iostream>
#include<vector>
using namespace std;

bool search(const int* arr, int target, int index) {
    if (index == sizeof(arr[0]) * (sizeof(arr) / sizeof(arr[0]))) {
        return false; // Array end reached, target not found
    }
    return arr[index] == target || search(arr, target, index + 1);
}

int searchIndex(const int* arr, int target, int index) {
    if (index == sizeof(arr[0]) * (sizeof(arr) / sizeof(arr[0]))) {
        return -1; // Array end reached, target not found
    }
    if (arr[index] == target) {
        return index; // Target found at current index
    }
    return searchIndex(arr, target, index + 1);
}

int searchIndexLast(const int* arr, int target, int index) {
    if (index == -1) {
        return -1; // Base case: no previous valid index
    }
    if (arr[index] == target) {
        return index; // Target found at current index
    }
    return searchIndexLast(arr, target, index - 1);
}
vector<int> list;
void searchAllIndex(const int* arr, int target, int index) {
    if (index == sizeof(arr[0]) * (sizeof(arr) / sizeof(arr[0]))) {
        return; // Array end reached, target not found
    }
    if (arr[index] == target) {
        list.push_back(index); // Target found at current index
    }
    searchAllIndex(arr, target, index + 1);
}

int main() {
    int arr[] = {1, 2, 3, 5, 9};

    cout << "Search (target found): " << search(arr, 5, 0) << endl;
    cout << "searchIndex (first occurrence): " << searchIndex(arr, 5, 0) << endl;
    cout << "searchIndexLast (last occurrence): " << searchIndexLast(arr, 5, sizeof(arr) / sizeof(arr[0]) - 1) << endl;

    return 0;
}