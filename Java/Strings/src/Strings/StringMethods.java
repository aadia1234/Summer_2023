package Strings;

public class StringMethods {

    public static void main(String[] args) {
        String birthDate = "09/12/2005";
        int startingIndex = birthDate.indexOf("2005");

        System.out.println("StartingIndex = " + startingIndex);
        System.out.println("Birth year = " + birthDate.substring(startingIndex));
        System.out.println("Month = " + birthDate.substring(0, 2));

        String newDate = String.join("/", "09", "12", "2005");
        System.out.println("newDate = " + newDate);

        newDate = "09";
        newDate = newDate.concat("/");
        newDate = newDate.concat("12");
        newDate = newDate.concat("/");
        newDate = newDate.concat("2005");
        System.out.println("newDate = " + newDate);

        newDate = "09" + "/" + "12" + "/" + "2005";
        System.out.println("newDate = " + newDate);

        newDate = "09"
                .concat("/")
                .concat("12")
                .concat("/")
                .concat("2005");
        System.out.println("newDate = " + newDate);

        System.out.println(newDate.replace('/', '-'));
        System.out.println(newDate.replace("2", "00"));
        System.out.println(newDate.replaceFirst("/", "-"));
        System.out.println(newDate.replaceAll("/", "---"));

        System.out.println("ABC\n".repeat(3));
        System.out.println("-".repeat(20));
        
        System.out.println("ABC\n".repeat(3).indent(8));
        System.out.println("-".repeat(20));

        System.out.println("    ABC\n".repeat(3).indent(-2));
        System.out.println("-".repeat(20));
    }

}