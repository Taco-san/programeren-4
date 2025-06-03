#ifndef SAVINGHANDLER_H
#define SAVINGHANDLER_H

#include <QString>

class coinhandler;
class CoffeeTypeHandler;

class savingHandler
{
public:
    // Save coin and coffee data to file
    static bool saveData(const coinhandler& coins, const CoffeeTypeHandler& coffee, const QString& filename);
    // Load coin and coffee data from file
    static bool loadData(coinhandler& coins, CoffeeTypeHandler& coffee, const QString& filename);
};

#endif // SAVINGHANDLER_H
