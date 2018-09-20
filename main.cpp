//minden sor, amely elott  // jel talalhato nem fut le, csak megjegyzes
//Tananyag gyorstalpalo


//az include resz mindig legfelul legyen
//ezen a reszen kulso konyvtarakat kapcsolhatunk a kodunkhoz
//olyan kodokat, amit masok mar megirtak, igy nekunk mar nem kell
//a meghivastol kezdve szabadon hasznalhatjuk
//iostream a cout miatt kell, hisz az is egy fuggveny
//ami alapbol NEM all rendelkezesre

#include <iostream>



//ez itt egy fuggveny
//van neki neve, ami teljesen szabadon valasztott
//a nev elott latjuk a visszateresi erteket
//a meghivas helyen ezzel az ertekkel helyettesitodik maga a hivas
//a nev utan lathatjuk a parameter listat
//a parameterlista () kozott kell szerepeljen
//ez a csatlakozasi pont a fuggveny szamara a kulvilaggal

int fuggveny(int parameter){

    //ez itt a fuggveny torzse
    //a torzs {} jelek kozott kell szerepeljen
    //ide irhatjuk meg azt a logikat, amit a fuggveny vegrehajt
    //termeszetesen itt felhasznalhatjuk a kivulrol kapott parametereket

    //lefoglalok egy egesz szamnak egy helyet a memoriaban(int)
    //ez most egy ures doboz, amibe egyetlen egy darab egesz szamot tehetek
    //minden parancs vegere ; kerul, innen tudja a fordito, hogy vege a parancsnak

    int eredmeny;

    //feltoltom az ures dobozom, mely egesz szamot tud tarolni
    //legyen a belekerulo szam a kivulrol kapott szam (paramater) ketszerese

    eredmeny=parameter*2;


    //majd mivel a fuggvenyem int visszeterest var (int fuggveny)
    //igy kell egy return parancs, ami egy egesz szamot ad vissza a hivas helyere
    //legyen ez most az altalam tarolt doboz erteke
    // - ha azt irnam, hogy return 2; , az is tokeletesen mukodne

    return eredmeny;

}
// 1. feladat
// irjunk egy fuggvenyt,
// ami egy tetszoleges szamot tud hatvanyozni egy tetszoleges kitevore
// ehhez szukseges megadnom neki az alapot, amit hatvanyozunk
// es a kitevot, amely meghatarozza, hogy hanyadikra emelem a szamot
// ezert ezek szerepelnek a parameter listan
// neve tetszoleges, en a hatvanyozo -t valasztottam

int hatvanyozo(int alap, int kitevo){

    // hogy is nez ki maga a hatvanyozas a matematik vilagaban
    // az alapot szorozzuk magaval
    // pontosan a kitevovel megegyezo alkalommal
    // tehat 3 a negyediken = 3 * 3 * 3 * 3

    // ehhez nekunk segitsegunk egy ciklus lesz
    // a legmegfelelobb a for, hisz az pontosan arra van kitalalva,
    // hogy valamettol valameddig szepen vegigmenjunk sorban

    // az eredmenyt erdemes eltarolni egy valtozoban

    // az eredmeny biztosan egesz szam lesz, barmit is adunk meg

    int eredmeny;

    // onmagaval valo szorzasrol beszelunk, igy az eredmenynek megadhatjuk a megfelelo kezdoerteket

    // ez mukodhet ugy is, hogy az alapot adjuk meg kezdoerteknek
    // ekkor igy nezne ki:

    eredmeny=alap;

    // hogy is mukodik a for?
    // 3 blokkbol all
    // kezdo ertek (itt az int i = 1;
    // a feltetel (addig fut, amig ez a blokk igaz, mindig torzs vegen teszteli)
    // a 3. blokk a torzs vegen fut le,
    // jelen esetben az i-t noveljuk minden alkalommal eggyel
    // amig nem eri el a kitevo erteket ( i < kitevo )
    for (int i = 1; i < kitevo; ++i) {
        //ez a for torzse

        //az eredmeny erteke legyen az eredmeny jelenlegi erteke szorozva az alappal
        //tehet helyettesitsunk be
        //legyen pl az alap 3
        //kitevo pedig 4
        // eredmeny nevu dobozka legyen = 3 * 3
        // igy az eredmeny dobozka a 9-t takarja
        eredmeny = eredmeny * alap;

        // lefutott minden parancs a torzsben
        // igaz, hogy i < kitevo? ha igen, noveljuk az i-t eggyel
        // majd fusson le ujra a torzs

        // ekkor a for ciklusban az eredmeny = eredmeny * alap a kovetkezo lesz
        // legyen az eredmeny dobozka erteke = 9 * 3

        // lefutott minden parancs a torzsben
        // igaz, hogy i < kitevo? ha igen, noveljuk az i-t eggyel
        // majd fusson le ujra a torzs
    }

    return eredmeny;

    // masik megoldas lehet, ha az eredmeny alaperteke 1
    // ezt a kovetkezo fuggveny valositja meg - hatvanyozoEgy
    // vizsgaljuk meg mind a kettot, hasonlitsuk ossze
}

