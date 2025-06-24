#include "System.h"

int main() {
    String s="Hello World..."  ;
    Console_BackgroundColor(Yellow);
    Console_ForegroundColor(Black);
    Console_WriteLine(s);    
    Console_Beep();    
        
    return 0;
}