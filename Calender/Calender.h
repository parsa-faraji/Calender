//
//  Calender.h
//  Calender
//
//  Created by Parsa Faraji on 12/21/24.
//

#ifndef Calender_h
#define Calender_h
#include <iostream>
using namespace std;

class Calender {
    
public:
    Calender(string type);
    
private:
    string type;
    string getType();
    void setType(string type);
    
};



#endif /* Calender_h */
