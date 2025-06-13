#include "coffeeTypeHandler.h"

void CoffeeTypeHandler::setCappuchinoCount(int amount)
{
    cappuchino_ = amount;
}

void CoffeeTypeHandler::setEspressoCount(int amount)
{
    espresso_ = amount;
}

void CoffeeTypeHandler::setCoffeeCount(int amount)
{
    coffee_ = amount;
}

void CoffeeTypeHandler::addCappuchino(int amount)
{
    cappuchino_ += amount;
}

void CoffeeTypeHandler::addEspresso(int amount)
{
    espresso_ += amount;
}

void CoffeeTypeHandler::addCoffee(int amount)
{
    coffee_ += amount;
}

void CoffeeTypeHandler::removeCappuchino(int amount)
{
    cappuchino_ -= amount;
    if (cappuchino_ < 0) cappuchino_ = 0;
}

void CoffeeTypeHandler::removeEspresso(int amount)
{
    espresso_ -= amount;
    if (espresso_ < 0) espresso_ = 0;
}

void CoffeeTypeHandler::removeCoffee(int amount)
{
    coffee_ -= amount;
    if (coffee_ < 0) coffee_ = 0;
}

int CoffeeTypeHandler::getCappuchinoCount() const
{
    return cappuchino_;
}

int CoffeeTypeHandler::getEspressoCount() const
{
    return espresso_;
}

int CoffeeTypeHandler::getCoffeeCount() const
{
    return coffee_;
}