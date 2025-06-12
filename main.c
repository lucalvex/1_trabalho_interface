#include <stdio.h>
#include "pocketpy.h"
#include "levenshtein.h"

static bool cal_distance(int argc, py_Ref argv) {
  PY_CHECK_ARGC(2);
  PY_CHECK_ARG_TYPE(0, tp_str);
  PY_CHECK_ARG_TYPE(1, tp_str);
  const char *p1 = py_tostr(py_arg(0));
  const char *p2 = py_tostr(py_arg(1));
  py_newint(py_retval(), levenshtein(p1, p2));
  return true;
}

int main() {

  FILE *file;

  char script[10000];
  char diretorio[] = "/mnt/c/Users/lucax/Desktop/1_trabalho/script.py";
  file = fopen(diretorio, "rb");

  if (file == NULL) {
    fprintf(stderr, "\033[1;31m[ERRO]\033[0m Falha ao abrir o arquivo.\n");
    return 1;
  }

  // Initialize pocketpy
  py_initialize();

  size_t bytesRead = fread(script, 1, sizeof(script) - 1, file);
  script[bytesRead] = '\0';
  fprintf(stderr, "\033[1;32mArquivo aberto com sucesso!\033[0m\n");

  py_GlobalRef mod = py_getmodule("__main__");
  py_bindfunc(mod, "cal_distance", cal_distance);

  if (!py_exec(script, "", EXEC_MODE, NULL)) {
    py_printexc();
    goto finalize;
  }

  finalize:
  py_finalize();
  return 0;
}
