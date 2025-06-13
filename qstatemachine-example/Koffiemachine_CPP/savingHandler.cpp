#include "savingHandler.h"
#include "coinhandler.h"
#include "coffeeTypeHandler.h"
#include <QFile>
#include <QTextStream>

bool savingHandler::saveData(const coinhandler& coins, const CoffeeTypeHandler& coffee, const QString& filename)
{
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return false;

    QTextStream out(&file);
    out << "coin5c " << coins.getCoin5cCount() << "\n";
    out << "coin10c " << coins.getCoin10cCount() << "\n";
    out << "coin20c " << coins.getCoin20cCount() << "\n";
    out << "coin50c " << coins.getCoin50cCount() << "\n";
    out << "coin100c " << coins.getCoin100cCount() << "\n";
    out << "coffee_cappuchino " << coffee.getCappuchinoCount() << "\n";
    out << "coffee_espresso " << coffee.getEspressoCount() << "\n";
    out << "coffee_coffee " << coffee.getCoffeeCount() << "\n";
    file.close();
    return true;
}

bool savingHandler::loadData(coinhandler& coins, CoffeeTypeHandler& coffee, const QString& filename)
{
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;

    QTextStream in(&file);
    QString label;
    int value;
    while (!in.atEnd()) {
        in >> label >> value;
        if (label == "coin5c") coins.setCoin5cCount(value);
        else if (label == "coin10c") coins.setCoin10cCount(value);
        else if (label == "coin20c") coins.setCoin20cCount(value);
        else if (label == "coin50c") coins.setCoin50cCount(value);
        else if (label == "coin100c") coins.setCoin100cCount(value);
        else if (label == "coffee_cappuchino") coffee.setCappuchinoCount(value);
        else if (label == "coffee_espresso") coffee.setEspressoCount(value);
        else if (label == "coffee_coffee") coffee.setCoffeeCount(value);
    }
    file.close();
    return true;
}