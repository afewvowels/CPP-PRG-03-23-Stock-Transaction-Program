//
//  main.cpp
//  PRG-3-23-Stock-Transaction-Program
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float const FLT_STOCK_TOTAL_NUMBER = 1000.0f,
                FLT_STOCK_INITIAL_PRICE = 45.50f,
                FLT_STOCK_FINAL_PRICE = 56.90f,
                FLT_COMMISSION = 0.02f;
    
    float fltJoeStockInitial,
          fltJoeStockFinal,
          fltJoeStockInitialLessCommission,
          fltJoeStockFinalLessCommission,
          fltBrokerInitial,
          fltBrokerFinal,
          fltJoeStockProfit;
    
    fltJoeStockInitial = FLT_STOCK_INITIAL_PRICE * FLT_STOCK_TOTAL_NUMBER;
    fltBrokerInitial = fltJoeStockInitial * FLT_COMMISSION;
    
    fltJoeStockFinal = FLT_STOCK_FINAL_PRICE * FLT_STOCK_TOTAL_NUMBER;
    fltBrokerFinal= fltJoeStockFinal * FLT_COMMISSION;
    
    fltJoeStockInitialLessCommission = fltJoeStockInitial + fltBrokerInitial;
    fltJoeStockFinalLessCommission = fltJoeStockFinal - fltBrokerFinal;
    
    fltJoeStockProfit = fltJoeStockFinalLessCommission - fltJoeStockInitialLessCommission;
    
    cout << setprecision(2) << fixed << showpoint;
    
    cout << "$" << setw(10) << fltJoeStockInitialLessCommission << endl;
    cout << "$" << setw(10) <<  fltJoeStockFinalLessCommission << endl;
    cout << "$" << setw(10) <<  fltJoeStockProfit << endl;
    
    return 0;
}



