#include <iostream>
#include "Drink.h"
#include "Wine.h"
#include "White.h"
#include "Red.h"
#include "Beer.h"
const unsigned int SHELF_SIZE = 11;
const unsigned int LIST_OPTIONS = 0;
const unsigned int HOW_PREPERED = 99;
const unsigned int LEAVE_BAR = 100;

#define IS_DRINK(a) ((a)!=100 && (a)!=99)
#define  IS_CHOICE_VALID(a) (((a)>=0&&(a)<SHELF_SIZE)||((a)==99||(a)==100))

//doing the barman work
void barman( Drink*[SHELF_SIZE]);

//print list of options
void listOp(Drink*[SHELF_SIZE]);

int main() {

    Drink *stock[SHELF_SIZE];
    stock[0] = new Beer("Goldstar");
    stock[1] = new Beer("Heineken");
    stock[2] = new Beer("Maccabi");
    stock[3] = new Beer("Tuborg");
    stock[4] = new White("Carmel Emerald Riesling", 1986);
    stock[5] = new White("Golan Smadar", 1989);
    stock[6] = new White("Jordan Chardonnay", 1997);
    stock[7] = new Red("chianti", 1997);
    stock[8] = new Red("Mount Hermon red Jordan", 1994);
    stock[9] = new Red("Jordan Cabernet Sauvignon", 1997);
    stock[10] = new Red("Chdeau Margot", 1997);

    barman(stock);




    delete[] stock;

    return 0;
}

void barman( Drink* stock[SHELF_SIZE])
{
    int choice;
    int last = 0;

    do {
        cout << "What can I get you? (0- list option)" << endl;
        cin >> choice;
        if (cin.fail()) // if not an int
        {
            choice = -1;
        }
        cin.clear(); //clear the cin error flag
        cin.ignore(INT_MAX,'\n'); // next time cin will start from new line

        if(IS_CHOICE_VALID(choice))
        {
            if (choice == LIST_OPTIONS) {
                listOp(stock);
                continue;
            }
            if (choice == HOW_PREPERED) {
                if (last == 0)
                    cout << "You Haven't order yet" << endl;
                else {
                    cout << "You ordered " << stock[last]->getName() << endl;
                    stock[last]->prepare();
                }
                continue;
            }
            if (choice == LEAVE_BAR) {
                cout << "Bar is closed. Good night." << endl;
                continue;
            }
            if(IS_DRINK(choice))
            {
                last = choice;
                cout << "One "<<stock[last]->getName()<< " coming up."<<endl;
                continue;
            }

        }
        else
            cout << "Not valid option"<< endl;



    }while(choice!=100);


}

void listOp(Drink* stock[SHELF_SIZE]) {
    int choice;
    for (int i = 0; i < SHELF_SIZE; i++)
        cout << '(' << i << ')' << stock[i]->getName() << endl;
    cout << "(99) How did you prepare my last drink?" << endl << "(100) Leave the bar " << endl;

}