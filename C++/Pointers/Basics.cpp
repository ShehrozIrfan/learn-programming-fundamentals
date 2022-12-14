//In this section we will see the basics of pointers like initializing, allocating arrays on heaps and itterating using pointers
int main()
{
  //To create a pointer simply use this code Datatype* variableName following is an example
  
  int* ptr;
  //Create any random variable
  int val = 10;
  
  //Inorder to point this pointer to val we need to give the pointer ptr the address of that val hence we use & operator to get that address
  ptr = &val;
  
  //Now we can access val and change its value by using ptr indirectly
  
  cout << *ptr << endl;
  //Output = 10
  
                   //We can also use pointer to change the value at the address its pointing at
  
  *ptr = 15;      //* is the dereference operator 
  cout << *ptr << endl;
  //Output = 15
  
  //Now we can also use a pointer to create an array
  
  int* arr = new int[10]; //Creates an array of size 10 on heap
  
  for(int i = 0; i < 10 ;i++)
  {
    *(arr+i) = 10;         //Initializes array to zero also *(arr+i) is equal to arr[i]
  }
 
  //Now we can also transverse an array using pointers
  //Also keep in mind we have to put NULL at end of array 
  for(int* curr = arr; curr!= NULL || cur < arr+10 ;curr++) //if we have size we can just limit by putting size else we can also put NULL ptr at end of array and check it in loop
  {
    cout << *curr <<endl;
  }
  
  //Keep in mind after declaring an array on heap it becomes programmers responsibility to delete it
  //Deleting an array using pointer is quite easy
  delete[] arr;
}
