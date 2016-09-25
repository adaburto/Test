//Hey BooBoo

// REQUIRES: there are at least n elements in arr
// MODIFIES: cout
// EFFECTS:  Prints out n elements from arr
// NOTE:     You must use traversal by index.
void printArrayIndex(const int arr[], int n){
  int i = 0;

  for (i = 0; i < n; ++i) {
    cout << arr[i] << endl;
  }

  return;
}

// REQUIRES: there are at least n elements in arr
// MODIFIES: cout
// EFFECTS:  Prints out n elements from arr
// NOTE:     You must use traversal by pointer.
void printArrayPointer(const int arr[], int n){
  int* ptr = arr;

  for (ptr = arr; ptr < arr + n; ++ptr) {
    cout << *ptr << endl;
  }
}

// REQUIRES: there are at least n elements in arr
// MODIFIES: arr
// EFFECTS:  all elements are "shifted" right by one unit
//           for example, [0,1,3,3,4]
//           would become [4,0,1,3,3]
// NOTE:     You must use traversal by pointer.
//           You may not use an extra array.
void slideRight(int arr[], int n){
  int* ptr  = arr;
  int temp  = 0;
  int temp2 = 0;

  for (ptr = arr; ptr < arr + n; ++ptr) {
    if (ptr == arr) {
      temp = *(ptr + 1);
      *(ptr + 1) = *ptr;
    }
    if else ((ptr + 1) == n) {
      ptr = arr;
      *ptr = temp2;
    }
    else {
      temp2 = temp;
      temp = *(ptr + 1);
      *(ptr + 1) = temp2;

    }
  }

  return;
}

// REQUIRES: there are at least n elements in arr
// MODIFIES: arr
// EFFECTS:  the order of elements in arr is reversed
//           for example, [1,2,3,4,5]
//           would become [5,4,3,2,1]
// NOTE:     You must use traversal by pointer.
//           You may not use an extra array.
void flip(int arr[], int n){
  int* ptr = arr;
  int* ptr2 = arr;
  int temp = 0;

  for (ptr = arr; ptr < arr + n; ++ptr) {
    for (ptr2 = arr + (n - 1); ptr2 > arr; --ptr2) {
      if (ptr == ptr2){
        return;
      }
      else {
      temp = *ptr;
      *ptr = *ptr2
      *ptr2 = temp;
      }
    }
  }
}

// REQUIRES: there are at least n elements in arr
//           the elements of arr are sorted in ascending order
//           there may be duplicates
// MODIFIES: arr
// EFFECTS:  Returns the number of unique elements and now arr
//           begins with those unique elements in sorted order.
//           The rest of the array doesn't matter.
// NOTE:     You must use traversal by pointer.
//           Your solution must be in-place and run in linear time.
int removeDuplicates(int arr[], int n){
  return 0; // TASK 3 - REPLACE WITH YOUR CODE
}

int main(){
  int arr1[5] = {0,1,3,3,4};
  
  cout << "Testing printArrayIndex:" << endl;
  cout << " Solution: 0 1 3 3 4 " << endl;
  cout << "Your code: "; printArrayIndex(arr1,5); cout << endl;
  
  cout << "Testing printArrayPointer:" << endl;
  cout << " Solution: 0 1 3 3 4 " << endl;
  cout << "Your code: "; printArrayPointer(arr1,5); cout << endl;
  
  cout << "Testing slideRight: " << endl;
  cout << " Solution: 4 0 1 3 3 " << endl;
  slideRight(arr1,5);
  cout << "Your code: "; printArrayPointer(arr1,5); cout << endl;
  
  int arr2[5] = {1,2,3,4,5};
  cout << "Testing flip:" << endl;
  cout << " Solution: 5 4 3 2 1 " << endl;
  flip(arr2,5);
  cout << "Your code: "; printArrayPointer(arr2,5); cout << endl;
  
  /*
  int arr3[10] = {1,3,3,4,4,4,5,7,9,9};
  cout << "Testing removeDuplicates:" << endl;
  cout << " Solution: 1 3 4 5 7 9 " << endl;
  int num = removeDuplicates(arr3,10);
  cout << "Your code: "; printArrayPointer(arr3,num); cout << endl;
  */
}