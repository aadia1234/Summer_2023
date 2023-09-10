import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
//        int currentYear = 2023;
//
//        try {
//            System.out.println(getInputFromConsole(currentYear));
//        } catch (Exception e) {
//            System.out.println(getInputFromScanner(currentYear));
//        }

//        readingUserInputChallenge();

        minAndMaxChallenge();
    }

    public static String getInputFromConsole(int currentYear) {
        String name = System.console().readLine("Hi, What's your name? ");
        System.out.println("Hi " + name + ", Thanks for taking the course!");

        String dateOfBirth = System.console().readLine("What year were you born? ");
        int age = currentYear - Integer.parseInt(dateOfBirth);

        return "So you are " + age + " years old";
    }

    public static String getInputFromScanner(int currentYear) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Hi, What's your name?");
        String name = scanner.nextLine();

        System.out.println("Hi " + name + ", Thanks for taking the course!");

        System.out.println("What year were you born?");

        boolean validDateOfBirth = false;
        int age = 0;

        do {
            System.out.println("Enter a year of birth >= " + (currentYear - 125) + " and <= " + currentYear);
            try {
                int dateOfBirth = Integer.parseInt(scanner.nextLine());
                age = getAge(currentYear, dateOfBirth);
            } catch (Exception e) {
                System.out.println("Characters not allowed! Please try again!");
            }
        } while (age <= 0);

        return "So you are " + age + " years old";
    }

    public static int getAge(int currentYear, int dateOfBirth) {
        int minimumYear = currentYear - 125;

        return (dateOfBirth >= minimumYear) && (dateOfBirth <= currentYear) ? currentYear - dateOfBirth : -1;
    }

    //Challenge
    public static void readingUserInputChallenge() {
        Scanner scanner = new Scanner(System.in);
        int count = 0, sum = 0;

        do {
            try {
                System.out.println("Enter number #" + (count + 1));
                int num = Integer.parseInt(scanner.nextLine());
                sum += num;
                count++;
            } catch (Exception exception) {
                System.out.println("Invalid number! Please try again!");
            }
        } while (count < 5);

        System.out.println("Sum of the five numbers you entered: " + sum);
    }

    //Challenge #2
    public static void minAndMaxChallenge() {
        Scanner scanner = new Scanner(System.in);
        int min = Integer.MAX_VALUE, max = Integer.MIN_VALUE;

        System.out.println("Enter any amount of numbers to obtain the max and min of the list. Type any character to quit the program");

        do {
            try {
                int number = Integer.parseInt(scanner.nextLine());
                min = number < min ? number : min;
                max = number > max ? number : max;
            } catch (Exception exception) {
                System.out.println("Max in list: " + max);
                System.out.println("Min in list: " + min);
                break;
            }
        } while (true);
    }

}