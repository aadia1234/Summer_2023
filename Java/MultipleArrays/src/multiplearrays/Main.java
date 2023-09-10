package multiplearrays;

import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws Exception {
        int[][] array2D = new int[4][4];
        System.out.println(Arrays.toString(array2D));
        System.out.println("array2D.length = " + array2D.length);

        for (int[] arr : array2D) {
            System.out.println(Arrays.toString(arr));
        }

        for (int i = 0; i < array2D.length; i++) {
            var arr = array2D[i];
            for (int j = 0; j < arr.length; j++) {
                // System.out.print(array2D[i][j] + " ");
                array2D[i][j] = (i * 10) + (j+1);
            }
            System.out.println();
        }

        for (var arr : array2D) {
            for (var element : arr) {
                System.out.print(element + " ");
            }
            System.out.println();
        }

        System.out.println(Arrays.deepToString(array2D));

        array2D[1] = new int[] {10, 20, 30};
        System.out.println(Arrays.deepToString(array2D));

        Object[] anyArray = new Object[3];
        System.out.println(Arrays.toString(anyArray));

        anyArray[0] = new String[] {"a", "b", "c"};
        System.out.println(Arrays.deepToString(anyArray));

        anyArray[1] = new String[][] {
            {"1", "2"},
            {"3", "4", "5"},
            {"6", "7", "8", "9"}
        };
        System.out.println(Arrays.deepToString(anyArray));

        anyArray[2] = new int[2][2][2];
        // anyArray[2] = "Hello"; // exception occurs
        System.out.println(Arrays.deepToString(anyArray));

        for (Object element : anyArray) {
            System.out.println("Element type = " + element.getClass().getSimpleName());
            System.out.println("Element toString() = " + element);
            System.out.println(Arrays.deepToString((Object[]) element));
        }
        
    }
}
