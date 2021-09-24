#include <cstdio> 
#include <iostream>
int main()
{ 

    
    int proby;                                                                 //licznik zgonów
    proby=0;
spawn:
//Rozmaite kontrolki
int wiedzaokocie=0;
int zeby=1;
int hpdrzwidowierzy=3;
int kasa=0;
//Koniec kontrolek

 proby++;     
  std::cout<<"\n\n\n\n\nProba nr."<<proby<<"\n"; 
int wybor1;                                                                    //Start
std::cout<<"\n\n\nBudzisz sie w ciemnym i zimnym lochu. Nie pamietasz co sie stalo.\nCo chcesz zrobic?\n1-Poszukaj pochodni\n2-Wstan i idz do przodu\n3-Zacznij wolac o pomoc\n4-Zjedz sciane\n\n";
std::cin>>wybor1;
switch(wybor1)
      {
         case 1:
                    std::cout<<"\n" "Chodzenie po ciemnym lochu bez pochodni to glupi pomysl\n,nawet jesli akurat takowej szukasz. \nPrzewrociles sie i spadles dokladnie na magiczny grzyb zamiany w kota,\nktory zamienil cie w mrowke, gratulacje!\nMoze to cie nauczy zeby nie chodzic po ciemku bez pochodni!";
                    goto gameover;
         case 2:
              
                     int hpsciana; hpsciana=10;
                   sciana:
                          hpsciana=hpsciana-1;  
                    switch(hpsciana)
                    {case 0: std::cout<<"\nNiesamowite! Sciana zostala zniszczona\nU"; goto wyburklasy;
                    default:
                    std::cout<<"\n" "Uderzyles w sciane\nCo teraz zrobisz\n1-Uderz jeszcze raz!\n2-Odejdz od sciany\n\n";
                    int wyborsciana;
                    std::cin>>wyborsciana;
                    switch (wyborsciana)
                    {case 1: goto sciana;
                    case 2 : std::cout<<"\nChodzenie po ciemnym lochu bez pochodni to glupi pomysl\n,nawet jesli akurat odchodzisz od sciany. \nPrzewrociles sie i spadles dokladnie na magiczny grzyb zamiany w kota,\nktory zamienil cie w dziobaka, gratulacje!\nMoze to cie nauczy zeby nie chodzic po ciemku nawet przy scianie!";
                    goto gameover;}
                    }
         case 3:
                    std::cout<<"\n" "Pomoc nie nadeszla. Przyszedl za to kaszk i cie zjadl...";
                    goto gameover;
         case 4:
              zeby--;
                    std::cout<<"\n" "Straciles wszystkie zeby, ale sciana byla calkiem smaczna,\na poza tym u";
                    goto wyburklasy;
          }


           
           
         






gameover:                                                                      //Pora¿ka
         
         std::cout<<"\nPrzegrales! Czy chcesz zaczac od nowa?\n\n1-Tak\n2-Nie\n\n";
         int respawn;
         std::cin>>respawn;
        switch (respawn)
        { case 2 : std::cout<<"\nI tak zaczniesz od nowa\n";
        case 1 : goto spawn;}
        
        
        
wyburklasy:                                                                    //Wybór klasy
           int hp=100;
           int mp=100;
           int sp=100;
           std::cout<<"dalo ci sie wyjsc z lochu, a twoim oczom ukazalo sie legendarne \npomieszczenie wyboru postaci.\nTeraz musisz wybrac kim chcesz grac.\n\n";
           system("pause");
           std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n1-Czlowiek: Najbardziej zbalansowana postac, dobra we wszystkim\n2-Elf: Doskonaly zabojca i lucznik, sredni wojownik, beznadziejny mag\n3-Krasnolud: Potezny wojownik, przecietny mag, beznadziejny skrytobojca\n4-Czarodziej: Wielki mag, jako-taki zabojca, kiepski wojownik\n\n"; 
int klasa;
std::cin>>klasa;
std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
switch(klasa)
{
             case 1: hp=hp; mp=mp; sp=sp;        std::cout<<"\nJestes Czlowiekiem,twoje aktualne statystyki:  \nPunkty zycia(hp)     -" <<hp<<"\nPunkty magii(mp)     -"<<mp<< "\nPunkty skupienia(sp) -"<<sp;goto wyzwanie1;
             case 2: hp=hp; mp=mp-50; sp=sp+100; std::cout<<"\nJestes Elfem,twoje aktualne statystyki:        \nPunkty zycia(hp)     -" <<hp<<"\nPunkty magii(mp)     -"<<mp<< "\nPunkty skupienia(sp) -"<<sp;goto wyzwanie1;
             case 3: hp=hp+100; mp=mp; sp=sp-50; std::cout<<"\nJestes Krasnoludem,twoje aktualne statystyki:  \nPunkty zycia(hp)     -" <<hp<<"\nPunkty magii(mp)     -"<<mp<< "\nPunkty skupienia(sp) -"<<sp;goto wyzwanie1;
             case 4: hp=hp-50; mp=mp+100; sp=sp; std::cout<<"\nJestes Czarodziejem,twoje aktualne statystyki: \nPunkty zycia(hp)     -" <<hp<<"\nPunkty magii(mp)     -"<<mp<< "\nPunkty skupienia(sp) -"<<sp;goto wyzwanie1;
}               
wyzwanie1:                                                                     //Etap 1 a
         std::cout<<"\n\n\nWyszedles z pomieszczenia na szeroki, oswietlony wieloma pochodniami korytarz, \npod³oga jest przykryta czerwonym zdobionym w zlote nici dywanem,\na pod scianami stoja liczne puste zbroje. Co robisz?\n\n1-Wez pochodnie\n2-Zakuj sie w zbroje\n3-Owin sie w dywan i turlaj\n4-Po prostu idz dalej\n5-O! Czy to nie jest czasem magiczny grzyb zamiany w kota?\n\n";
          int wyborkorytarz;
          std::cin>>wyborkorytarz;
          switch (wyborkorytarz)
          {
                 case 1: std::cout<<"\nChodzenie po lochu bez pochodni to glupi pomysl\n,nawet jesli akurat po takowa idziesz. \nPrzewrociles sie i spadles dokladnie na magiczny grzyb zamiany w kota,\nktory zamienil cie w kapibare, gratulacje!\nMoze to cie nauczy zeby nie chodzic po lochu bez pochodni!"; goto gameover;
                 case 2: std::cout<<"\nWyglada na to, ze zbroja jest calkiem sprawna.\nPrzywdzianie jej zapewnia ci dodatkowe HP, ale ujmuje nieco MP i SP.\nJestes pewien ze chcesz ja ubrac?\n\n1-Jasne!\n2-Rozmyslilem sie...";
                 int pierwszazbroja;
                 std::cin>>pierwszazbroja;
                 switch (pierwszazbroja)
                 {case 1: hp=hp+50; mp=mp-15; sp=sp-20; goto wyzwanie1wzbroi;
                  case 2: goto wyzwanie1tocoteraz;
                  }
                 
                 case 3: std::cout<<"\nZ nadzieja na swietna zabawe owijasz sie w zdobiony dywan jak nalesnik i turlasz sie wzdluz korytarza.\nWarstw dywanu staje sie coraz wiecej, az w koncu natrafiasz na schody w gore.\nPedzony sila bezwladnosci wturlujesz sie na nie do polowy i wracasz na dol.\nOtrzymujesz przy tym predkosc,\nktora odturluje cie z powrotem na poczatek korytarza\nNiestety,nawet tam sie nie zatrzymujesz, uderzasz w sciane i..."; goto spawn;
                 case 4: std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nTak, to dobry pomysl\n"; goto walka1;
                 case 5: std::cout<<"\nOwszem, to wlasnie on.\n Zamienia cie swistaka.\n Zadowolony?"; goto gameover;
          }
wyzwanie1tocoteraz:                                                            //Etap 1 b
std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nNo dobra, rozumiem twoje wachania decyzji, ale teraz sie zdecyduj!";
std::cout<<"\nCo robisz?\n\n1-Wez pochodnie\n2-Zakuj sie w zbroje\n3-Owin sie w dywan i turlaj\n4-Po prostu idz dalej\n5-O! Czy to nie jest czasem magiczny grzyb zamiany w kota?\n\n";
          int wyborkorytarz1;
          std::cin>>wyborkorytarz1;
          switch (wyborkorytarz1)
          {
                 case 1: std::cout<<"\nChodzenie po lochu bez pochodni to glupi pomysl\n,nawet jesli akurat po takowa idziesz. \nPrzewrociles sie i spadles dokladnie na magiczny grzyb zamiany w kota,\nktory zamienil cie w kapibare, gratulacje!\nMoze to cie nauczy zeby nie chodzic po lochu bez pochodni!"; goto gameover;
                 case 2: std::cout<<"\nWyglada na to, ze zbroja jest calkiem sprawna.\nPrzywdzianie jej zapewnia ci dodatkowe HP, ale ujmuje nieco MP i SP. Jestes pewien ze chcesz ja ubrac?\n\n1-Jasne!\n2-Rozmyslilem sie...";
                 int pierwszazbroja;
                 std::cin>>pierwszazbroja;
                 switch (pierwszazbroja)
                 {case 1: hp=hp+50; mp=mp-15; sp=sp-20; goto wyzwanie1wzbroi;
                  case 2: goto wyzwanie1tocoteraz;
                  }
                 
                 case 3: std::cout<<"\nZ nadzieja na swietna zabawe owijasz sie w zdobiony dywan jak nalesnik i turlasz sie wzdluz korytarza.\nWarstw dywanu staje sie coraz wiecej, az w koncu natrafiasz na schody w gore.\nPedzony sila bezwladnosci wturlujesz sie na nie do polowy i wracasz na dol.\nOtrzymujesz przy tym predkosc,\nktora odturluje cie z powrotem na poczatek korytarza\nNiestety,nawet tam sie nie zatrzymujesz, uderzasz w sciane i..."; goto spawn;
                 case 4: std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nTak, to dobry pomysl\n"; goto walka1;
                 case 5: std::cout<<"\nOwszem, to wlasnie on.\n Zamienia cie swistaka.\n Zadowolony?"; goto gameover;
          }


wyzwanie1wzbroi:                                                               //Etap 1 c
std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nTwoje nowe statystyki:  \nPunkty zycia(hp)     -" <<hp<<"\nPunkty magii(mp)     -"<<mp<< "\nPunkty skupienia(sp) -"<<sp;
std::cout<<"\nCo robisz?\n\n1-Wez pochodnie\n2-Zakuj sie w zbroje\n3-Owin sie w dywan i turlaj\n4-Po prostu idz dalej\n5-O! Czy to nie jest czasem magiczny grzyb zamiany w kota?\n\n";
          int wyborkorytarz2;
          std::cin>>wyborkorytarz2;
          switch (wyborkorytarz2)
          {
                 case 1: std::cout<<"\nChodzenie po lochu bez pochodni to glupi pomysl\n,nawet jesli akurat po takowa idziesz. \nPrzewrociles sie i spadles dokladnie na magiczny grzyb zamiany w kota,\nktory zamienil cie w kapibare, gratulacje!\nMoze to cie nauczy zeby nie chodzic po lochu bez pochodni!"; goto gameover;
                 case 2: std::cout<<"\nWyglada na to, ze zbroja jest calkiem sprawna.\nPrzywdzianie jej zapewnia ci dodatkowe HP, ale ujmuje nieco MP i SP. Jestes pewien ze chcesz ja ubrac?\n\n1-Jasne!\n2-Rozmyslilem sie...";
                 int pierwszazbroja;
                 std::cin>>pierwszazbroja;
                 switch (pierwszazbroja)
                 {case 1: std::cout<<"\nJuz masz jedna, oszuscie!"; goto wyzwanie1wzbroi;
                  case 2: goto wyzwanie1wzbroi;
                  }
                 
                 case 3: std::cout<<"\nZ nadzieja na swietna zabawe owijasz sie w zdobiony dywan jak nalesnik i turlasz sie wzdluz korytarza.\nWarstw dywanu staje sie coraz wiecej, az w koncu natrafiasz na schody w gore.\nPedzony sila bezwladnosci wturlujesz sie na nie do polowy i wracasz na dol.\nOtrzymujesz przy tym predkosc,\nktora odturluje cie z powrotem na poczatek korytarza\nNiestety,nawet tam sie nie zatrzymujesz, uderzasz w sciane i..."; goto spawn;
                 case 4: std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nTak, to dobry pomysl.\n"; goto walka1;
                 case 5: std::cout<<"\nOwszem, to wlasnie on.\n Zamienia cie swistaka.\n Zadowolony?"; goto gameover;
          }
walka1:                                                                        //Walka 1-Kot
int kb,kd,km;
kb=5;
kd=3;
km=1;

std::cout<<"Idziesz dalej przez korytarz, gdy natrafiasz na schody.\nDostep do nich blokuje kot.\nAgresywny kot!\nCo robisz?\n\n1-Do bitwyyyyy!!!\n2-Maaagiczny pojedynek\n3-Sproboj sie przekrasc\n4-A moze tak po prostu z nim porozmawiasz?\n";
int walkazkotem;
std::cin>> walkazkotem;
switch (walkazkotem)
{
 case 1: std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nBitwaaaaaa!!!\n"; goto bitwazkotem;
 case 2: std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nRozpoczynasz magiczny pojedynek z kotem,\njednak ten zamienia sie w wiedzme i celuje w ciebie rozdzka;\npodejmujesz rozpaczliwa probe walki! "; goto magiazkotem;
 case 3: std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPodejmujesz probe przekradniecia sie za kotem,\ntwoj sukces zalezy od twoich umiejetnosci\n"; if(sp<125){std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nNiestety, twoje umiejetnosci skradnia okazaly sie za slabe,\nprzewrociles sie, czego efektem byla eksplozja twoich zebow,\nPrzykro mi.\n"; goto gameover;} else {std::cout<<"\nUdalo ci sie przekrasc niepostrzezenie przekrasc za kotem\n"; goto wyzwanie2;}
 case 4: std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPodchodzisz do kota i mowisz:\n1-No kto jest takim slodkim kotem, agugdzigudzigu!\n2-Dziendobry kocie\n3-Pomocy!\n"; int d1; std::cin>>d1; switch(d1){
      case 1: std::cout<<"\nJedyne co ci sie udalo,\nto wkurzyc kota, ktory zaczal z toba walke"; goto bitwazkotem;           
                                                                               //Dialog 1-Kot
      case 2: std::cout<<"\n\nDziendobry - odpowiedzial kot\n\n1-Ty mowisz!\n2-Co tutaj porabiasz, kocie?\n3-Potrzebujesz pomocy, kocie\n4-A po co ci takie wielkie pazury?\n";
      int dk0;
      std::cin>>dk0;
      switch(dk0){
                 case 1: std::cout<<"\n\nTak, reczywiscie: mowie - odparl kot\n-To dlatego, ze nie zawsze bylam kotem.\n\n1-Czyli jestes czlowiekiem?\n2-A wiec potrzebujesz mojej pomocy?\n";      int dk1;
                  std::cin>>dk1;
                  switch(dk1){
                                case 1: prawdaokotach: std::cout<<"\n\nKiedys bylam piekna ksiezniczka - wyjasnil kot\n-Ale pewnego dnia upadlam na magiczny grzyb zamiany w kota...\nWiec teraz jestem kotem i czekam, az ktos przyjdzie mi na ratunek\n\n1-Przykro mi, moglbym ci jakos pomoc?\n2-Ale przeciez bycie kotem musi byc swietne!\n3-Klamiesz!\n";
                                       int dk2;
                                       std::cin>>dk2;
                                       switch(dk2){ case 1: pomockotu: std::cout<<"\n\nTak, gdybys mogl wrocic na tamten korytarz i zawolac o pomoc...\n- poprosila ksiezniczka/kot\n\n1-Nie ma mowy, wiem co sie stanie!\n2-Okej\n";
                                                       int dk4;
                                                       std::cin>>dk4;
                                                       switch(dk4){
                                                                   case 1: std::cout<<"\n\nNiespodziewanie buchnela para, a rzekoma ksiezniczka/kot zamienila sie w wiedzme.\nPrzejrzales mnie! - Wykrzyknela wiedzma, po czym wycelowala w ciebie rozdzka.\n"; goto magiazkotem;
                                                                   case 2: std::cout<<"\n\nWracasz na korytarz wylozony dywanem i wolasz: Pomocy!\nJednak pomoc nie nadeszla, przyszedl za to kaszk i cie zjadl.\n"; goto gameover;
                                                                        }
                                                    case 2: std::cout<<"\n\nNie do konca, nie moge robic wielu rzeczy bedac kotem\n-wyjasnila ksiezniczka/kot -\nNa przyklad nie moge znalezc swojego ksiecia i zostac krolowa\n\n1-Ale bycie kotem jest po prostu fajne!\n2-Przykro mi, moge ci jakos pomoc?\n";
                                                    int dk3b;
                                                    std::cin>>dk3b;
                                                    switch(dk3b){
                                                                  case 1:std::cout<<"\n\nNiespodziewanie buchnela para, a rzekoma ksiezniczka/kot zamienila sie w wiedzme.\nJesli tak bardzo chcesz byc kotem, to moge ci w tym pomoc!\n- Wykrzyknela wiedzma, po czym wycelowala w ciebie rozdzka.\n"; goto magiazkotem;
                                                                  case 2:goto pomockotu;
                                                                       }
                                                    
                                                    case 3: std::cout<<"\n\nDlaczego tak uwazasz? - zapytala kotka/ksiezniczka\n\n1-Magiczny grzyb zamiana kota nigdy nie zamienia w kota!\n2-Tak tylko zgadywalem...\n";
                                                        int dk3c;
                                                        std::cin>>dk3c;
                                                        switch(dk3c){
                                                                     case 1:std::cout<<"\n\nNiespodziewanie buchnela para, a rzekoma ksiezniczka/kot zamienila sie w wiedzme.\nPrzejrzales mnie! - Wykrzyknela wiedzma, po czym wycelowala w ciebie rozdzka.\n"; goto magiazkotem;
                                                                     case 2:std::cout<<"\n\nNiespodziewanie buchnela para, a rzekoma ksiezniczka/kot zamienila sie w wiedzme.\nI dobrze zgadles! - Wykrzyknela wiedzma, po czym wycelowala w ciebie rozdzka.\n"; goto magiazkotem;
                                                    }                }
                                case 2: std::cout<<"\n\nTak, pomoc by sie przydala - odpowiedzial kot\nPomoc jednak nie nadeszla,\nprzyszedl za to kaszk, ktory zjadl kota.\nPozostalo ci tylko zignorowac potwora i isc dalej.\n"; goto wyzwanie2;

                              }
                    
                 case 2: goto prawdaokotach;
                 case 3: std::cout<<"\n\nTak, pomoc by sie przydala - odpowiedzial kot\nPomoc jednak nie nadeszla,\nprzyszedl za to kaszk, ktory zjadl kota.\nPozostalo ci tylko zignorowac potwora i isc dalej.\n"; goto wyzwanie2;
                 case 4: std::cout<<"\n\nZeby cie szybciej zjesc - odpowiedzial kot,\npo czym rzucil sie na ciebie ze wsciekloscia.\n"; goto bitwazkotem;
                 }
      
           
           
                     
      case 3: std::cout<<"\nNikt ci nie pomogl.\nPrzyszedl za to kaszk i cie zjadl."; goto gameover;
           
           
           }
}






