#include "System.h"

void Main() {
    String s=File_ReadAllText("out.txt")  ;
    Console_BackgroundColor(Yellow);
    Console_ForegroundColor(Black);
    Console_WriteLine(s);    
    free(s);   
        
    
}