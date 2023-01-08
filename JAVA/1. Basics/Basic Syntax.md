
# Java Basic Syntax
Here are some basic syntax elements of the Java programming language:
## 1. File Structure
```JAVA
public class CodeGeek{
	public static void main(String[] args)
	{
		System.out.println("Hello Coders!");
	}
}
```
The name of the file has to be the class name. Example : Here class name
is CodeGeek therefore filename must have name as CodeGeek. Otherwise it will
throw error.
## 2. Comments
Comments are used to add notes and explanations to your code. 
In Java, there are two types of comments: single-line comments 
and multi-line comments. Single-line comments start with // and 
extend to the end of the line. Multi-line comments start with /* 
and end with */ .
**Example**  
// This is a single-line comment

/*
This is a
multi-line comment
*/
## 3. Variables
 Variables are used to store values in a program. 
 In Java, you must declare a variable before you can use
  it and specify its data type. **For example:**
  ```java
int x;         // Declare an integer variable named x
x = 10;        // Assign the value 10 to x
String name;   // Declare a string variable named name
name = "John"; // Assign the value "John" to name
```
## 4. Data types
 Java has several built-in data types, including integers (int), 
 floating-point numbers (float and double), characters (char), 
 and boolean values (boolean). For example:

 ```java
int x = 10;          // Integer
float pi = 3.14;     // Floating-point number
char letter = 'A';   // Character
boolean flag = true; // Boolean value
```
## 5. Case Sensitivity
Java is a case-sensitive language, which means that the language treats identifiers (such as variables, methods, and class names) that are written with different capitalization as **different**.
For example, the variables `x` and `X` are treated as different identifiers in Java. The following code will result in an **error**:
```java
int x = 5;
System.out.println(X);
```
Output:
```java
error: cannot find symbol
System.out.println(X);
                 ^
  symbol:   variable X
  location: class Main
```