#include <stdio.h>

void grep_help(){
  printf("");

}

void main(int args, char ** argv){
  if(args < 2) {
    printf("Less or Invalid arguments, input '-h' or '--help' for more information.");
  }
  else {
    if (argv[1] == "-h"  or argv[1] == "--help") {
      grep_help();
      return;
    }
    
  }
}
