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
  for(int i = 0; i<10 ;i++)
  {
    *(arr+i) = 0;         //Initializes array to zero also *(arr+i) is equal to arr[i]
  }
  
  //Now we can also transverse an array using pointers
  for(int* curr = arr; curr!= NULL;curr++)
  {
    cout << *curr<<endl;
  }
}
