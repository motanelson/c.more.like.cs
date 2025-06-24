#include "System.h"

int main() {
    string ss="Press a key to exit ? ";
    Console_BackgroundColor(Yellow);
    Console_ForegroundColor(Black);
    Console_Clear();
    Console_WriteLine(ss);
    int i=Console_Read()  ;
    Console_WriteLine(ToString(i));    
        
        
    return 0;
}