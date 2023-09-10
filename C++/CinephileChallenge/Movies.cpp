#include <vector>
#include "Movies.h"

Movies::Movies(): movies_list {std::vector<Movie>()} {}

bool Movies::add_movie(Movie movie) {
    for (auto m : this->movies_list) {
        if (!strcasecmp(m.name.c_str(), movie.name.c_str())) {
            return false;
        }
    }

    this->movies_list.push_back(movie);

    return true;
}

bool Movies::increment_watched_count(std::string movie_name) {
    for (auto& m : movies_list) {
        if (!strcasecmp(m.name.c_str(), movie_name.c_str())) {
            m.watched++;
            return true;
        }
    }

    return false;
}

std::vector<Movie> Movies::get_movies_list() { return this->movies_list; }