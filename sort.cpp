#include <iostream>
#include <vector>

using namespace std;

int main(){

}

void insertionSort(vector<int> *A){
  for (int i=0;i < (*A).size(); i++){
    int pivot = (*A)[i];
    int j=i-1;
    while( j>=0 && (*A)[j] > pivot){
      (*A)[j+1] = (*A)[j];
      j--;
    }
    (*A)[j+1] = pivot;
    
  }
  
}
