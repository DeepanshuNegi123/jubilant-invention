//  heap insert min and max 
#include <iostream>
using namespace std;

int value[1000];  // an array declared of size 1000
int size = 0; // initial size of the array
  void insert(int underpo){
      
      size = size +1;     // array  is declared with size = 1 initial index
      int index = size;   // every time insert is called size is incresed by one .
      value[index]= underpo;   // we have inserted into the heap 
      
      while (index>1){    // here we are checking if our heap is min or max 
          int parent = index/2;    //  checking the parent current
          
          if (value [parent]<value [index]){      // min heap alogortihm applied 
              swap(value[parent] , value[index]);
              index = parent ;    // swaping index also to parent and the loop will run till it swaps to the root node .
          }
          
          else{
              return ;
          }
      }
    
}
void display(int value[]){
    for (int i=1; i<=size; i++){
        cout << value[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
int underpo;
    for (int i=0; i<n ; i++){
        cin >> underpo;
        insert(underpo);
    }
    display(value);
    
    return 0;
}
