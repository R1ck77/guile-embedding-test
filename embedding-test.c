#define Py_LIMITED_API 0x03020000
#include <stdlib.h>
#include <stdio.h>
#include <libguile.h>


int main(int argc, char *argv[]) {

  scm_init_guile();
  scm_c_eval_string("(define result \"Hello, from Scheme!\n\")");
    
  SCM variable = scm_c_lookup("result");
  SCM referenced = scm_variable_ref(variable);
  char *cstring = scm_to_utf8_stringn(referenced, NULL);

  fprintf(stderr, "Guile contains: '%s'", cstring);


  return 0;
}
