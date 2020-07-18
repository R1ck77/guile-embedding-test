#define Py_LIMITED_API 0x03020000
#include <stdlib.h>
#include <stdio.h>
#include <libguile.h>


int main(int argc, char *argv[]) {

  scm_init_guile();
  scm_c_eval_string("(define result \"Hello, from Scheme!\n\")");
  

  SCM symbol_name = scm_from_utf8_symbol("result");
  SCM result = scm_variable_ref(symbol_name);

  return 0;
}
