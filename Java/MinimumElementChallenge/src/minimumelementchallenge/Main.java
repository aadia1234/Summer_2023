package minimumelementchallenge;

import java.util.Arrays;
import java.util.Scanner;

public class Main {
    private static Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
        int[] arr = readIntegers(5);

        System.out.println(Arrays.toString(arr));
        System.out.println("Min in array: " + findMin(arr));

        scanner.close();
    }

    private static int[] readIntegers(int size) {
        int[] arr = new int[size];

        String[] s = scanner.nextLine().split(", ");

        for (int i = 0; i < size; i++) {
            arr[i] = Integer.parseInt(s[i]);
        }

        return arr;
    }

    private static int findMin(int[] arr) {
        int min = Integer.MAX_VALUE;
        
        for (var num : arr) {
            if (num < min) {
                min = num;
            }
        }

        return min;
    }
}
