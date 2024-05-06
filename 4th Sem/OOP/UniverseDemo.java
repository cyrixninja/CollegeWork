//Write a program to demonstrate the visibility modifiers in java.

// Visibility modifiers: public, private, protected, and default
// public: The members (variables, methods, etc.) can be accessed from anywhere.
// private: The members can only be accessed within the same class.
// protected: The members can be accessed within the same package and also in the subclass in any package.
// default (package-private): If no modifier is specified, it's treated as default. The members can be accessed only within the same package.

class Universe {
    // public variable
    public int stars = 100000;

    // private variable
    private int blackHoles = 10;

    // protected variable
    protected int planets = 8;

    // default (package-private) variable
    int galaxies = 200;

    // public method
    public void displayStars() {
        System.out.println("Stars: " + stars);
    }

    // private method
    private void displayBlackHoles() {
        System.out.println("Black Holes: " + blackHoles);
    }

    // protected method
    protected void displayPlanets() {
        System.out.println("Planets: " + planets);
    }

    // default (package-private) method
    void displayGalaxies() {
        System.out.println("Galaxies: " + galaxies);
    }

    // method to access private method within the same class
    public void accessPrivateMethod() {
        displayBlackHoles();
    }
}

public class UniverseDemo {
    public static void main(String[] args) {
        Universe universe = new Universe();

        // Accessing public variable
        System.out.println("Stars: " + universe.stars);

        // Accessing protected variable
        System.out.println("Planets: " + universe.planets);

        // Accessing default variable
        System.out.println("Galaxies: " + universe.galaxies);

        // Accessing private variable will give an error
        // System.out.println("Black Holes: " + universe.blackHoles);

        // Accessing public method
        universe.displayStars();

        // Accessing protected method
        universe.displayPlanets();

        // Accessing default method
        universe.displayGalaxies();
        
        // Accessing private method will give an error
        // universe.displayBlackHoles();

        // Accessing private method through a public method
        universe.accessPrivateMethod();
    }
}

