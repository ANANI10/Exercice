#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int nombre;
    int resultat;
    int Calcul();
    int nombreTriple = Calcul();
    printf("Entrez le nombre\n");
    scanf("%d",&nombre);
    printf("Le triple du nombre est %d\n",nombreTriple);
    return 0;
}
int Calcul(int nombre){
    int resultat;
    resultat = 3 * nombre;
    return resultat;
};
