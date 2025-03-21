//
//  MerkleMain.hpp
//  Merklerex
//
//  Created by Rajasuvedha Vivekanandan on 13/11/21.
//

#ifndef MerkleMain_hpp
#define MerkleMain_hpp

#include <stdio.h>

#pragma once

#include <vector>
#include "OrderBookEntry.hpp"
#include "OrderBook.hpp"
#include "Wallet.hpp"


class MerkleMain
{
    public:
        MerkleMain();
        /** Call this to start the sim */
        void init();
    
    private:
//        void loadOrderBook();
        void printMenu();
        void printHelp();
        void printMarketStats();
        void enterAsk();
        void enterBid();
        void printWallet();
        void gotoNextTimeframe();
        int getUserOption();
        void processUserOption(int userOption);
    
        std::string currentTime;

        OrderBook orderBook{"/Users/rajasuvedhavivekanandan/Desktop/Merklerex/Merklerex/20200601.csv"};
//        OrderBook orderBook{"/Users/rajasuvedhavivekanandan/Desktop/Merklerex/Merklerex/20200317.csv"};
        
        Wallet wallet;
    
        
    
};



#endif /* MerkleMain_hpp */
