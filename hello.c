  
  #include <stdio.h>
  #include <time.h>

  int main(void) {
    fprintf(stdout, "%s%d\n", "Timestamp: ", (int)time(NULL));
    return 0;
  }


