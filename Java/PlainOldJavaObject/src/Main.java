public class Main {
    public static void main(String[] args) {

        //POJO
        for (int i = 0; i < 6; i++) {
            Student s = new Student("s92300" + i, 
                switch (i) {
                    case 1-> "Mary";
                    case 2 -> "Carol";
                    case 3 -> "Tim";
                    case 4 -> "Harry";
                    case 5 -> "Lisa";
                    default -> "Anonymous";
                }, 
                "05/11/1999", 
                "Java Masterclass"
            );

            System.out.println(s);
        }

        System.out.println("\n=================\n");

        //Java's implicit POJO: record

        for (int i = 0; i < 6; i++) {
            CompanyStudent s = new CompanyStudent("s92300" + i, 
                switch (i) {
                    case 1-> "Mary";
                    case 2 -> "Carol";
                    case 3 -> "Tim";
                    case 4 -> "Harry";
                    case 5 -> "Lisa";
                    default -> "Anonymous";
                }, 
                "05/11/1999", 
                "Java Masterclass"
            );

            System.out.println(s);
        }

    }
}
