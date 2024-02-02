#include <stdio.h>
#include <ctype.h>

int main() {

// luodaan kysymykset arrayna
char kysymys[][100] = {
    "1. Minä vuonna C kieli on julkaistu?: ",
    "2. Kuka on C kielen kehittäjä?: ",
    "3. Mikä on C kielen edeltäjä?: "};

// luodaan vaihtoehtovastaukset arrayna
char vaihtoehdot[][100] = {
    "A. 1969", "B. 1972", "C. 1980",
    "A. Dennis Ritchie", "B. Bjarne Stroustrup", "C. Ken Thompson",
    "A. C#", "B. C++", "C. B-kieli"};


char vastaukset[3] = {'B','A','C'};     // oikeat vastaukset

//int kysymystenmaara = 3;
// kysymysten määrä määräytyy esitettyjen kysymysten mukaan
int kysymystenmaara = sizeof(kysymys)/sizeof(kysymys[0]);

// kerätään arvaus ja score
char arvaus;
char score;

// Pelin aloitus
printf("\n\n\n* K Y S S Ä R I P E L I *\n\n");

for (int i = 0; i < kysymystenmaara; i++) {
    printf("--------------------------------\n");
    printf("%s\n", kysymys[i]);         // esitetään kysymys


    for (int j = (i * 3); j < (i * 3) + 3; j++) {
        printf("%s\n", vaihtoehdot[j]);     // esitetään vaihtoehdot
    }

    printf("arvaus: ");
    scanf("%c", &arvaus);   // pyydetään arvaus
    scanf("%c");            //clear  \n from input buffer
    scanf("%c");

    arvaus = toupper(arvaus);       // sekä pienet, että ison kirjaimet sopivat a = A

    // tehdään if -rakenne. Jos vastaus oikein = teksti +score, jos väärin = teksti
    if (arvaus == vastaukset[i]) {
        printf("\nOikein!\n");
        score++;
    } else {
        printf("\nVäärin\n)");
    }
}
//printataan kertynyt score ja verrataan sitä kysymysten määrään
printf("\nFINAL SCORE: %d/%d\n", score, kysymystenmaara);


    return 0;
}