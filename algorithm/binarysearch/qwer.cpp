#include <iostream>
using namespace std;
int Binary_search(int num, int first, int last, int arr[])
{
    if (first > last) return -1;

    int mid = (first + last) / 2;
    if (arr[mid] == num) return mid;
    else if (arr[mid] > num) {
        return Binary_search(num, first, mid - 1, arr);
    }
    else {
        return Binary_search(num, mid + 1, last, arr);
    }
}

int main(void){
    int num;
    cin >> num;
    int arr[7] = {2,4,6,8,10,12,14};
    cout << "인덱스" << Binary_search(num,0,6,arr) << '\n';
}