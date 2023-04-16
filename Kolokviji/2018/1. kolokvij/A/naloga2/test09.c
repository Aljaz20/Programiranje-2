
#include "naloga2.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* NIZI[] = {
    "Ivan Cankar - Skodelica kave Velikokrat v svojem zivljenju sem storil krivico cloveku, ki sem ga ljubil.  Taka krivica je kakor greh zoper svetega duha: ne na tem ne na onem svetu ni odpuscena. Neizbrisljiva je, nepozabljiva. Casih pociva dolga leta, kakor da je bila ugasnila v srcu, izgubila se, utopila v nemirnem zivljenju. Nenadoma, sredi vesele ure, ali ponoci, ko se prestrasen vzdramis iz hudih sanj, pade v duso tezak spomin, zaboli in zapece s toliko silo, kakor da je bil greh sele v tistem trenutku storjen. Vsak drug spomin je lahko zabrisati. Crn madez je na srcu in ostane za vekomaj.  Rad bi clovek lagal sam sebi v duso: Saj ni bilo tako! Le tvoja nemirna misel je iz prosojne sence napravila noc! Malenkost je bila, vsakdanjost, kakor se jih sto in tisoc vrsi od jutra do vecera!  Tolazba je zlagana; in clovek obcuti sam in z grenkobo, da je zlagana. Greh je greh, ce je storjen enkrat ali tisockrat, ce je vsakdanji ali nepoznan. Srce ni kazenski zakonik, ki bi razlocevalo med pregreskom in hudodelstvom, med ubojem in umorom. Srce ve, da zavratnez ubija s pogledom, z mecem junak; in rajsi bi dalo odvezo mecu nego pogledu. Tudi ni srce katekizem, da bi razlocevalo med malimi in naglavnimi grehi, da bi razlocevalo med njimi po besedi in zunanjih znamenjih. Srce je pravicen in nezmotljiv sodnik. Sodi in obsodi gresnika po skriti, komaj zavedni kretnji, po hipnem pogledu, ki ga nihce ni opazil, po neizgovorjeni, komaj na celu zapisani misli; celo po koraku, po trkanju na duri, po srebanju caja. Le malo grehov je napisanih v katekizmu in se tisti niso poglavitni. Ce bi bilo srce spovednik - dolga in strasna bi bila spoved!  Odpustljiv je greh, ki ga je mogoce povedati z besedo, izbrisati ga s pokoro.  Tezak in pretezak, do zadnje ure krvavec je greh, ki je ostal samo v srcu kakor spomin brez besede in brez oblike. Le sam sebi ga clovek izpoveduje, kadar strmi v noc in mu je odeja na prsih tezja od kamna.  Ne kradel nisem ne ubijal ne presustvoval; cista je moja dusa!  Laznivec! Ali nisi lupil jabolka, ko si sel mimo lacnega ter si ga pogledal brez sramu? Hujse je bilo, nego da si kradel, ubijal in presustvoval. Pravicni sodnik, srce, bo rajsi odpustilo ubijalcu, ki je gredoc pod vislice pobozal jokajocega otroka, nego tebi cistemu! Zakaj srce ne pozna malenkosti in tudi ne paragrafov ...  Pred petnajstimi leti sem prisel domov in sem ostal doma tri tedne. Ves tisti cas sem bil potrt in zlovoljen. Stanovanje smo imeli pusto; v nas vseh je bilo, zdi se mi, nekaj tezkega, odurnega, kakor vlazna senca.  Prve noci sem spal v izbi; casih sem se ponoci zbudil, pa sem videl v temi, da je bila mati vstala iz postelje in da je sedela za mizo. Cisto mirno, kakor da bi spala; dlani je tiscala k celu, njen beli obraz se je svetil, tudi ce je bilo okno zagrnjeno in ni bil zunaj ne lune ne zvezd. Poslusal sem natanko in sem razlocil, da to ni sopenje specega, temvec mukoma zatajevano ihtenje. Odel sem se preko glave; ali skozi odejo in tudi se v sanjah sem slisal njeno ihtenje.  Preselil sem se pod streho, v seno. V ta svoj dom sem plezal po strmih, polomljenih stopnicah, lestvi podobnih. Postlal sem si v senu, pred vrata na klanec pa sem si postavil mizo. Razgled moj je bil siv, razglodan zid. V zli volji, v potrtosti in crnih skrbeh sem pisal takrat svoje prve zaljubljene zgodbe. Siloma sem vodil svoje misli na bele ceste, na cvetoce travnike in diseca polja, da bi ne videl sebe in svojega zivljenja.  Nekoc sem si zazelel crne kave. Ne vem, kako mi je prislo na misel; zazelel sem si je. Morda le zategadelj, ker sem vedel, da niti kruha ni doma, kaj sele kave. Clovek je v sami razmisljenosti hudoben in neusmiljen. Mati me je pogledala z velikim, plahim pogledom in ni odgovorila. Pust in zlovoljen, brez besede in pozdrava sem se vrnil pod streho, da bi pisal, kako sta se ljubila Milan in Breda in kako sta bila obadva plemenita, srecna in vesela.  Roko v roki, obadva mlada, od jutranjega sonca obzarjena, v rosi umita ...  Zacul sem tihe korake na stopnicah. Prisla je mati; stopala je pocasi in varno, v roki je nesla skodelico kave. Zdaj se spominjam, da nikoli ni bila tako lepa kakor v tistem trenutku. Skozi vrata je sijal poseven pramen opoldanskega sonca, naravnost materi v oci; vecje so bile in cistejse, vsa nebeska luc je odsevala iz njih, vsa nebeska blagost in ljubezen. Ustnice so se smehljale kakor otroku, ki prinasa vesel dar.  Jaz pa sem se ozrl in sem rekel z zlobnim glasom: Pustite me na miru! ... Ne maram zdaj!  Ni se bila vrhu stopnic; videl sem jo samo do pasu. Ko je slisala moje besede, se ni ganila; le roka, ki je drzala skodelico, se je tresla. Gledala me je prestrasena, luc v oceh je umirala.  Od sramu mi je stopila kri v lica, stopil sem ji naproti s hitrim korakom.  Dajte, mati!  Prepozno je bilo; luci ni bilo vec v njene oci, smehljaja ne vec na njene ustnice.  Popil sem kavo, pa sem se tolazil: Zvecer ji porecem tisto besedo, tisto ljubeznivo, za katero sem ogoljufal njeno ljubezen ...  Nisem je rekel ne zvecer ne drugi dan in tudi ne ob slovesu ...  Tri ali stiri leta kasneje mi je v tujini tuja zenska prinesla kavo v izbo.  Takrat me je izpreletelo, zaskelelo me v srcu tako mocno, da bi bil vzkriknil od bolecine. Zakaj srce je pravicen sodnik in ne pozna malenkosti ...",
    NULL
};

int ST_NIZOV = sizeof(NIZI) / sizeof(char*) - 1;

int __main__() {
    char** t = zadnje(NIZI);
    for (int i = 0;  i < ST_NIZOV;  i++) {
        if (t[i] == NULL) {
            printf("NULL\n");
        } else {
            printf("%ld\n", t[i] - NIZI[i]);
        }
    }
    free(t);

    exit(0);
    return 0;
}
