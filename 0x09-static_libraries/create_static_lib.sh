
#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
gcc -c *.c
ar rc liball.a *.o
ranlib liball.a
