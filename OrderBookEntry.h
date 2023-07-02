#include <iostream>
// Header file is for specification, so we can understand roughly how one class works

enum class OrderBookType {bid, ask};

// Class is another data type, a very specific data type where you can decide its structure
class OrderBookEntry
{
    public:
        OrderBookEntry(
            double _price,
            double _amount,
            std::string _timestamp,
            std::string _product,
            OrderBookType _orderType
            );
        
        double price;
        double amount;
        std::string timestamp;
        std::string product;
        OrderBookType orderType;
        std::string orderTypeString;
        std::string getOrderTypeString(OrderBookType type);
};