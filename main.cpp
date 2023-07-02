// For standard C out and C in
#include <iostream> 
// For string
#include <string>
// For vector library - vector is a growable array of a specific type of things. EG string or doubl, can't mix
// https://www.youtube.com/watch?v=SGyutdso6_c
#include <vector>
#include "OrderBookEntry.h"
#include "MerkelMain.h"

// /** Menu and Options*/
// void printMenu();
// int getUserOption();

// /** Market functions*/
// void printHelp();
// void printMarketStats();
// void makeOffer();
// void makeBid();
// void viewWallet();
// void continueNextFrame();

int main()
{
    MerkelMain app{};
    app.init();

    std::vector <OrderBookEntry> orderList;
    orderList.push_back(  OrderBookEntry {
                          10000,
                          0.00020075,
                          "2020/03/17 17:01:24.884492",
                          "BTC/USDT", 
                          OrderBookType::bid});

    orderList.push_back(  OrderBookEntry {
                          2000,
                          0.00020075,
                          "2020/03/17 17:01:24.884492",
                          "BTC/USDT", 
                          OrderBookType::ask});

    // ** Traverse the orderList vector with the newly created object of OrderBookEntry called "order" 
    // A new object are to be created each time
    for (OrderBookEntry order : orderList) {
        std::cout << order.price << ",";
        std::cout << order.amount << ",";
        std::cout << order.timestamp << ",";
        std::cout << order.product << ",";
        std::cout << order.orderTypeString << std::endl;
    };

    return 0;
}

