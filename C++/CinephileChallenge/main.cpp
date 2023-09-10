#include <iostream>
#include "Movies.h"

using namespace std;

void display_movies(Movies movies);

int main() {
    Movies jim_movies;

    cout << boolalpha;
    cout << jim_movies.add_movie({"The Dark Knight", "PG-13", 15}) << endl;
    cout << jim_movies.add_movie({"The Dark Knight", "PG-13", 16}) << endl;
    cout << jim_movies.add_movie({"Oppenheimer", "R"}) << endl;
    cout << jim_movies.increment_watched_count("Oppenheimer") << endl;

    cout << jim_movies.get_movies_list().size() << endl;

    display_movies(jim_movies);

    return 0;
}

void display_movies(Movies movies){
    for (auto movie : movies.get_movies_list()) {
        cout << "Name: " << movie.get_name() << ", Age rating: " << movie.get_age_rating() << ", times watched: " << movie.get_watched() << endl;
    }
}