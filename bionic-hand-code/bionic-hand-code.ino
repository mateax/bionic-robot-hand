
/* *** English version under construction *** 
 *  For more information feel free to contact me
 * 
 * PREDMET: Mehatronika
 * PROJEKT: Bionička ruka
 */

#include <Servo.h>          // biblioteka za upravljanje servo motorima


//DEKLARIRANJE SVIH 5 SERVO MOTORA
Servo servo_motor1;         // servo motor za palac
Servo servo_motor2;         // servo motor za kažiprst
Servo servo_motor3;         // servo motor za srednjim prstom
Servo servo_motor4;         // servo motor za prstenjak
Servo servo_motor5;         // servo motor za mali prst

// SPAJANJE POTENCIOMETARA SA ANALOGNIM PINOVIMA NA ARDUINU
int an_ulaz_potenciometra  = 0;         // analogni pin za palac 
int an_ulaz_potenciometra2 = 1;         // analogni pin za kažiprst
int an_ulaz_potenciometra3 = 2;         // analogni pin za srednji prst
int an_ulaz_potenciometra4 = 3;         // analogni pin za prstenjak 
int an_ulaz_potenciometra5 = 4;         // analogni pin za mali prst 

//INICIJALIZACIJA VARIJABLI KOJE SLUŽE ZA ČITANJE VRIJEDNOSTI S ANALOGNOG ULAZA
int vrijednost_potenciometara  = 0;     // vrijednosti koje dobijemo od potenciometara- (zaklon potenciometra), tj to je varijabla koja služi da spremimo vrijednost otpora koja dolazi sa potenciometra i koja ide od 0 do 1023
int vrijednost_potenciometara2 = 0;
int vrijednost_potenciometara3 = 0;
int vrijednost_potenciometara4 = 0;
int vrijednost_potenciometara5 = 0;



void setup()
{
//dodjeljivanje izlaza za servo motore
//sintaksa izgleda: servo.attach(pin) gdje je pin broj ulaza na koji se spaja servo motor

servo_motor1.attach(9);    // funkcija koja dodjeljuje izlaz 9 servo motoru
servo_motor2.attach(10);   // dodjeljuje izlaz 10
servo_motor3.attach(11);   // dodjeljuje izlaz 11
servo_motor4.attach(12);   // dodjeljuje izlaz 12 
servo_motor5.attach(13);   // dodjeljuje izlaz 13

}




//UPRAVLJANJE POJEDINIM PRSTIMA RUKE
void loop()
{
/*ograničavamo vrijednost potenciometra jer potenciometar ne vrši cijeli krug
normalna vrijednost_potenciometara je između (1, 1023) 
funkcija map služi za prebacivanje vrijednosti brojeva iz jednog raspona brojeva u drugi drugi (konvertira brojeve iz jednog skupa u drugi)= SKALIRANJE
*/

/*Pomoću naredbe analogRead očitavamo vrijednost ulaza A0 (na arduinu) te tu vrijednost pohranimo u varijablu vrijednost_potenciometara. 
Kako se očitana vrijednost kreće u razmjerima od 1 do 1023, a PWM modulacija prihvaća za izlaznu vrijednost raspon od 0 do 255 potrebno je skalirati ulaznu vrijednost.
To činimo pomoću funkcije map u kojoj kao argumente dajemo varijablu koju želimo skalirati, te minimale i maksimalne ulazne i izlazne vrijednosti.
U našem slučaju mi skaliramo za potenciometar u rangu od 0 do 180, ali zbog smo ograničili okret potenciometra na vrijednost 176
Na kraju smo dodali delay(25) kako bi se ažuriranje vrijednosti obavljalo svakih 25 milisekundi
*/



//palac
vrijednost_potenciometara = analogRead(an_ulaz_potenciometra);                   // pročitaj vrijednost potenciometra koja je od  0 do 1023
vrijednost_potenciometara = map(vrijednost_potenciometara, 1, 1023, 0, 176);     // prebaci u vrijednosti potrebne za servo motor od 0 do 176
                                                                                 // map je funkcija koja vrijednosti brojeva prebacacuje iz jednog raspona u drugi, 
                                                                                 // ...odnosno vrijednosti analognih ulaza tj analogno digitalnog konvertera koji idu od 0 - 1023 
                                                                                 // ...prebacuje u vrijednost potrebne za servo motore u stupnjevima (*SKALIRA IH)
servo_motor1.write(vrijednost_potenciometara);                                   // pozicioniraj servo motor prema prethodno skaliranoj vrijednosti 
delay(25);                                                                       // čekanje dok servo ne dođe do željene pozicije




// kažiprst
vrijednost_potenciometara2 = analogRead(an_ulaz_potenciometra2);                  // pročitaj vrijednost potenciometra koja je od  0 do 1023
vrijednost_potenciometara2 = map(vrijednost_potenciometara2, 1, 1023, 0, 176);    // prebaci u vrijednosti potrebne za servo motor
servo_motor2.write(vrijednost_potenciometara2);                                   // pozicioniraj servo motor prema prethodno skaliranoj vrijednosti 
delay(25);                                                                        // čekanje dok servo ne dođe do željene pozicije



//srednji prst
vrijednost_potenciometara3 = analogRead(an_ulaz_potenciometra3);                  // pročitaj vrijednost potenciometra koja je od  0 do 1023
vrijednost_potenciometara3 = map(vrijednost_potenciometara3, 1, 1023, 0, 175);    // prebaci u vrijednosti potrebne za servo motor
servo_motor3.write(vrijednost_potenciometara3);                                   // pozicioniraj servo motor prema prethodno skaliranoj vrijednosti 
delay(25);                                                                        // čekanje dok servo ne dođe do željene pozicije


//prstenjak
vrijednost_potenciometara4 = analogRead(an_ulaz_potenciometra4);                 // pročitaj vrijednost potenciometra koja je od  0 do 1023
vrijednost_potenciometara4 = map(vrijednost_potenciometara4, 1, 1023, 0, 175);   // prebaci u vrijednosti potrebne za servo motor
servo_motor4.write(vrijednost_potenciometara4);                                  // pozicioniraj servo motor prema prethodno skaliranoj vrijednosti 
delay(25);                                                                       // čekanje dok servo ne dođe do željene pozicije


//mali prst
vrijednost_potenciometara5 = analogRead(an_ulaz_potenciometra5);                 // pročitaj vrijednost potenciometra koja je od  0 do 1023
vrijednost_potenciometara5 = map(vrijednost_potenciometara5, 1, 1023, 0, 175);   // prebaci u vrijednosti potrebne za servo motor
servo_motor5.write(vrijednost_potenciometara5);                                  // pozicioniraj servo motor prema prethodno skaliranoj vrijednosti 
delay(25);                                                                       // čekanje dok servo ne dođe do željene pozicije


}
