


/* Name: Mohammad Moin Uddin MOIN
Roll:2107111*/



#include <iostream>
using namespace std;

class Vegetables
{
    int i;
    string veg_name[3] = {"Tomato", "Potato", "Onion"};
    float veg_price[3];

public:
    Vegetables()
    {
        this->veg_price[0] = 20;
        this->veg_price[1] = 30;
        this->veg_price[2] = 40;
    }
    Vegetables(int i, int t)
    {
        this->veg_price[i] = t;
    }

    float getVal(int n)
    {
        return veg_price[n];
    }

    string getName(int n)
    {
        return veg_name[n];
    }
};

class Meat
{
    int i;
    string meat_name[3] = {"Beaf", "Mutton", "Chicken"};
    float meat_price[3];

public:
    Meat()
    {
        this->meat_price[0] = 500;
        this->meat_price[1] = 1000;
        this->meat_price[2] = 200;
    }
    Meat(int i, int t)
    {
        this->meat_price[i] = t;
    }

    float getVal(int n)
    {
        return meat_price[n];
    }

    string getName(int n)
    {
        return meat_name[n];
    }
};

class Liquid
{
    int i;
    string liquid_name[3] = {"Oil", "Cocacola", "Mojo"};
    float liquid_price[3];

public:
    Liquid()
    {
        this->liquid_price[0] = 200; // price[0];
        this->liquid_price[1] = 30; // price[2];
        this->liquid_price[2] = 40;
    }
    Liquid(int i, int t)
    {
        this->liquid_price[i] = t;
    }

    float getVal(int n)
    {
        return liquid_price[n];
    }

    string getName(int n)
    {
        return liquid_name[n];
    }
};

class Manager
{
    string pass = "12345";

public:
    bool matchPass(string *str)
    {
        if (*str == pass)
            return true;
        return false;
    }
    friend Vegetables;
    friend Meat;
    friend Liquid;
};

class Shop
{
public:
    Vegetables veg;
    Meat meat;
    Liquid lq;
    Manager mn;
    Shop() {}
    void setVeg(int index, int n)
    {
        veg = Vegetables(index, n);
    }
    void setMeat(int index, int n)
    {
        meat = Meat(index, n);
    }
    void setLiq(int index, int n)
    {
        lq = Liquid(index, n);
    }
};

