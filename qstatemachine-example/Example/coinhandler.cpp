#include "coinhandler.h"
#include "mainwindow.h"

coinhandler::coinhandler()
{
    credit_ = 0;
    change_ = 0;
    price_ = 0;
    coffeetype_ = 0;
    coin5c_ = 5;
    coin10c_ = 5;
    coin20c_ = 5;
    coin50c_ = 5;
    coin100c_ = 5;
}

int coinhandler::getCredit()
{
    return credit_;
}

void coinhandler::setCredit(int amount)
{
    credit_ = amount;
}

void coinhandler::addCredit(int amount)
{
    credit_ = credit_ + amount;
}

int coinhandler::getPrice()
{
    return price_;
}

void coinhandler::setPrice(int amount)
{
    price_ = amount;
}

int coinhandler::getChange()
{

    change_ = credit_ - price_;
    if (change_ < 0) {
        change_ = 0; // Ensure change is not negative
    }
    return change_;
}

void coinhandler::setChange(int amount)
{
    change_ = amount;
}

int coinhandler::addChange(int amount)
{
    change_ = change_ + amount;
    return change_;
}

int coinhandler::substractChange(int amount)
{
    change_ = change_ - amount;
    return change_;
}

bool coinhandler::checkCredit(void)
{
    if (credit_ - price_ < 0) return false;
    return true;
}

void coinhandler::setType(int amount)
{
    coffeetype_ = amount;
}

int coinhandler::getType()
{
    return coffeetype_;
}

void coinhandler::addCoin5c(int amount)
{
    coin5c_ += amount;
}

void coinhandler::addCoin10c(int amount)
{
    coin10c_ += amount;
}

void coinhandler::addCoin20c(int amount)
{
    coin20c_ += amount;
}

void coinhandler::addCoin50c(int amount)
{
    coin50c_ += amount;
}

void coinhandler::addCoin100c(int amount)
{
    coin100c_ += amount;
}

int coinhandler::getCoin5cCount()
{
    return coin5c_;
}
int coinhandler::getCoin10cCount()
{
    return coin10c_;
}
int coinhandler::getCoin20cCount()
{
    return coin20c_;
}
int coinhandler::getCoin50cCount()
{
    return coin50c_;
}
int coinhandler::getCoin100cCount()
{
    return coin100c_;
}
