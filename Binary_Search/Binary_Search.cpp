#include <iostream>
using namespace std;
int mid;
int BinarySearch(int arr[], int x, int left, int right){
    if (left <= right){
        mid = left +  (right - left) / 2;

        if (arr[mid] == x){
            return mid;
        }
        else if (arr[mid] > x ){
            return BinarySearch(arr, x, left, mid-1);
        }
        else if (arr[mid] < x){
            return BinarySearch(arr, x, mid+1, right);
        }

    }
    else{
        return -1;
    }
}


int main() {
    int i, num, find, n, result;

    cout << "enter the size of the array = ";
    cin >> num;
    
    int arr[num];
    cout << "enter " << num << " numbers." << endl;

    for (i = 0; i < num; i++) /*itteration for checking if the number inputted is the same as the size of array*/
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    for (i = 0; i < num ; i++)
    {
        cout << arr[i] << " " << endl;
    }


    for (int x=0; x<num; x++){  /*itteration for x or the first array*/
        for (int y = x+1; y < num; y++){ /*itteration for y or the seccond array*/
            if (arr[x] > arr[y]){   /*checking if the array with index x have a greater number or not than array with index y*/
                swap(arr[x], arr[y]); /*swapping the place of order*/
            }
        }
    }

    cout << "Sorted array are : " << endl;

    for (i = 0; i < num; i++)
    {
        cout << arr[i] << endl;
    }



    n = sizeof(arr) / sizeof(arr[0]);
    cout << "size of array : " << n << endl;
    cout << "Enter the number you want to search : " << endl;
    cin >> find;

    
    result = BinarySearch(arr, find, 0, n-1);
    if (result != -1){
        cout << "Number is found in index " << result;
    }
    else{
        cout << "Number is not in array";
    }
        
    return 0;
}
