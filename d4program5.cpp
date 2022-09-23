 sum of array using pointers 
#include <iostream> 

using namespace std; 
 
// Function to find the sum of the array 

void sum(int* array, int length) 
{ 

    int i, sum_of_array = 0; 

    for (i = 0; i < length; i++) 

        sum_of_array = sum_of_array + *(array + i); 

    cout << "sum of array is = " << sum_of_array; 
} 
// Driver function 

int main() 
{ 

    // Array to hold the values 

    int array[] = { 2, 4, -6, 5, 8, -1 }; 

    sum(array, 6); 

    return 0; 
} 