#include "System.h"

int main() {
    String s=DataTime_Now_ToString()  ;
    Console_BackgroundColor(Yellow);
    Console_ForegroundColor(Black);
    Console_WriteLine(s);    
        
        
    return 0;
}