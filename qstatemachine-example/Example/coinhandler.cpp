#include "coinhandler.h"
#include "mainwindow.h"

coinhandler::coinhandler()
{
    credit_ = 0;
    change_ = 0;
    price_ = 0;
    coffeetype_ = 0;
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
