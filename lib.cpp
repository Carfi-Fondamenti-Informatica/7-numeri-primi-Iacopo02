#include "lib.h"

bool numero_primo(int a){
  
  bool output = true;
  
  for(int b=2; b<a; b++){
    int risultato = a % b;
    
    if(risultato == 0 && b<a){
      output = false;
      break;
    }
  }
  return output;
}
