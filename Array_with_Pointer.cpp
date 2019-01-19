//Array Reverse, Array Search in C++ Using Pointers
//Nouman Baloch Find on Github https://www.github.com/noumanbaloch
//Find Repository on Github 
#include <iostream> 
using namespace std; 
  
// Function to swap two memory contents 
void swap(int* a, int* b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  
// Function to reverse the array through pointers 
void reverse(int array[], int array_size) 
{ 
  
    // pointer1 pointing at the beginning of the array 
    int *pointer1 = array, 
  
        // pointer2 pointing at end of the array 
        *pointer2 = array + array_size - 1; 
    while (pointer1 < pointer2) { 
        swap(pointer1, pointer2); 
        pointer1++; 
        pointer2--; 
    } 
} 
  
// Function to print the array 
void print(int* array, int array_size) 
{ 
  
    // Length pointing at end of the array 
    int *length = array + array_size, 
  
        // Position pointing to the beginning of the array 
        *position = array; 
    cout << "Array = "; 
    for (position = array; position < length; position++) 
        cout << *position << " "; 
} 


int searchval(int *arr, int array_size, int key)
{
  int val;

  for(int y = 0 ; y < array_size ; y ++  )
  {

    cout<<arr[y]<<endl; // Re-list the array of numbers
    if(arr[y] == key)
       val =  key;
        cout<<"Value is founded = "<<val;
  }

 

}


// Driver function 
int main() 
{ 
  
  
  	cout<<"Welcome to program\n";
    // Array to hold the values 
    int array[] = { 2, 4, -6, 5, 8, -1 }; 
  
    cout << "Original "; 
    print(array, 6); 
    cout<<endl;
  	cout<<"Do you want to Reverse the array y/n =";
  	char input;
  	cin>>input;
  	cout<<endl;
  	if(input == 'y'){
	 
    cout << "Reverse "; 
    reverse(array, 6); 
    print(array, 6); 
     } else{
     	cout<<"Close";
	 }
	 cout<<endl;
	 cout<<"Do you want to search any value in array =";
	 char input2;
	 cin>>input2;
	cout<<endl;
	 if(input2 == 'y'){
	 
    cout<<"Enter the number that you want to find in array =";
    int key;
    cin>>key;
    
    searchval(array, 6, key);
    }
    return 0; 
    
    
} 


