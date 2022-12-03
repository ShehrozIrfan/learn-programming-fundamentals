VARIABLES:
          The variable is defined as; a quantity whose value may change during execution of the
program is called variable.

DATA TYPES:
           A variable must have a data type associated with it.
1- WHOLE NUMBERS:
                The C language provides three data types to handle whole numbers.
                                          1- int
                                          2- short
                                          3- long

                                        THE "int" DATA TYPE:

                 The 'int' stands for integer.An integer is a whole number without decimal part.
                 It may have a positive or negative value.The numbers 0,1,2,3,..., and their
                 negatives -1,-2,-3,..., are examples of integers.

                                        THE "short" DATA TYPE:

                  As integer occupies 4 bytes in memory.So, if we have to store a small 
                  integer like 5 , 10 or 20 four bytes would be used.The C provides another data
                  type for storing small whole numbers which is called 'short'.The size of short
                  is 2 bytes and it can store numbers in range of -32768 to 32767.
                                        
                                        THE "long" DATA TYPE:

                  If we have a very large whole number that can not be stored in an int then we 
                  use the data type 'long' provided by C.so when we are going to deal with very
                  big whole numbers in our program,we use long data type.Its size is 4 byte.
                  We use it in program as:
                  long x=300500200;

2-REAL NUMBERS:
               The C language provides two data types to deal with real numbers(numbers with decimal
               points e.g; 1.35,735.251).The real numbers are also known as floating pointt numbers.
                                           1- float    
                                           2- double

                                        THE "float" DATA TYPE:

                 To store real numbers,float data type is used. The float data type uses 4 bytes to 
                 store a real number.

                                        THE "double" DATA TYPE:
                 If we need to store a large real number which cannot be store in 4 bytes,then we use
                 double data type.Its size is 8 byte.In program we use it as:
                                      double x=345624.769123;

3- "char" DATA TYPE:
                 For storing the character data C language provides char data type.Its size is 1 byte.
                 By using char data,
                 type we can store characters in variables.While assigning a character value to a char
                 type variable single quotes are used around the character as 'a'. i.e;
                 char x;
                 x='a';
                    
                 