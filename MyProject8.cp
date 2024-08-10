#line 1 "D:/MikroeExam/MyProject8.c"
bit oldstate;

void main() {

 ANSEL = 0;
 ANSELH = 0;
 C1ON_bit = 0;
 C2ON_bit = 0;

 TRISB0_bit = 1;

 TRISC = 0x00;
 PORTC = 0xAA;
 oldstate = 0;

 do {
 if (Button(&PORTB, 0, 1, 1)) {
 oldstate = 1;
 }
 if (oldstate && Button(&PORTB, 0, 1, 0)) {
 PORTC = ~PORTC;
 oldstate = 0;
 }
 } while(1);
}
