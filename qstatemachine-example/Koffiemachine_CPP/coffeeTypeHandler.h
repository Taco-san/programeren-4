#ifndef COFFEETYPEHANDLER_H
#define COFFEETYPEHANDLER_H

class CoffeeTypeHandler {
private:
    int cappuchino_;
    int espresso_;
    int coffee_;

public:
    void setCappuchinoCount(int amount);
    void setEspressoCount(int amount);
    void setCoffeeCount(int amount);

    void addCappuchino(int amount);
    void addEspresso(int amount);
    void addCoffee(int amount);

    void removeCappuchino(int amount);
    void removeEspresso(int amount);
    void removeCoffee(int amount);

    int getCappuchinoCount() const;
    int getEspressoCount() const;
    int getCoffeeCount() const;
};

#endif // COFFEETYPEHANDLER_H
