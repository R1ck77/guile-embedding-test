#define Py_LIMITED_API 0x03020000
#include <stdlib.h>
#include <stdio.h>
#include <libguile.h>


int main(int argc, char *argv[]) {
  
  scm_init_guile();

  SCM converted = scm_from_utf8_string("Hello, from Scheme. Sort of.");
  scm_gc();
  char *result = scm_to_utf8_string(converted);

  fprintf(stderr, "The result is: '%s'\n", result);
  
  return 0;
}
