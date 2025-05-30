#ifndef COINHANDLER_H
#define COINHANDLER_H

class coinhandler
{
public:
    coinhandler();

    int getCredit();
    void setCredit(int amount);
    void addCredit(int amount);

    int getPrice();
    void setPrice(int amount);

    int getChange();
    void setChange(int amount);
    int addChange(int amount);
    int substractChange(int amount);

    bool checkCredit(void);

    void setType(int amount);
    int getType();

    void addCoin5c(int amount);
    void addCoin10c(int amount);
    void addCoin20c(int amount);
    void addCoin50c(int amount);
    void addCoin100c(int amount);
    int getCoin5cCount();
    int getCoin10cCount();
    int getCoin20cCount();
    int getCoin50cCount();
    int getCoin100cCount();

private:
    int credit_;
    int change_;
    int price_;
    int coffeetype_;
    int coin5c_;
    int coin10c_;
    int coin20c_;
    int coin50c_;
    int coin100c_;
};

#endif // COINHANDLER_H
