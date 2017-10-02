./scriptBison.sh
rm mianalizado*
flex -omianalizador.c flexete.l
gcc -omianalizador mianalizador.c pepeTheSyntacticAnalyzer.c -lfl
