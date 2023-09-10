public class Main {

    public static void main(String[] args) {
        int switchValue = 6;

        // Switch statement - no long, float, double, or boolean
        switch (switchValue) {
            case 1:
                System.out.println("Value was 1");
                break;

            case 2:
                System.out.println("Value was 2");
                break;

            case 3:
                System.out.println("Value was 3");
                break;

            case 4:
            case 5:
            case 6:
                System.out.println("Value was a 4, 5, or a 6");
                System.out.println("Value was actually " + switchValue);
                break;

            default:
                System.out.println("Value is unknown");
                break;
        }

        // New, enhanced switch statement (you can also return it as well)
        switch (switchValue) {
            case 1 -> System.out.println("Value was 1");
            case 2 -> System.out.println("Value was 2");
            case 3 -> System.out.println("Value was 3");
            case 4, 5, 6 -> {
                System.out.println("Was a 4, 5, 6");
                System.out.println("Value was actually " + switchValue);
            }
            default -> System.out.println("Value is unknown");
        }

        //Switch challenge - traditional switch statement
        char c = 'F';
        String word = "";

        switch (c) {
            case 'A':
                word = "Able";
                break;

            case 'B':
                word = "Baker";
                break;

            case 'C':
                word = "Charlie";
                break;

            case 'D':
                word = "Dog";
                break;

            case 'E':
                word = "Easy";
                break;

            default:
                word = "Invalid letter";
                break;
        }

        System.out.println(word.equals("Invalid letter") ? "Letter '" + c + "' not found" : c + " - " + word);


        //Switch challenge - enhanced switch statement
        String newWord = switch (c) {
            case 'A' -> "Able";
            case 'B' -> "Baker";
            case 'C' -> "Charlie";
            case 'D' -> "Dog";
            case 'E' -> "Easy";
            default -> {
                yield "Invalid letter";
            }
        };

        System.out.println(newWord.equals("Invalid letter") ? "Letter '" + c + "' not found" : c + " - " + newWord);

        printDayOfWeek(5);
        printDayOfWeek(10);
        printWeekDay(5);
        printWeekDay(10);
    }


    public static void printDayOfWeek(int day) {
        String dayOfTheWeek = switch (day) {
            case 0 -> "Sunday";
            case 1 -> "Monday";
            case 2 -> "Tuesday";
            case 3 -> "Wednesday";
            case 4 -> "Thursday";
            case 5 -> "Friday";
            case 6 -> "Saturday";
            default -> "Invalid Day";
        };

        System.out.println("Day: " + day + ", day of the week: " + dayOfTheWeek);
    }

    public static void printWeekDay(int day) {
        if ((day >= 0) && (day <= 6)) {
            printDayOfWeek(day);
        } else {
            System.out.println("Invalid Day!");
        }
    }

    public static boolean isLeapYear(int year) {
        boolean isALeapYear = (year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0));
        return isALeapYear && (year >= 1 && year <= 9999);
    }

    public static int getDaysInMonth(int month, int year) {
        int days;
        switch(month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12: days = 31; break;
            case 4: case 6: case 9: case 11: days = 30; break;
            case 2: days = isLeapYear(year) ? 29 : 28; break;
            default: days = -1; break;
        }

        return ((year >= 1) && (year <= 9999)) ? days : -1;
    }
}
