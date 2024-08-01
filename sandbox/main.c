#include <libVzl/Types.h>
#include <stdio.h>

int main(/*int argc, char *argv[]*/){
  printf("Hello from sandbox\n");

  int const val = 12;

  vzl_typeResultInt const r = vzl_wrapValueInt(true, val, vzl_errorNull);

  if(vzl_unwrapSuccessInt(&r)){
    printf("Result: %d\n", vzl_unwrapValueInt(&r));
  } else {
    printf("Error: %d\n", vzl_unwrapErrorInt(&r));
  }

  return 0;
}