void loop(Shop &o)
{
    int x, y;
    do
    {
        int choice;
        system("cls");
        cout << "1.Are you a coustomer?\n";
        cout << "2.Are you a Manager?\n";
        cout << "0.Exit\n";
        cout << "Tell me your identtity: ";
        cin >> x;

        /// Vegetables
        if (x == 1)
        {
            cout << "Sir, we have different types of items. These are given below:\n";
            cout << "1. Vegetables\n";
            cout << "2. Meat\n";
            cout << "3. Liquid items\n";
            cout << "Please, sir, make your choice from 1, 2, 3 : ";
            cin >> y;

            if (y == 1)
            {
                cout << "We have the following vegetables  :\n";
                cout << "1. Tomato\n";
                cout << "2. Potato\n";
                cout << "3. Onion\n";

                int choice;
                cout << "Please, select a vegetable from above (1, 2, 3): ";
                cin >> choice;

                if (choice >= 1 && choice <= 3)
                {
                    int qnt;
                    cout << "Enter the quantity of you want to buy: ";
                    cin >> qnt;

                    cout << "You have selected " << o.veg.getName(choice - 1) << " units of " << qnt << " at tk " << o.veg.getVal(choice - 1) << " per KG.\n";
                    cout << "Total cost for " << o.veg.getName(choice - 1) << " = " << o.veg.getVal(choice - 1) * qnt << endl;
                }
                else
                {
                    cout << "Invalid vegetable choice.\n";
                }
                getchar();
                getchar();
            }

            /// Meats

            else if (y == 2)
            {
                cout << "We have the following meat iteams:\n";
                cout << "1. Beaf\n";
                cout << "2. Mutton\n";
                cout << "3. Chicken\n";

                int choice;
                cout << "Please, select a type of Meat from above (1, 2, 3): ";
                cin >> choice;

                if (choice >= 1 && choice <= 3)
                {
                    int qnt;
                    cout << "Enter the quantity of you want to buy (in KG) : ";
                    cin >> qnt;

                    cout << "You have selected " << o.meat.getName(choice - 1) << " units of " << qnt << " at tk " << o.meat.getVal(choice - 1) << " per KG.\n";
                    cout << "Total cost for " << o.meat.getName(choice - 1) << " = " << o.meat.getVal(choice - 1) * qnt << endl;
                }
                else
                {
                    cout << "Invalid Meat choice.\n";
                }
                getchar();
                getchar();
            }

            /// Liquids

            else if (y == 3)
            {
                cout << "We have the following item:\n";
                cout << "1. Oil\n";
                cout << "2. Cocacola\n";
                cout << "3. Mojo\n";

                int choice;
                cout << "Please, select a type of Item from above (1, 2, 3): ";
                cin >> choice;

                if (choice >= 1 && choice <= 3)
                {
                    int qnt;
                    cout << "Enter the quantity of you want to buy (in Liter) : ";
                    cin >> qnt;

                    cout << "You have selected " << o.lq.getName(choice - 1) << " units of " << qnt << " at tk " << o.lq.getVal(choice - 1) << " per Liter.\n";
                    cout << "Total cost for " << o.lq.getName(choice - 1) << " = " << o.lq.getVal(choice - 1) * qnt << endl;
                }
                else
                {
                    cout << "Invalid item choice.\n";
                }
                getchar();
                getchar();
            }
        }

        else if (x == 2)
        {
            string str;
            cout << "please sir give your passward\n";
            cin >> str;
            if (o.mn.matchPass(&str))
            {
                cout << "--------Set Price---------\n\n";
                cout << "1. Vegetables\n";
                cout << "2. Meat\n";
                cout << "3. Liquid items\n";
                cout << "Please, sir, make your choice from 1, 2, 3 : ";
                cin >> y;

                if (y == 1)
                {
                    cout << "\n1. Tomato\n";
                    cout << "2. Potato\n";
                    cout << "3. Onion\n";

                    int choice;
                    cout << "Select a vegetable from above (1, 2, 3): ";
                    cin >> choice;
                    if (choice >= 1 && choice <= 3)
                    {
                        cout << "Enter New Price: ";
                        int tk;
                        cin >> tk;
                        o.setVeg(choice-1,tk);
                        cout<<"Price is updated successfully\n\n";
                    }

                    else
                    {
                        cout << "Invalid vegetable choice.\n";
                    }
                }

                /// Meats

                else if (y == 2)
                {
                    cout << "\n1. Beaf\n";
                    cout << "2. Mutton\n";
                    cout << "3. Chicken\n";

                    int choice;
                    cout << "Select a type of Meat from above (1, 2, 3): ";
                    cin >> choice;

                    if (choice >= 1 && choice <= 3)
                    {
                        cout << "Enter New Price: ";
                        int tk;
                        cin >> tk;
                        o.setMeat(choice-1,tk);
                        cout<<"Price is updated successfully\n\n";
                    }
                    else
                    {
                        cout << "Invalid Meat choice.\n";
                    }
                }

                /// Liquids

                else if (y == 3)
                {
                    cout << "\n1. Oil\n";
                    cout << "2. Cocacola\n";
                    cout << "3. Mojo\n";

                    int choice;
                    cout << "Select a type of Item from above (1, 2, 3): ";
                    cin >> choice;

                    if (choice >= 1 && choice <= 3)
                    {
                        cout << "Enter New Price: ";
                        int tk;
                        cin >> tk;
                        o.setLiq(choice-1,tk);
                        cout<<"Price is updated successfully\n\n";
                    }
                    else
                    {
                        cout << "Invalid item choice.\n";
                    }
                }
            }
            else
                cout << "\nWrong Password\n";
            /// Manager///

            getchar();
            getchar();
        }

        else if (x == 0)
        {
            cout << "\nThank You.\nCome Again\n";
        }
        else
        {
            cout << "invalid choice ";
        }
    } while (x);
}
int main()
{
    Shop sp;
    loop(sp);
    return 0;
}
