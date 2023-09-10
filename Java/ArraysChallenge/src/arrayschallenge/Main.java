package arrayschallenge;

import java.util.Arrays;
import java.util.Random;

public class Main {
    public static void main(String[] args) {
        int size = 5;
        int[] test = new int[size];
        
        for (int i = 0; i < size; i++) {
            Random random = new Random();
            test[i] = random.nextInt(100);
        }

        System.out.println(Arrays.toString(test));

        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (test[j] < test[j+1]) {
                    int t = test[j];
                    test[j] = test[j+1];
                    test[j+1] = t;
                }
            }
        }

        System.out.println(Arrays.toString(test));
    }
}
