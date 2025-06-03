#include "coinhandler.h"
#include "mainwindow.h"

coinhandler::coinhandler()
{
    credit_ = 0;
    change_ = 0;
    price_ = 0;
    coffeetype_ = 0;
    coin5c_ = 0;
    coin10c_ = 0;
    coin20c_ = 0;
    coin50c_ = 0;
    coin100c_ = 0;
}

int coinhandler::getCredit() const
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

int coinhandler::getPrice() const
{
    return price_;
}

void coinhandler::setPrice(int amount)
{
    price_ = amount;
}

int coinhandler::getChange() const
{

    int tempChange = credit_ - price_;
    if (tempChange < 0) {
        tempChange = 0; // Ensure change is not negative
    }
    return tempChange;
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

int coinhandler::getType() const
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

int coinhandler::getCoin5cCount() const
{
    return coin5c_;
}
int coinhandler::getCoin10cCount() const
{
    return coin10c_;
}
int coinhandler::getCoin20cCount() const
{
    return coin20c_;
}
int coinhandler::getCoin50cCount() const
{
    return coin50c_;
}
int coinhandler::getCoin100cCount() const
{
    return coin100c_;
}

void coinhandler::setCoin5cCount(int amount)
{
    coin5c_ = amount;
}

void coinhandler::setCoin10cCount(int amount)
{
    coin10c_ = amount;
}

void coinhandler::setCoin20cCount(int amount)
{
    coin20c_ = amount;
}

void coinhandler::setCoin50cCount(int amount)
{
    coin50c_ = amount;
}

void coinhandler::setCoin100cCount(int amount)
{
    coin100c_ = amount;
}