bitwazkotem:                                                                   //Bitwa 1-Kot
{
double xhp=hp ,xsp=sp ,xmp=mp ;  //Gracz - tymczasowe
double hpp=100 ,spp=100 ,mpp=100 ,app=7 ;      //Przeciwnik
std::cout<<"\n\n\nTwoj przeciwnik: Kot \nStatystyki: hp-"<<hpp<<" sp-"<<spp<<" mp-"<<mpp<<" ap-"<<app<<"\n\n\n\nTwoje aktualne statystyki:  \nKlasa broni (kb)     -" <<kb<<"\nKlasa broni dyst.(kd)-" <<kd<<"\nKlasa magii (km)     -" <<km<<"\nPunkty zycia(hp)     -" <<hp<<"\nPunkty magii(mp)     -"<<mp<< "\nPunkty skupienia(sp) -"<<sp<<"\n\n\n";    

do{
   std::cout<<"\nTwoje aktualne statystyki: hp:"<<xhp<<" mp:"<<xmp<<" sp:"<<xsp<<"\n\nStatystyki przeciwnika: hp:"<<hpp<<" mp:"<<mpp<<" sp:"<<spp<<" ap:"<<app<<"\n\nAkcje:\n1-Atak wrecz\n2-Atak magiczny\n3-Atak z dystansu";
   int metoda;
   std::cout<<"\n\n";
   std::cin>>metoda;
   switch(metoda)
     {case 1: hpp=hpp-kb; xhp=xhp-app; std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nOdbierasz kotu "<<kb<<" punktow hp\nKot drapie cie pazurami i odbiera ci "<<app<<" punktow hp\n"; break;
      case 2: {double dmg,dmgp; dmg=km*(0.1*xmp);hpp=hpp-dmg; xmp=xmp-(km*50); dmgp=0.1*mpp; xhp=xhp-dmgp; mpp=mpp-(0.5*mpp); std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nOdbierasz kotu "<<dmg<<" punktow hp\nKot uzywa kociej magii i obdiera ci "<<dmgp<<" punktow hp\n";} break;
      case 3: {double dmg,dmgp; dmg=kd+(0.1*xsp);hpp=hpp-dmg; xsp=xsp-(0.2*sp); dmgp=0.1*spp; xhp=xhp-dmgp; spp=spp-(0.2*spp); std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nOdbierasz kotu "<<dmg<<" punktow hp\nKot strzela klaczkiem odbiera ci "<<dmgp<<" punktow hp\n";} break;
               
               
     }
   if(xhp<0) {std::cout<<"\n\nZostales pokonany przez kota!\n"; goto gameover;};
   xmp=xmp+(0.1*mp);
   xsp=xsp+(0.1*sp);         
  }while(hpp>0);
goto kotpokonany;

} 
magiazkotem:                                                                   //Pojedynek magiczny 1-Kot
            if(mp<99) {std::cout<<"Niestety, twoja magia byla zbyt slaba by walczyc,\na wiedzma rzucila w ciebie magicznym grzybem zamiany w kota,\nzmieniajac cie w meduze"; goto gameover;}
            {
            int w=50;
            int g=mp;
            
do{
                  
            std::cout<<"\n\n\n\nNaciskaj COKOLWIEK aby walczyc!\n\nMagia wiedzmy:"<<w<<"    Twoja magia:"<<g<<"\n\n";
         system ("pause");
         w--;
         g--;
         
}while(w!=0);
wiedzaokocie++;
std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nTo bylo irytuajace,czyz nie?\n";
          
       
}
                                                                               //Wygrana 1-Kot
kotpokonany:
std::cout<<"\nUdalo ci sie pokonac przeciwnika,\nktory rozplynal sie we mgle,\nzostawiajac po sobie jedna monete\n"; kasa++;
std::cout<<"\nTwoje aktualne statystyki:  \nKlasa broni (kb)     -" <<kb<<"\nKlasa broni dyst.(kd)-" <<kd<<"\nKlasa magii (km)     -" <<km<<"\nPunkty zycia(hp)     -" <<hp<<"\nPunkty magii(mp)     -"<<mp<< "\nPunkty skupienia(sp) -"<<sp<<"\n\n\n";
system ("\n\npause");


wyzwanie2:                                                                     //Etap 2-Wieza maga
std::cout<<"\n\n\n\n\n\n\n\nRuszyles w dalsza podroz, wszedles po schodach,\n po czym przeszedles przez gigantyczna dziure w scianie.\nZnalazles sie na skalnym wystepie; pod toba rozciaga sie gigantyczna jaskinia mogaca zmiescic cale miasto,\nmiejscami jest oswietlona, tu i uwdzie rozsypane sa ruiny.\nPrzy jednej z krawedzi jamy wznosi sie wysoka skala, na ktorej ustawiona jest gigantyczna wieza czarodzieja.\nWystep na ktorym stoisz jest polaczony z wieza dlugim, linowym mostem.\nMozesz isc po nim, lub zawrocic. Co robisz?\n\n1-Idz po moscie\n2-Zawroc\n3-Sproboj ostroznie zejsc po scianie jaskini w dol\n4-Podziwiaj okoliczna faune i flore\n";
int hablefefefe;
std::cin>>hablefefefe;
std::cout<<"\nZanim zdazyles zrobic cokolwiek, w korytarzu z ktorego przyszedles rozlegl sie glosny huk, a po chwili w glebi korytarza gasna pochodni. Co robisz?\n\n1-Czekaj w przerazeniu\n2-Biegniiij!\n";
int wejsciesmoka;
std::cin>>wejsciesmoka;
switch(wejsciesmoka)
{
    case 1: std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nCzekasz w przerazeniu...\n" ; system ("\npause\n");std::cout<<"\nZ ciemnosci wylania sie gigantyczny czerwony ksztalt, po czym zionie w ciebie ogniem, szczesliwi masz za soba podstawowe magiczne szkolenie i odruchowo przywolujesz magiczna tarcze. Kiedy sytuacja sie uspokaja a dym opada przed toba stoi smok w pelnej swojej okazalosci. Co robisz?\n\n1-BIEGNIIIJ!!!\n2-Stan i walcz!\n3-Maaaagiczny pojedynek!!!\n4-A moze by tak z nim porozmawiac?\n\n";
  int smokciegoni1;  
  std::cin>>smokciegoni1;
  switch(smokciegoni1){
                       case 1: goto biegiemodsmoka; 
                       case 2: std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nStajesz do walki ze smokiem!\n\n"; goto bossfight;
                       case 3: std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPodejmujesz probe walki na magie ze smokiem\n\n"; goto bossfightmagia;
                       case 4: std::cout<<"Smok nie wykazuje checi rozmowy i po prostu cie zjada"; goto gameover;
}                                                                              //SMOOOOOOOOOK!-Scenka przy drzwiach
                                                                               case 2:biegiemodsmoka: std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nDobry pomysl! Rzucasz sie biegiem po rozkolysanym mostku,\ngdy jestes juz w polowie drogi przestrzen za toba pochloniaja plomienie.\nNie ustajac w biegu docierasz do drzwi wiezy,\njednak te sa zamkniete! Odwracasz sie by ujrzec smoka tuz za toba.\n"; drzwidowierzy: std::cout<<"\nCo teraz?\n\n1-Skacz w dol!\n2-Uderz w drzwi! Szybko!\n3-Zjedz drzwi\n4-Odwroc sie i walcz ze smokiem!\n\n";int drzwi; std::cin>>drzwi; 
switch(drzwi){
                                                                                                                                                case 1: std::cout<<"\nTo moze nie byl najlepszy pomysl, gnasz ku podlodze jaskini!\nNiestety, jako ze smoki LATAJA, bestia rzuca sie za toba w pogon!\nMozesz jedynie zmienic pozycje aby przyspieszyc lub zwolnic.\n\n1-Szybciej w dol!\n2-Zrownaj sie w locie ze smokiem!\n"; int likeagandalf; std::cin>>likeagandalf; 
switch(likeagandalf){
   case 1: std::cout<<"\nPedzisz ku ziemi szybciej od ostroznego smoka i ladujesz na...\nMagiczny grzyb zamiany w kota!!!\nKtory zamienia cie w Lodowego Smoka.\n";std::cout<<"\nPrzegrales! Czy chcesz zaczac od nowa?\n\n1-Tak\n2-Nie\n3-Chwila moment! Przeciez jestem teraz SMOKIEM!\nCzemu niby mam zaczynac od nowa skoro moge pokonac ostatniego przeciwnika?\n\n";
                              int respawnx;
                              std::cin>>respawnx;
                              
switch (respawnx){
    
     case 1 : goto spawn;
     case 2 : std::cout<<"\nI tak zaczniesz od nowa\n"; goto spawn;
     case 3 : std::cout<<"\nTak, masz racje.\n\nJako Smok Lodu stajesz do walki ze swoim pobratymcem!\n\n";
       {
                                                                               //Smok vs. Smok
                                                                                 int skillsmoka1=0;
                                                                                   int skillsmoka2=0;
                                                                                      int skillsmoka3=0;
                                                                                      
                                                                                           int skillsmoka1g=1;
                                                                                                   int skillsmoka2g=2;
                                                                                                      int skillsmoka3g=3;
          
                                                                                                        double xhp=5000 ,xsp=2000 ,xmp=4000, kb=100, km=5, kd=10 ;  //Gracz - tymczasowe
                                                                                                           double hpp=5000 ,spp=3000 ,mpp=7000 ,app=100 ;      //Przeciwnik
                                                                                                                   std::cout<<"\n\n\nTwoj przeciwnik: Smok \nStatystyki: hp-"<<hpp<<" sp-"<<spp<<" mp-"<<mpp<<" ap-"<<app<<"\n\n\n\nTwoje aktualne statystyki:  \nKlasa broni (kb)     -" <<kb<<"\nKlasa broni dyst.(kd)-" <<kd<<"\nKlasa magii (km)     -" <<km<<"\nPunkty zycia(hp)     -" <<xhp<<"\nPunkty magii(mp)     -"<<xmp<< "\nPunkty skupienia(sp) -"<<xsp<<"\n\n\n";    
                                                                                 
                                                                                 do {

                                                                                    std::cout<<"\nTwoje aktualne statystyki: hp:"<<xhp<<" mp:"<<xmp<<" sp:"<<xsp<<"\n\nStatystyki przeciwnika: hp:"<<hpp<<" mp:"<<mpp<<" sp:"<<spp<<" ap:"<<app<<"\n\nAkcje:\n1-Atak wrecz\n2-Atak magiczny\n3-Atak z dystansu";
                                                                                       int metoda;
                                                                                          std::cout<<"\n\n";
                                                                                             std::cin>>metoda;
                                                                                                switch(metoda)
{
                                                                                                case 1: hpp=hpp-kb; xhp=xhp-app; std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nOdbierasz Smokowi "<<kb<<" punktow hp\nSmok uderza cie lapa odbierajac ci "<<app<<" punktow hp\n"; break;
                                                                                                case 2: {double dmg,dmgp; dmg=(0.1*xmp);hpp=hpp-dmg; xmp=xmp-(km*50); dmgp=0.1*mpp; xhp=xhp-dmgp; mpp=mpp-(0.5*mpp); std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nOdbierasz Smokowi "<<dmg<<" punktow hp\nSmok zionie ogniem i odbiera ci "<<dmgp<<" punktow hp\n";} break;
                                                                                                case 3: {double dmg,dmgp; dmg=(0.1*xsp);hpp=hpp-dmg; xsp=xsp-(0.2*sp); dmgp=0.1*spp; xhp=xhp-dmgp; spp=spp-(0.2*spp); std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nOdbierasz Smokowi "<<dmg<<" punktow hp\nSmok miota w ciebie kula ognia i odbiera ci "<<dmgp<<" punktow hp\n";} break;
}   
                                                                                                                                        skillsmoka1++;
                                                                                                                                        skillsmoka2++;
                                                                                                                                        skillsmoka3++;
                                                                                                                                      
                                                                                                                                        skillsmoka1g++;
                                                                                                                                        skillsmoka2g++;
                                                                                                                                        skillsmoka3g++;
                                                                                                                                                  switch(skillsmoka1){case 3:  std::cout<<"\n\nSmok przywoluje ogniste tornado zadajac ci 500 punktow obrazen!\n"; xhp=xhp-500; skillsmoka1=1; default: break;}
                                                                                                                                                  switch(skillsmoka2){case 5:  std::cout<<"\n\nSmok wzlatuje w powietrze chwilowo uniemozliwiajac ci atak.\nPrzez ten czas regeneruje dodatkowe 50% aktualnego hp\n"; hpp=hpp+(0.5*hpp); skillsmoka2=2; default: break;}
                                                                                                                                                  switch(skillsmoka3){case 10: std::cout<<"\n\nSmok wysysa twoje sily zyciowe!\n";spp=spp+(0.1*xsp);mpp=mpp+(0.1*xmp);hpp=hpp+(0.1*xhp);    xhp=xhp-(0.1*xhp); xsp=xsp-(0.1*xsp);xmp=xmp-(0.1*xmp); skillsmoka3=5; default: break;}
                                                                                                                                                          
                                                                                                                                                              switch(skillsmoka1g){case 3:  std::cout<<"\n\nPrzywolujesz lodowa burze zadajac przeciwnikowi 500 punktow obrazen!\n"; hpp=hpp-500; skillsmoka1g=0; default: break;}
                                                                                                                                                              switch(skillsmoka2g){case 5:  std::cout<<"\n\nWzlatujesz w powietrze chwilowo uniemozliwiajac atak przeciwnika.\nPrzez ten czas regenerujesz dodatkowe 50% aktualnego hp\n"; xhp=xhp+(0.5*xhp); skillsmoka2g=0; default: break;}
                                                                                                                                                              switch(skillsmoka3g){case 10: std::cout<<"\n\nWysysasz sily zyciowe przeciwnika!\n";xsp=xsp+(0.1*spp);xmp=xmp+(0.1*mpp);xhp=xhp+(0.1*hpp);    hpp=hpp-(0.1*hpp); spp=spp-(0.1*spp);mpp=mpp-(0.1*mpp); skillsmoka3g=0; default: break;}              
                                                                                                                                                                      xmp=xmp+(0.1*xmp);
                                                                                                                                                                      xsp=xsp+(0.1*xsp); 
                                                                                                                                                                      if(xhp<0) {std::cout<<"\n\nZostales pokonany przez Smoka!\n"; goto gameover;};
                                                                                                                                                                      }
                                                                                                                                                                        while(hpp>0);
                                                                                                                                                                         std::cout<<"\n\nUdalo ci sie pokonac smoka! Gratulacje!\n Zadowolony z siebie przelatujesz cala jaskinie zjadajac po drodze\ngigantycznego pajaka, zlego maga, zgraje goblinow,\ntrolla oraz duzego niebieskiego pozeracza kamieni.\nMasz rowniez gdzies wszystkie fajne atrakcje,\nktore gra gra mogla ci zaoferowac. Lecisz w kierunku wyjscia z jaskini.\nW koncu widzisz wyjscie, niestety jest ono za male dla smoka!\nMozesz tylko wystawic glowe na zewnatrz i podziwiac zachod slonca.\n\n1-OK\n2-No dobra, pusc gre od poczatku, bycie smokiem nie jest takie fajne...\n3-Chce sobie polatac po jaskini!\n\n";
                                                                                                                                                                            int jestesmokie;
                                                                                                                                                                                 std::cout<<"\n\n";
                                                                                                                                                                                        std::cin>>jestesmokie;
                                                                                                                                                                                              switch(jestesmokie)
                                                                                                                                                                                               {case 1:std::cout<<"\nObserwujesz zachod slonca:\n\n";   
                                                                                                                                                                               case 2:std::cout<<"\nDoceniam twoja uczciwosc!\n"; goto spawn;
                                                                                                                                                                                 case 3: selatamse: std::cout<<"\nLatasz sobie po jaskini\n\n1-Lataj sobie dalej\n2-Poziej se ogniem\n";
                                                                                                                                                                                     int latamse;
                                                                                                                                                                                                                                                                             std::cout<<"\n\n";
                                                                                                                                                                                                                                                                                std::cin>>latamse;
switch(latamse){
                                                                                                                               case 1:  goto selatamse;

                                                                                                                        case 2: std::cout<<"\nPoziales se ogniem, brawo!\n"; goto selatamse; 
}
}
    
        
}


    
    
}
          
}
         case 2: switch(hpdrzwidowierzy) {case 0: std::cout<<"\nUdalo ci sie wywazyc drzwi! Narazie jestes bezpieczny\n"; goto wieza;
                                         default: std::cout<<"\nUderzasz w drewniane drzwi,lecz te nie ustepuja\nTracisz 1hp w skutek obrazen glowy\n";hp--,hpdrzwidowierzy--; goto drzwidowierzy;
                                         }
         case 3: switch(zeby){case 0: std::cout<<"\nZapomniales, ze nie masz zebow? Straciles je zjadajac sciane na samym poczatku!\n"; goto drzwidowierzy;
                             case 1: std::cout<<"\nStraciles wszystkie zeby, a drzwi byly przeterminowane.\nFuj!\nMimo wszystko udalo ci sie dojsc do wiezy.\n"; zeby--; goto wieza;}                            
         case 4: std::cout<<"\nPodejmujesz bohaterska probe walki ze smokiem!\n\n"; goto bossfight;
}
 







bossfightmagia:                                                                   //Pojedynek magiczny ze Smokiem
            {
            int wSMOK=100;
            int g=mp;
            
do{
                  
            std::cout<<"\n\n\n\nNaciskaj COKOLWIEK aby walczyc!\n\nMagia Smoka:"<<wSMOK<<"    Twoja magia:"<<g<<"\n\n";
         system ("pause");
         wSMOK++;
         g--;
         
}while(g!=0);
std::cout<<"\n\n\nZostajesz zmieciony z powierzchni ziemi przez nieuczciwe czary smoka!\n";
goto gameover;
}






bossfight:                                                                     //Bossfight-smok
{

int skillsmoka1=0;
int skillsmoka2=0;
int skillsmoka3=0;
double xhp=hp ,xsp=sp ,xmp=mp ;  //Gracz - tymczasowe
double hpp=5000 ,spp=3000 ,mpp=7000 ,app=100 ;      //Przeciwnik
std::cout<<"\n\n\nTwoj przeciwnik: Smok \nStatystyki: hp-"<<hpp<<" sp-"<<spp<<" mp-"<<mpp<<" ap-"<<app<<"\n\n\n\nTwoje aktualne statystyki:  \nKlasa broni (kb)     -" <<kb<<"\nKlasa broni dyst.(kd)-" <<kd<<"\nKlasa magii (km)     -" <<km<<"\nPunkty zycia(hp)     -" <<hp<<"\nPunkty magii(mp)     -"<<mp<< "\nPunkty skupienia(sp) -"<<sp<<"\n\n\n";    

do{

   std::cout<<"\nTwoje aktualne statystyki: hp:"<<xhp<<" mp:"<<xmp<<" sp:"<<xsp<<"\n\nStatystyki przeciwnika: hp:"<<hpp<<" mp:"<<mpp<<" sp:"<<spp<<" ap:"<<app<<"\n\nAkcje:\n1-Atak wrecz\n2-Atak magiczny\n3-Atak z dystansu";
   int metoda;
   std::cout<<"\n\n";
   std::cin>>metoda;
   switch(metoda)
     {case 1: hpp=hpp-kb; xhp=xhp-app; std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nOdbierasz Smokowi "<<kb<<" punktow hp\nSmok uderza cie lapa odbierajac ci "<<app<<" punktow hp\n"; break;
      case 2: {double dmg,dmgp; dmg=km*(0.1*xmp);hpp=hpp-dmg; xmp=xmp-(km*50); dmgp=0.1*mpp; xhp=xhp-dmgp; mpp=mpp-(0.5*mpp); std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nOdbierasz Smokowi "<<dmg<<" punktow hp\nSmok zionie ogniem i odbiera ci "<<dmgp<<" punktow hp\n";} break;
      case 3: {double dmg,dmgp; dmg=kd+(0.1*xsp);hpp=hpp-dmg; xsp=xsp-(0.2*sp); dmgp=0.1*spp; xhp=xhp-dmgp; spp=spp-(0.2*spp); std::cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nOdbierasz Smokowi "<<dmg<<" punktow hp\nSmok miota w ciebie kula ognia i odbiera ci "<<dmgp<<" punktow hp\n";} break;
     }   
   skillsmoka1++;
   skillsmoka2++;
   skillsmoka3++;
    switch(skillsmoka1){case 3:  std::cout<<"\n\nSmok przywoluje ogniste tornado zadajac ci 500 punktow obrazen!\n"; xhp=xhp-500; skillsmoka1=0; default: break;}
    switch(skillsmoka2){case 5:  std::cout<<"\n\nSmok wzlatuje w powietrze chwilowo uniemozliwiajac ci atak.\nPrzez ten czas regeneruje dodatkowe 50% aktualnego hp\n"; hpp=hpp+(0.5*hpp); skillsmoka2=0; default: break;}
    switch(skillsmoka3){case 10: std::cout<<"\n\nSmok wysysa twoje sily zyciowe!\n";spp=spp+(0.1*xsp);mpp=mpp+(0.1*xmp);hpp=hpp+(0.1*xhp);    xhp=xhp-(0.1*xhp); xsp=xsp-(0.1*xsp);xmp=xmp-(0.1*xmp); skillsmoka3=0; default: break;}
                      
xmp=xmp+(0.1*mp);
xsp=xsp+(0.1*sp); 
if(xhp<0) {std::cout<<"\n\nZostales pokonany przez Smoka!\n"; goto gameover;};
  }while(hpp>0);
goto smokpokonany;
} 

wieza:
system("pause");


smokpokonany:
system("pause");
}
}
// std::cout<<"\nTwoje aktualne statystyki:  \nKlasa broni (kb)     -" <<kb<<"\nKlasa broni dyst.(kd)-" <<kd<<"\nKlasa magii (km)     -" <<km<<"\nPunkty zycia(hp)     -" <<hp<<"\nPunkty magii(mp)     -"<<mp<< "\nPunkty skupienia(sp) -"<<sp;    
// \nTwoje aktualne statystyki: hp-"<<xhp<<" mp-"<<xmp<<" sp-"<<xsp                      
 
// Ksiêga magii: 1-P³omienie 2-Lód 3-Pioruny
// Bronie: 1-Piesci- 5dmg  2-Nó¿ - 10dmg 3-Miecz - 30dmg 4-Topór - 50dmg 5-Wielki m³ot - 100dmg
// Broñ dystansowa: 1-Rzucanie kamieniami - 3dmg 2-Proca - 7dmg 3-£uk - 15dmg 4-Kusza - 30 dmg 5-Podrêczna balista - 50dmg


//Skrypt Bitwy:
         
