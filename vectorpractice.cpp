#include <iostream>
#include <vector>


using namespace std;

int main(){
  
  
  //Format: vector<DataType> nameofVector
  
  vector<int> myVector;
  myVector.push_back(3);
  myVector.push_back(7);
  myVector.push_back(4);
  myVector.push_back(12);
  myVector.push_back(9);
  
  for (unsigned int i = 0; i < myVector.size(); i++){
    cout << myVector[i] << " *** ";
  }
  
  myVector.insert(myVector.begin() + 3, 5);
  
  cout << endl;
  
  for (unsigned int i = 0; i < myVector.size(); i++){
    cout << myVector[i] << " ==> ";
  }
  
 myVector.erase(myVector.begin() + 4);
 
 for (unsigned int i = 0; i < myVector.size(); i++){
    cout << myVector[i] << " $$$ ";
  }
  
  cout << endl;
  
  cout << myVector.empty(); // false 
  
  cout << endl;
  
  myVector.clear();
  
  cout << myVector.empty(); // true
 
  return 0;
}

