#include "System.h"

void Main() {
    string ss="Give me you name ? ";
    Console_BackgroundColor(Yellow);
    Console_ForegroundColor(Black);
    Console_Clear();
    Console_WriteLine(ss);
    String s=Console_ReadLine()  ;
    Console_WriteLine(s);    
    free(s);    
        
    
}