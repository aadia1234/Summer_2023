import static java.lang.Math.sqrt;

public class Main {

    public static void main(String[] args) {

        for (double rate = 7.5; rate <= 10.0; rate += 0.25) {
            double interestAmount = calculateInterest(100, rate);
            double test = 5.0;
            if (rate >= 8.5) {
                break;
            }
            System.out.println("$100 at " + rate + " interest = $" + interestAmount);

        }

        //For loop challenge - prime number
        int primeCounter = 0;
        for (int i = 500; i <= 1000 && primeCounter < 3; i++) {
            System.out.println(i + " is " + (isPrime(i) ? "" : "NOT ") + "a prime number");
            primeCounter += isPrime(i) ? 1 : 0;
        }

        // For loop challenge - Sum 3 and 5
        int sum = 0, count = 0;

        for (int i = 1; i <= 1000; i++) {

            if (i % 15 == 0) {
                sum += i;
                count++;
                System.out.print(i + ", ");
            }

            if (count == 5) { break; }

        }

        System.out.println(sum);

    }

    public static double calculateInterest(double amount, double interestRate) {

        return (amount * (interestRate / 100));
    }

    public static boolean isPrime(int wholeNumber) {
        for (int i = 2; i <= sqrt(wholeNumber); i++) {
            if (wholeNumber % i == 0) {
                return false;
            }
        }
        return wholeNumber != 1;
    }

}
