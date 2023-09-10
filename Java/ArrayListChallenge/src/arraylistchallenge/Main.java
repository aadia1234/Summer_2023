package arraylistchallenge;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class Main {
    private static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        ArrayList<String> groceryList = new ArrayList<>();
        String optionsString = 
                """

                0 - to shutdown
                1 - to add item(s) to the list (comma delimited list)
                2 - to remove any items (comma delimited list)

                Enter a number for which action you want to do:\t""";
        
        boolean isRunning = true;

        do {
            System.out.print(optionsString);
            int choice = Integer.parseInt(scanner.nextLine());
            switch (choice) {
                case 1 -> addItems(groceryList);
                case 2 -> removeItems(groceryList);
                default -> isRunning = false;
            }
        } while (isRunning);
    }

    public static void addItems(ArrayList<String> list) {
        System.out.print("Enter the grocery items: ");
        String[] items = scanner.nextLine().split(", ");
        
        for (String item : items) {

            if (list.contains(item)) {
                System.out.println("You already have \"" + item + "\" in your grocery list!");
            } else {
                list.add(item);
            }

        }

        printList(list);
    }

    public static void removeItems(ArrayList<String> list) {
        System.out.print("Enter the grocery items: ");
        String[] items = scanner.nextLine().split(", ");

        for (String item : items) {
            if (!list.contains(item)) {
                System.out.println("You don't have \"" + item + "\" in your grocery list!");
            } else {
                list.remove(item);
            }
        }

        printList(list);
    }

    public static void printList(ArrayList<String> list) {
        list.sort(Comparator.naturalOrder());
        System.out.println("Grocery list: " + list);
    }
}
