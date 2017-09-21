rm mianalizado*
flex -omianalizador.c pruebas.l
gcc -omianalizador mianalizador.c -lfl
