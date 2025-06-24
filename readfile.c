#include "System.h"

int main() {
    String s=File_ReadAllText("out.txt")  ;
    Console_BackgroundColor(Yellow);
    Console_ForegroundColor(Black);
    Console_WriteLine(s);    
    free(s);   
        
    return 0;
}