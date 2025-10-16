/***********************
* Автор: Дедушев П. А. *
* Вариант: 4           *
************************/
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

double calculateAverage(int arr[], int size) {
  double sum = 0;
  int count = 0;
    
  for(int array_index = 0; array_index < size; ++array_index) {
    if(arr[array_index] < 0) {
      sum += arr[array_index];
      ++count;
    }
  }
    
  return (count > 0) ? sum / count : 0;
}
int main() {
  //The size of the array is F
  int k;
  //The size of the array is G
  int n;
  
  cout << "Enter the size of the array F: ";
  cin  >> k;
  cout << "Enter the size of the array G: ";
  cin  >> n;
  
  int F[k];
  int G[n];
  
  cout << "Enter " << k << "Elements for the array F:" << endl;
  for(int array_index = 0; array_index < k; ++array_index) {
    cout << "Element F[" << array_index << "] = ";
    cin  >> F[array_index];
  }
  for(int array_index = 0; array_index < n; ++array_index) {
    cout << "Element G[" << array_index << "] = ";
    cin  >> G[array_index];
  }
  cout << "\nEnter array:" << endl;
    cout << "Array F: ";
  for(int array_index = 0; array_index < k; ++array_index) {
    cout << F[array_index] << " ";
  }
  cout << endl;
    
  cout << "Array G: ";
  for(int array_index = 0; array_index < n; ++array_index) {
    cout << G[array_index] << " ";
  }
  cout << endl;
  cout << fixed << setprecision(2); 
    cout << "\nThe average of the negative elements of the array F: " << calculateAverage(F, k) << endl
         << "The average of the negative elements of the G array:   " << calculateAverage(G, n) << endl;
  return 0;
}

