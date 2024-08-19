#include "Utils.hpp"

// Get a random doubleing point number in the range [min, max)
long double Utils::getRandomDouble(long double min, long double max){
    std::random_device rd;
    std::mt19937 gen(rd()); 
    std::uniform_real_distribution<long double> distrib(min, max);
    long double randomdouble = distrib(gen);
    return randomdouble;
}

// Get a random color from the list of available colorsß
const sf::Color& Utils::getRandomColor(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, colors.size() - 1);
    const sf::Color& randomColor = colors[dis(gen)];
    return randomColor;
}
