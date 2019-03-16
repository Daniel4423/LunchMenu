/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Dan
 *
 * Created on March 16, 2019, 11:05 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {

    string lunchMenu[4];
    double prices[4];
    int lunchChoice;
    int qty;
    double totalCost;
    int choiceIndex;
    char playAgain;
    
    
    lunchMenu[0] = "Hot Dog";
    lunchMenu[1] = "Hamburger";
    lunchMenu[2] = "Nacho plate";
    lunchMenu[3] = "Salad";
    
    prices[0] = 2.00;
    prices[1] = 3.50;
    prices[2] = 4.00;
    prices[3] = 5.00;
    
    for (int i=0; i < 4; i++) {   
        cout << i+1 << ". " << lunchMenu[i] << "\t\t" << fixed << setprecision(2) << prices[i] << endl;
    }
    cout << "Enter your food choice (1-4). Enter 5 to quit." << endl;
        cin >> lunchChoice;
    
    while (lunchChoice < 5) { 
       
        cout << "Enter quantity desired" << endl;
        cin >> qty;
    
        choiceIndex = lunchChoice - 1;
        totalCost = prices[choiceIndex] * qty;
    
        cout << "You'll be eating " << lunchMenu[choiceIndex] <<"s for lunch. " <<
            "The total price for " << qty << " of them is $" <<fixed << setprecision(2) << totalCost <<"." << endl;
        
        cout << "What else would you like? (1-4) Enter 5 to quit." << endl;
        cin >> lunchChoice;
        
    } 
                
    
    return 0;
}

