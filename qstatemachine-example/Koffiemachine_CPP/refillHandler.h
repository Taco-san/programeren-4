#ifndef REFILLHANDLER_H
#define REFILLHANDLER_H

class coinhandler;
class CoffeeTypeHandler;

class RefillHandler
{
public:
    void refillCoin5c(coinhandler &coins);
    void refillCoin10c(coinhandler &coins);
    void refillCoin20c(coinhandler &coins);
    void refillCoin50c(coinhandler &coins);
    void refillCoin100c(coinhandler &coins);

    void refillCoffee(CoffeeTypeHandler &coffee);
    void refillEspresso(CoffeeTypeHandler &coffee);
    void refillCappuchino(CoffeeTypeHandler &coffee);
};

#endif // REFILLHANDLER_H
