package OperatorChallenge;

public class Main {
    public static void main(String[] args) {
        double num1 = 20.0, num2 = 80.0;
        double result = 100.0 * (num1 + num2);
        double remainder = result % 40.0;
        boolean is0 = remainder == 0.0;

        System.out.println("is0 value: " + is0);

        if (!is0) {
            System.out.println("Remainder is: " + remainder);
        }
    }
}