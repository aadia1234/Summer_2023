package EncapsulationChallenge;

public class Main {
    public static void main(String[] args) {
        Printer printer = new Printer(50, false);
        System.out.println("initial page count = " + printer.getPagesPrinted());

        int pagesprinted = printer.printPages(5);
        System.out.printf("Current Job Pages: %d, Printer Total: %d%n", pagesprinted, printer.getPagesPrinted());

        pagesprinted = printer.printPages(10);
        System.out.printf("Current Job Pages: %d, Printer Total: %d%n", pagesprinted, printer.getPagesPrinted());
    }
}
