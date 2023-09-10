package Test;

public class Main {
    
    public static void main(String[] args) {
        String helloWorld = "Hello" + "World";
        
        Main helloWorldBuilder = new Main("Hello World");

        printInformation(helloWorld);
        printInformation(helloWorldBuilder);
    }

    public static void printInformation(String string) {
        System.out.println("String = " + string);
        System.out.println("length = " + string.length());
    }

    public static void printInformation(Main builder) {
        System.out.println("String = " + builder);
        System.out.println("length = " + builder.length());
    }

}
