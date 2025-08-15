#define A 13
#define B 12
#define C 7
#define D 8
#define E 9
#define F 11
#define G 10

#define P1 3
#define P2 4
#define P3 5
#define P4 6

int vecNum0[] = { 0 , 0 , 0 , 0 };
int vecNum1[] = { 0 , 0 , 0 , 1 };
int vecNum2[] = { 0 , 0 , 1 , 0 };
int vecNum3[] = { 0 , 0 , 1 , 1 };
int vecNum4[] = { 0 , 1 , 0 , 0 };
int vecNum5[] = { 0 , 1 , 0 , 1 };
int vecNum6[] = { 0 , 1 , 1 , 0 };
int vecNum7[] = { 0 , 1 , 1 , 1 };
int vecNum8[] = { 1 , 0 , 0 , 0 };
int vecNum9[] = { 1 , 0 , 0 , 1 };

int vecLetraA[] = { 1 , 0 , 1 , 0 };
int vecLetraC[] = { 1 , 0 , 1 , 1 };
int vecLetraE[] = { 1 , 1 , 0 , 0 };
int vecLetraF[] = { 1 , 1 , 0 , 1 };
int vecLetraH[] = { 1 , 1 , 1 , 0 };
int vecLetraJ[] = { 1 , 1 , 1 , 1 };




void formarNumOletra(int a, int b, int c, int d, int e, int f, int g)
{
  digitalWrite(A,a);
  digitalWrite(B,b);
  digitalWrite(C,c);
  digitalWrite(D,d);
  digitalWrite(E,e);
  digitalWrite(F,f);
  digitalWrite(G,g);
  
}
///Funciones

void setup()
{
  Serial.begin(9800);
  
  pinMode(P1,INPUT);
  pinMode(P2,INPUT);
  pinMode(P3,INPUT);
  pinMode(P4,INPUT);
  
  int pin=7;
  while ( pin!=14 )
  {
    pinMode(pin,OUTPUT);
    pin=pin+1;
  }
}

void loop()
{
  int contador = 0;
  
	int v1 = digitalRead(P1);
  	int v2 = digitalRead(P2);
  	int v3 = digitalRead(P3);
  	int v4 = digitalRead(P4);
 	int vec[]={v1,v2,v3,v4};
  
 for (int i = 0 ; i < 4; i++)
 {
     if ( vec[i] == vecNum0[i])
     {
       contador = contador + 1;
     }
 }
if (contador == 4)
{
  formarNumOletra( 1 , 1 , 1 , 1 , 1 , 1 , 0 );
}
contador = 0;
////////////////
 for (int i = 0 ; i < 4; i++)
 {
     if ( vec[i] == vecNum1[i])
     {
       contador = contador + 1;
     }
 }
if (contador == 4)
{
  formarNumOletra( 0 , 1 , 1 , 0 , 0 , 0 , 0 );
}
contador = 0;
////////////////
 for (int i = 0 ; i < 4; i++)
 {
     if ( vec[i] == vecNum2[i])
     {
       contador = contador + 1;
     }
 }
if (contador == 4)
{
  formarNumOletra( 1 , 1 , 0 , 1 , 1 , 0 , 1 );
}
contador = 0;
////////////////
 for (int i = 0 ; i < 4; i++)
 {
     if ( vec[i] == vecNum3[i])
     {
       contador = contador + 1;
     }
 }
if (contador == 4)
{
  formarNumOletra( 1 , 1 , 1 , 1 , 0 , 0 , 1 );
}
contador = 0;
////////////////
 for (int i = 0 ; i < 4; i++)
 {
     if ( vec[i] == vecNum4[i])
     {
       contador = contador + 1;
     }
 }
if (contador == 4)
{
  formarNumOletra( 0 , 1 , 1 , 0 , 0 , 1 , 1 );
}
contador = 0;
////////////////
 for (int i = 0 ; i < 4; i++)
 {
     if ( vec[i] == vecNum5[i])
     {
       contador = contador + 1;
     }
 }
if (contador == 4)
{
  formarNumOletra( 1 , 0 , 1 , 1 , 0 , 1 , 1 );
  Serial.println("Mostrar: Numero 1 ");
}
contador = 0;
////////////////
 for (int i = 0 ; i < 4; i++)
 {
     if ( vec[i] == vecNum6[i])
     {
       contador = contador + 1;
     }
 }
if (contador == 4)
{
  formarNumOletra( 1 , 0 , 1 , 1 , 1 , 1 , 1 );
}
contador = 0;
////////////////
 for (int i = 0 ; i < 4; i++)
 {
     if ( vec[i] == vecNum7[i])
     {
       contador = contador + 1;
     }
 }
if (contador == 4)
{
  formarNumOletra( 1 , 1 , 1 , 0 , 0 , 0 , 0 );
}
contador = 0;
////////////////
 for (int i = 0 ; i < 4; i++)
 {
     if ( vec[i] == vecNum8[i])
     {
       contador = contador + 1;
     }
 }
if (contador == 4)
{
  formarNumOletra( 1 , 1 , 1 , 1 , 1 , 1 , 1 );
}
contador = 0;
////////////////
 for (int i = 0 ; i < 4; i++)
 {
     if ( vec[i] == vecNum9[i])
     {
       contador = contador + 1;
     }
 }
if (contador == 4)
{
  formarNumOletra( 1 , 1 , 1 , 0 , 0 , 1 , 1 ); 
}
contador = 0;
////////////////
 for (int i = 0 ; i < 4; i++)
 {
     if ( vec[i] == vecLetraA[i])
     {
       contador = contador + 1;
     }
 }
if (contador == 4)
{
  formarNumOletra( 1 , 1 , 1 , 0 , 1 , 1 , 1 );
}
contador = 0;
////////////////
 for (int i = 0 ; i < 4; i++)
 {
     if ( vec[i] == vecLetraC[i])
     {
       contador = contador + 1;
     }
 }
if (contador == 4)
{
  formarNumOletra( 1 , 0 , 0 , 1 , 1 , 1 , 0 );
}
contador = 0;
////////////////
 for (int i = 0 ; i < 4; i++)
 {
     if ( vec[i] == vecLetraE[i])
     {
       contador = contador + 1;
     }
 }
if (contador == 4)
{
  formarNumOletra( 1 , 0 , 0 , 1 , 1 , 1 , 1 );
}
contador = 0;
////////////////
 for (int i = 0 ; i < 4; i++)
 {
     if ( vec[i] == vecLetraF[i])
     {
       contador = contador + 1;
     }
 }
if (contador == 4)
{
  formarNumOletra( 1 , 0 , 0 , 0 , 1 , 1 , 1 );
}
contador = 0;
////////////////
 for (int i = 0 ; i < 4; i++)
 {
     if ( vec[i] == vecLetraH[i])
     {
       contador = contador + 1;
     }
 }
if (contador == 4)
{
  formarNumOletra( 0 , 1 , 1 , 0 , 1 , 1 , 1 );
}
contador = 0;
////////////////
 for (int i = 0 ; i < 4; i++)
 {
     if ( vec[i] == vecLetraA[i])
     {
       contador = contador + 1;
     }
 }
if (contador == 4)
{
  
  Serial.println("Mostrar: Numero 1 ");
}
contador = 0;
////////////////
 for (int i = 0 ; i < 4; i++)
 {
     if ( vec[i] == vecLetraJ[i])
     {
       contador = contador + 1;
     }
 }
if (contador == 4)
{
  formarNumOletra( 0 , 1 , 1 , 1 , 1 , 0 , 0 );
}
contador = 0;
////////////////
}