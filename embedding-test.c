#define Py_LIMITED_API 0x03020000
#include <stdlib.h>
#include <stdio.h>
#include <libguile.h>


int main(int argc, char *argv[]) {

  scm_init_guile();
  scm_c_eval_string("(display \"Hello, from Scheme!\n\")");

  return 0;
}
