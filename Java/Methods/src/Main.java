public class Main {

    public static void main(String[] args) {
//        System.out.println("Hello World!");
//        int highscorePosition = calculateHighScorePosition(1500);
//        displayHighScorePosition("Aadi", highscorePosition);
//
//        highscorePosition = calculateHighScorePosition(1000);
//        displayHighScorePosition("Aadi", highscorePosition);
//
//        highscorePosition = calculateHighScorePosition(500);
//        displayHighScorePosition("Aadi", highscorePosition);
//
//        highscorePosition = calculateHighScorePosition(100);
//        displayHighScorePosition("Aadi", highscorePosition);
//
//        highscorePosition = calculateHighScorePosition(25);
//        displayHighScorePosition("Aadi", highscorePosition);

        System.out.println(convertToCentimeters(69));
        System.out.println(convertToCentimeters(5, 9));
        System.out.println(getDurationString(3945));
    }

    public static void displayHighScorePosition(String name, int position) {
        System.out.println(name + " managed to get into position " + position + " on the high score list");
    }

    public static int calculateHighScorePosition(int score) {
        if (score >= 1000) {
            return 1;
        } else if (score >= 500) {
            return 2;
        } else if (score >= 100) {
            return 3;
        }

        return 4;
    }


    public static double convertToCentimeters(int inches) {
        return inches * 2.54;
    }

    public static double convertToCentimeters(int feet, int inches) {
        return convertToCentimeters(12 * feet + inches);
    }

    public static String getDurationString(int seconds) {
        return seconds >= 0 ? getDurationString(seconds / 60, seconds % 60) : "Invalid Value";
    }

    public static String getDurationString(int minutes, int seconds) {
        return (minutes >= 0 && (seconds >= 0 && seconds <= 59)) ? ((minutes / 60) + "h " + (minutes % 60) + "m " + seconds + "s") : "Invalid Value";
    }

    public static boolean isCatPlaying(boolean summer, int temperature) {
        return temperature >= 25 && ((summer && temperature <= 45) || (!summer && temperature <= 35));
    }
}