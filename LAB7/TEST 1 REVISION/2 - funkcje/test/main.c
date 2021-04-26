#include <stdio.h>
#include <stdlib.h>

int main()
{

    char tekst[] = "Litwo! Ojczyzno moja! Ty jesteœ jak zdrowie. Nazywa³ siê niedawno w wielkiej peruce, któr¹ do ojca Podkomorzego, Moœciwego Pana zastêpuje i bagnami skrada³ siê dowie kto go myœlano do dworu. Tu Koœciuszko w polskiej szacie siedzi jak noga moja nie mog¹. S³oñce ostatnich nie czytano w Pañskim pisano zakonie i z Warszaw mam list, to mówi¹c, ¿e nasi synowie i wróciwszy w miechu. Starzy na to mówi¹c, ¿e go kaznodziej¹, ¿e zamczysko wziêliœmy w posiad³oœæ. Wszak¿e kto ciê straci³. Dziœ cz³owieka rodu, obyczajów! Doœæ, ¿e oko pañskie jacha³ szlachcic m³ody panek i ju¿ to mówi¹c, ¿e nasi synowie i nazwisko.";
    int DuzeLitery = 0;
    for(int i=0; tekst[i]!='\0'; i++)
    {
        if(tekst[i]>=65 && tekst[i] <=90)
            DuzeLitery = DuzeLitery + 1;

    }


    printf("%d", DuzeLitery);
    return 0;
}
