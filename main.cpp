#include <iostream>

using namespace std;
int binarySearch(int arr[], int size, int target);
int search(int arr[], int size, int target);
void bubbleSort(int arr[], int size);

int main() {

    /*
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index = search(numbers,size,6);
    int index = binarySearch(numbers, size, 7);
    cout << index << endl;
    */

    int arr[] = {10,1,9,2,8,3,7,6,4,5,6,7,8,9};
    bubbleSort(arr,sizeof(arr)/sizeof(arr[0]));
    for(int num : arr) {
        cout << num << " ";
    }
    return 0;
}

int binarySearch(int arr[], int size, int target) {

    int low = 0;
    int high = size - 1;
    int mid;

    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }

    return -1;
}

int search(int arr[], int size, int target) {

    for(int i = 0;i<size;i++) {
        if(arr[i] == target) return i;
    }
    return - 1;
}

void bubbleSort(int arr[], int size) {

    for(int i=0;i<size;i++) {
        bool swapped = false;
        for(int j = 0;j<size-i-1;j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if(!swapped) {
            break;
        }
    }

}