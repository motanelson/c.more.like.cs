#include "System.h"

void Main() {
    int i=0;
    Console_BackgroundColor(Yellow);
    Console_ForegroundColor(Black);
    Console_Clear();
    for(i=0;i<16;i++){
        Console_SetCursorPosition(i,i+1);
        Console_Write(ToString(i));    
    }
        
}