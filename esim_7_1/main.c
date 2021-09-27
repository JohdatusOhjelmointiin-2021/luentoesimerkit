#include <stdio.h>

int main()
{
    struct eka{
      int pituus;
      int leveys;
      int korkeus;
    };


    //typedef sanalla voit antaa vaikka int sanalle
    //synonyymin
//    typedef int kok ;
//    kok x=5;
//    printf("x=%d\n",x);

    typedef struct toka{
      int pituus;
      int leveys;
      int korkeus;
    }
    toka;

    struct eka kaappi;
    kaappi.pituus=120;
    kaappi.leveys=60;
    kaappi.korkeus=90;

    toka laiva;
    laiva.pituus=50;
    laiva.korkeus=20;
    laiva.leveys=30;

    printf("Tietue esimerkkeja!\n");
    printf("Kaapin mitat\n");
    printf("Pituus = %d\n",kaappi.pituus);
    printf("Leveys = %d\n",kaappi.leveys);
    printf("Korkeus = %d\n",kaappi.korkeus);

    printf("Laivan mitat\n");
    printf("Pituus = %d\n",laiva.pituus);
    printf("Leveys = %d\n",laiva.leveys);
    printf("Korkeus = %d\n",laiva.korkeus);
    return 0;
}
