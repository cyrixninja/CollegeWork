// Write a program to demonstrate the use of constructor (with and without parameter) and destructor.

public class Prac4 {
    private String name;

    // Constructor without parameters
    public Prac4() {
        this.name = "Default";
        System.out.println("Constructor without parameters called. Name is set to 'Default'");
    }

    // Constructor with parameters
    public Prac4(String name) {
        this.name = name;
        System.out.println("Constructor with parameters called. Name is set to '" + name + "'");
    }

    // Finalize method (similar to a destructor in C++)
    @Override
    protected void finalize() throws Throwable {
        System.out.println("Finalize method called for object with name '" + name + "'");
        super.finalize();
    }

    public static void main(String[] args) {
        Prac4 obj1 = new Prac4();
        Prac4 obj2 = new Prac4("Custom");
    }
}
