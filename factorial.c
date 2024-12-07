#undef affiche
#ifdef affiche
#include <stdio.h>
#include <stdlib.h>
#endif

int fact(int n)
{volatile int tmp=n;
 if (n>1)
    return(fact(n-1)*n);
 else return(1); // 1!=1
}

int main(int argc, char** argv)
{int val=5;
 volatile static int val1=0x42,val2=0x55;
#ifdef affiche
 if (argc>1) val=atoi(argv[1]);
 printf("resultat %d\n",fact(val));
#endif
 val=fact(val);
 return(0);
}
