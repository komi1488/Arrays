/***********************
* Автор: Дедушев П. А. *
* Вариант: 4           *
************************/
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

double calculateAverage(int numberArray[], int arrayCount) {
  double sum = 0;
  int count = 0;
    
  for (int arrayIndex = 0; arrayIndex < arrayCount; ++arrayIndex) {
    if (numberArray[arrayIndex] < 0) {
      sum += numberArray[arrayIndex];
      ++count;
    }
  }
    
  return (count > 0) ? sum / count : 0;
}
int main() {
  //The size of the array is F
  int countArrayF;
  //The size of the array is G
  int countArrayG;
  int precision = 2;
  cout << "Enter the size of the array F: ";
  cin  >> countArrayF;
  cout << "Enter the size of the array G: ";
  cin  >> countArrayG;
  
  int F[countArrayF];
  int G[countArrayG];
  
  cout << "Enter elements for the array F:" << endl;
  for (int arrayIndex = 0; arrayIndex < countArrayF; ++arrayIndex) {
    cout << "Element F[" << arrayIndex << "] = ";
    cin  >> F[arrayIndex];
  }
  cout << "Enter elements for the array G:" << endl;
  for (int arrayIndex = 0; arrayIndex < countArrayG; ++arrayIndex) {
    cout << "Element G[" << arrayIndex << "] = ";
    cin  >> G[arrayIndex];
  }
  cout << "\nEnter array:" << endl
       << "Array F: ";
  for (int arrayIndex = 0; arrayIndex < countArrayF; ++arrayIndex) {
    cout << F[arrayIndex] << " ";
  }
  cout << endl;
    
  cout << "Array G: ";
  for (int arrayIndex = 0; arrayIndex < countArrayG; ++arrayIndex) {
    cout << G[arrayIndex] << " ";
  }
  cout << fixed << setprecision(precision) << endl
       << "\nThe average of the negative elements of the array F: " << calculateAverage(F, countArrayF) << endl
       << "The average of the negative elements of the G array: "   << calculateAverage(G, countArrayG) << endl;
  return 0;
}


