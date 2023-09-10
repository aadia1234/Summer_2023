#include <string>
#pragma once

class Movie {
    friend class Movies;

    private:
        std::string name;
        std::string age_rating;
        int watched;

    public:
        Movie(std::string name = "UNKNOWN", std::string age_rating = "PG-13", int watched = 0);

        void set_name(std::string name);
        void set_age_rating(std::string age_rating);
        void set_watched(int watched);
        std::string get_name() const;
        std::string get_age_rating() const;
        int get_watched() const;
};