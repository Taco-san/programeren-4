#include "refillHandler.h"
#include "coinhandler.h"
#include "coffeeTypeHandler.h"

void RefillHandler::refillCoin5c(coinhandler &coins) {
    coins.addCoin5c(1);
}

void RefillHandler::refillCoin10c(coinhandler &coins) {
    coins.addCoin10c(1);
}

void RefillHandler::refillCoin20c(coinhandler &coins) {
    coins.addCoin20c(1);
}

void RefillHandler::refillCoin50c(coinhandler &coins) {
    coins.addCoin50c(1);
}

void RefillHandler::refillCoin100c(coinhandler &coins) {
    coins.addCoin100c(1);
}

void RefillHandler::refillCoffee(CoffeeTypeHandler &coffee) {
    coffee.addCoffee(1);
}

void RefillHandler::refillEspresso(CoffeeTypeHandler &coffee) {
    coffee.addEspresso(1);
}

void RefillHandler::refillCappuchino(CoffeeTypeHandler &coffee) {
    coffee.addCappuchino(1);
}