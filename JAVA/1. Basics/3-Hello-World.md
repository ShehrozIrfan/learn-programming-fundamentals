## Here is a simple "Hello, World!" program in Java:
```java
public class Main {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
}
```
**Explanation:**
• The first line `public class Main` defines a class named `Main`. In Java, all code must be contained within a class.
• The next line `public static void main(String[] args)` is the main method of the program. This is the entry point of the program, and is where the code execution begins.
• The next line `System.out.println("Hello, World!");` is a statement that prints the string `"Hello, World!"` to the console. `System.out.println()` is a method that prints a line of text to the standard output (in this case, the console).
## Run:
To run this program, you will need to have the Java Development Kit (JDK) installed on your computer. You can then compile the program by running the `javac` command followed by the name of the Java file:
```java
javac Main.java
```
This will create a new file named `Main.class`, which contains the compiled version of the program. You can then run the program using the `java` command:
```java
java Main
```
This will execute the code in the `main` method, and you should see the output "Hello, World!" printed to the console.
