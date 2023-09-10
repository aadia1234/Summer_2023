package linkedlistchallenge;

import java.util.Comparator;
import java.util.LinkedList;
import java.util.List;
import java.util.ListIterator;
import java.util.Scanner;

public class Main {
    private static Scanner scanner = new Scanner(System.in);
    private static boolean isMovingForward = true;
    public static void main(String[] args) {
        LinkedList<Town> towns = new LinkedList<>(List.of(
            new Town("Sydney", 0.0),
            new Town("Adelaide", 1374.0),
            new Town("Alice Springs", 2771.0),
            new Town("Brisbane", 917.0),
            new Town("Darwin", 3972.0),
            new Town("Melbourne", 877.00),
            new Town("Perth", 3923)
        ));
        boolean isRunning = true;
        ListIterator<Town> iterator = towns.listIterator();
        String optionsString = 
                """
                
                Available actions (select word or letter):

                (F)orward
                (B)ackward
                (L)ist Places
                (Q)uit

                Enter your choice:\t""";

        printList(towns);

        do {
            System.out.println(optionsString);
            char choice = scanner.nextLine().toUpperCase().charAt(0);

            switch (choice) {
                case 'F' -> { goForward(towns, iterator); }
                case 'B' -> { goBackward(towns, iterator); }
                case 'L' -> printList(towns);
                default -> isRunning = false;
            }
        } while (isRunning);
    }

    public static void goForward(LinkedList<Town> list, ListIterator<Town> iterator) {
    
        if (!isMovingForward) {
            iterator.next();
        }

        if (iterator.hasNext()) {
            Town town = iterator.next();
            System.out.printf("Town: %s, distance from Sydney (km): %s%n", town.getName(), town.getDistanceFromSydney());
        } else {
            System.out.println("Can't go any further (you've reached the tail of the list)");
        }

        isMovingForward = true;
    }

    public static void goBackward(LinkedList<Town> list, ListIterator<Town> iterator) {
        if (isMovingForward) {
            iterator.previous();
        }

        if (iterator.hasPrevious()) {
            Town town = iterator.previous();
            System.out.printf("Town: %s, distance from Sydney (km): %s%n", town.getName(), town.getDistanceFromSydney());
        } else {
            System.out.println("Can't go any further (you've reached the head of the list)");
        }

        isMovingForward = false;
    }

    public static void printList(LinkedList<Town> list) {
        System.out.println("Towns: \n");
        
        list.sort(new Comparator<Town>() {

            @Override
            public int compare(Town o1, Town o2) {
                return o1.getDistanceFromSydney() > o2.getDistanceFromSydney() ? 1 : -1;
            }
            
        });

        for (var town : list) {
            System.out.printf("Town: %s, distance from Sydney (km): %s%n", town.getName(), town.getDistanceFromSydney());
        }
    }
}
