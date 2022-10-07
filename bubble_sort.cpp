// Bubble sort in C++

#include <iostream>
using namespace std;


void bubbleSort(int array[], int size) {

  for (int step = 0; step < size; ++step) {
    for (int i = 0; i < size - step; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}


void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int data[1000] , n;

  cout<<"Enter the number of elements\n";
  cin>>n;

  cout<<"Enter the elements\n";
  for(int i=0;i<n;i++){
    cin>>data[i];
  }

  bubbleSort(data,n);
  
  cout << "Sorted Array in Ascending Order:\n";  
  for(int i=0;i<n;i++){
    cout<<data[i]<<" ";
  }
  return 0;
}