#ifndef COINHANDLER_H
#define COINHANDLER_H

class coinhandler
{
public:
    coinhandler();

    int getCredit() const;
    void setCredit(int amount);
    void addCredit(int amount);

    int getPrice() const;
    void setPrice(int amount);

    int getChange() const;
    void setChange(int amount);
    int addChange(int amount);
    int substractChange(int amount);

    bool checkCredit(void);

    void setType(int amount);
    int getType() const;

    void addCoin5c(int amount);
    void addCoin10c(int amount);
    void addCoin20c(int amount);
    void addCoin50c(int amount);
    void addCoin100c(int amount);
    int getCoin5cCount() const;
    int getCoin10cCount() const;
    int getCoin20cCount() const;
    int getCoin50cCount() const;
    int getCoin100cCount() const;
    void setCoin5cCount(int amount);
    void setCoin10cCount(int amount);
    void setCoin20cCount(int amount);
    void setCoin50cCount(int amount);
    void setCoin100cCount(int amount);

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
