#include "System.h"

int main() {
    String s="hello world"  ;
    Console_BackgroundColor(Yellow);
    Console_ForegroundColor(Black);
    Console_WriteLine(s);    
    File_WriteAllText("outs.txt",s);   
        
    return 0;
}