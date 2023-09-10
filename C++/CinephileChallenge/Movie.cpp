#include <string>
#include "Movie.h"

Movie::Movie(std::string name, std::string age_rating, int watched): name {name}, age_rating {age_rating}, watched {watched} {}

void Movie::set_name(std::string name) { this->name = name; }

void Movie::set_age_rating(std::string age_rating) { this->age_rating = age_rating; }

void Movie::set_watched(int watched) { this->watched = watched; }

std::string Movie::get_name() const { return this->name; }

std::string Movie::get_age_rating() const { return this->age_rating; }

int Movie::get_watched() const { return this->watched; }