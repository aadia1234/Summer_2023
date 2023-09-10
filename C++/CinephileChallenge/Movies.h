#include <vector>
#include "Movie.h"
#pragma once

class Movies {
    private:
        std::vector<Movie> movies_list;

    public:
        Movies();

        bool add_movie(Movie movie);
        bool increment_watched_count(std::string movie_name);
        std::vector<Movie> get_movies_list();
};