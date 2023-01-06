/*
Pointers are variables that store memory addresses as their values. In C++, a pointer is a variable that holds the memory address of another variable. 
Pointers are used to store the addresses of other variables, or to store the addresses of memory locations where data is stored.

One of the main advantages of pointers is that they allow you to directly manipulate the memory used by your program,
which can be very useful in certain circumstances. For example, you can use pointers to dynamically allocate memory for data structures, 
or to pass large blocks of data to functions more efficiently.

To declare a pointer in C++, you use the "*" operator. For example, the following code declares a pointer to an integer:
Keep in mind you have to initialize pointer to the same data type that you need it to point to. For example in next line we create a pointer that points to a integer data type.

int *ptr;

To access the value stored at the memory address pointed to by a pointer, you use the "*" operator also known as the dereference operator. 
For example, the following code sets the value of the integer pointed to by "ptr" to 10:

int val = 10;
ptr = &val;

Now you can access the values in variable 'val' by dereferencing the pointer ptr;

*ptr = 10;



There are a few rules that you need to follow when working with pointers in C++. 
For example, you cannot assign a value to a pointer directly; you must use the "&" operator to get the address of a variable first. 
You also need to make sure that you initialize a pointer before you try to use it, 
and that you free any memory that you dynamically allocate using pointers when you are finished with it.

Overall, pointers are a powerful and useful feature of C++ that allow you to directly manipulate the memory used by your program. With careful use,
they can greatly enhance the efficiency and flexibility of your code.

*/
