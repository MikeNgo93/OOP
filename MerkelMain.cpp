#include "MerkelMain.h"
#include <iostream>

MerkelMain::MerkelMain(){

}

void MerkelMain::printMenu()
{   
    std::cout << "**********************" << std::endl;

    // 1. print help
    std::cout << "1. Print help" << std::endl;

    // 2. print exchange stats
    std::cout << "2. Print exchange stats" << std::endl;

    // 3. make an offer (to sell)
    std::cout << "3. Make an offer [selling]" << std::endl;

    // 4. make a bid (to buy)
    std::cout << "4. Make a bid [buying]" << std::endl;

    // 5. print wallet assets
    std::cout << "5. View my wallet" << std::endl;

    // 6. Continue (next step)
    std::cout << "6. continue" << std::endl;   
};

void MerkelMain::printHelp()
{
    std::cout << "Your goal is to make money" << std::endl;
}

void MerkelMain::printMarketStats()
{
    std::cout << "Market are as follows: " << std::endl;
}

void MerkelMain::makeOffer()
{
    std::cout << "Make an offer - enter the amount" << std::endl;
}

void MerkelMain::makeBid()
{
    std::cout << "Make a bid - enter the amount" << std::endl;
}

void MerkelMain::viewWallet()
{
    std::cout << "Your wallet:" << std::endl;
}

void MerkelMain::continueNextFrame()
{
    std::cout << "Continue to the next time frame" << std::endl;
}

int MerkelMain::getUserOption()
{
    // Select an option
    std::cout << "=====================" << std::endl;
    std::cout << "SELECT AN OPTION (1-6)" << std::endl;

    int userOption;
    std::cin >> userOption;
    std::cout << "You chose: " << userOption << std::endl;
    return userOption;
}

void MerkelMain::processUserOption(int userOption)
{
    switch (userOption){
    default:
        std::cout << "invalid choice. Pls choose 1-6" << std::endl;
        break;
    case 1:
        printHelp();
        break;
    case 2:
        printMarketStats();
        break;
    case 3: 
        makeOffer();
        break;
    case 4:
        makeBid();
        break;
    case 5:
        viewWallet();
        break;
    case 6:
        continueNextFrame();
        break; 
    };
    std::cout << "=====================" << std::endl;
}

void MerkelMain::init()
{
    int userOption;
    while (true){
        printMenu();
        userOption = getUserOption();
        processUserOption(userOption);
    } 
};


