package Polymorphism;

import java.util.Scanner;

public class Main {
    public static Scanner scanner = new Scanner(System.in);
    
    public static void main(String[] args) {
        // Movie theMovie = Movie.getMovie("Comedy", "Star Wars");
        // theMovie.watchMovie();

        
        while (true) {
            String type, title;
            Movie theMovie;

            System.out.print("Enter Type (A for adventure, C for comedy, S for Science Fiction, or Q to quit): ");
            type = scanner.nextLine();
            
            if (type.toLowerCase().contains("q")) {
                break;
            }
            System.out.print("Enter movie title: ");
            title = scanner.nextLine();

           theMovie = Movie.getMovie(type, title);
           theMovie.watchMovie();
        }
    }

}

