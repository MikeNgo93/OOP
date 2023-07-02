#include "OrderBookEntry.h"
// cpp file is for implementation, so we can actually make it work, 
// henze the assignment of variables and the implementation ( constructor {} ) part

OrderBookEntry::OrderBookEntry(
            double _price,
            double _amount,
            std::string _timestamp,
            std::string _product,
            OrderBookType _orderType
            ): price(_price), amount(_amount), timestamp(_timestamp), product(_product), orderType(_orderType) 
        {   
            // Get OrderBookType as a string instead of a class so we can print out
            this->orderTypeString = getOrderTypeString(_orderType);
        }

std::string OrderBookEntry::getOrderTypeString(OrderBookType type){
        switch (type)
            {   
                case OrderBookType::bid:
                    return "bid";
                case OrderBookType::ask:
                    return "ask";
                default:
                    return "unknown";
            }
}