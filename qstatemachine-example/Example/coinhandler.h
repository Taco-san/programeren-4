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

private:
    int credit_;
    int change_;
    int price_;
};

#endif // COINHANDLER_H
