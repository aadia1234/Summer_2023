public class Main {

    public static void main(String[] args) {

//        while (true) {
//            System.out.println("Hello World!");
//            if (true)
//                continue;//Go to next iteration immediately
//            break; //Stop the while loop immediately
//        }

        //While loop challenge
        int i = 5;
        while (i <= 20) {
            System.out.print(isEvenNumber(i) ? i + ", " : "");
            i++;
        }

        //Digit sum challenge
        System.out.println(sumDigits(123));

    }

    public static int sumDigits(int number) {
        int sum = 0;

        while (number >= 10) {
            sum += number % 10;
            number /= 10;
        }

        return number >= 0 ? sum + number : -1;
    }

    public static boolean isEvenNumber(int number) {
        return number % 2 == 0;
    }
}