int hatvanyozoEgy(int alap, int kitevo){
    int eredmeny=1;
    for (int i = 0; i < kitevo; ++i) {
        eredmeny=eredmeny*alap;
    }
    return eredmeny;
}


// nem minden fuggveny ter vissza ertekkel
// ez a fuggveny szimplan kiirja csak konzolra a parameteret
// a legtobb kiiro fuggveny void, mivel nem kell visszaternie ertekkel

void kiIromAKapottSzamot(int kapottSzam){
    std::cout<<kapottSzam;

    std::cout<<std::endl;
    //sortores
}

void kiIromASzamokatEgytolAKapottSzamig(int kapottSzam){

    //Mi kell ehhez?

    //egy ciklis termeszetesen

    //Melyik ciklus megy vegig egymast koveto szamokon?

    //hat nana, hogy a for

    // honnan indulunk? egytol
    // meddig megyunk? a kapott szamig
    // mennyit lepunk minden alkalommal? egyet csak, hisz egymast koveto szamok

    for (int i = 1; i < kapottSzam+1; ++i) {
        //Miert kell a +1?
        //Mivel a < jel az eggyel kisebb szamig engedi csak, tehat csusztatom eggyel

        // mit kell kiirni? egymast koveto szamokat
        // mi az a valtozo, ami az egymast koveto szamokat tarolja?

        std::cout<< i;
        std::cout<<std::endl;
    }
}

// 2. feladat
// Irjunk egy programot, ami negyzetre emel egy szamot pozitiv egesz szamot
// Tegyuk fel, hogy retard a felhasznalo, igy vizsgaljuk, hogy biztosan pozitiv-e a szam
// Ha 1-nel kisebb a szam terjunk vissza nullaval

int pozitivNegyzetreEmeles(int szam){

    // forditsuk szo szerint magyarra
    // if = ha, tehat ha a szam kisebb mint egy, akkor terj vissza nullaval
    if(szam<1){
        return 0;
    } else{
        // ha nem kisebb mint egy
        // else = minden mas esetbe

        return szam*szam;
    }
}




//a main fuggveny a belepesi pontja a programnak
//lenyegeben, ha nagyon le szeretnenk egyszerusiteni
//akkor ugy vehetjuk, hogy csak a main fut le
//tehat mindent, amit le szeretnenk futtatni, azt a mainben kell hasznalnunk
int main() {

    //std::cout <<  = a console -ra (out) kiiras
    std::cout << "Hello, World!" << std::endl;


    std::cout << "hatvanyozo(3,4)" << std::endl;
    std::cout << hatvanyozo(3,4)<<std::endl;

    std::cout << "hatvanyozoEgy(3,4)" << std::endl;
    std::cout << hatvanyozoEgy(3,4)<<std::endl;

    std::cout << "kiIromAKapottSzamot(5)" << std::endl;
    kiIromAKapottSzamot(5);

    std::cout << "kiIromASzamokatEgytolAKapottSzamig(4)" << std::endl;
    kiIromASzamokatEgytolAKapottSzamig(4);

    return 0;
}