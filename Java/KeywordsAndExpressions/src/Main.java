public class Main {

    public static void main(String[] args) {
        boolean gameOver = true;
        int score = 800, levelCompleted = 5, bonus = 100, finalScore = score;

        if (gameOver) {
            finalScore += (levelCompleted * bonus);
            System.out.println("Your final score was: " + finalScore);
        }

        score = 10_000;
        levelCompleted = 8;
        bonus = 200;
        if (gameOver) {
            finalScore = score + (levelCompleted * bonus);
            System.out.println("Your new final score was: " + finalScore);
        }
    }

}