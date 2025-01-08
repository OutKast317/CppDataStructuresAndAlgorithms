#include<iostream>
using namespace std;
int main(){
float Size = 11;
int intSize = static_cast<int>(Size);
float arr[intSize] {9.9, 10.1, 20.2, 30, 44, 50.5, 60.6, 77, 89, 98, 100};

cout << "You entered: ";
for (int i = 0; i < Size; i++){
    cout << arr [i] << ' ';
}

int key;
cout << "\nEnter key or number you want to search for: ";
cin >> key;

int left = 0;
int right = Size - 1;
int mid,found;

while (found == 0 && left <= right) {
    mid = (left + right) / 2;
    if (arr[mid] == key) {
        found = 1;
    }
    else if (arr[mid] < key) {
        left = mid + 1;
    }
    else {
        right = mid - 1;
    }
}

if (found != 0){
    cout << "Element found at index: " << mid;
}
else {
cout << "Element not found." << '\n';
}

return 0;

}
