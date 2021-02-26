#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<math.h>
#include <time.h>
#include <stdlib.h>
#define IZQUIERDA 75
#define DERECHA   77

using namespace std;

//-----Menu General-------------------------------------------------------------------
void menu_general(){
	cout<<" __________________________________________________________"<<endl;
	cout<<"|                                                          |"<<endl;
	cout<<"|                   20 PROGRAMAS EN C++                    |"<<endl;
	cout<<"|같같같같같같같같같같같같같같같같같같같같같같같같같같같같같|"<<endl;
	cout<<"|__________________________________________________________|"<<endl;	
	cout<<"|                                                          |"<<endl;
	cout<<"| 1. SUMA, RESTA, MULTIPLICACION Y DIVICION DE DOS NUMEROS |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;	
	cout<<"|                                                          |"<<endl;	
	cout<<"| 2. DETERMINAR SI UN NUMERO ES PAR O IMPAR                |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;	
	cout<<"|                                                          |"<<endl;	
	cout<<"| 3. CONVERTIR KM A MILL, M A PULG, LB A KG                |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;
	cout<<"|                                                          |"<<endl;	
	cout<<"| 4. DETERMINAR SI UN NUMERO ES POLINDROMO                 |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;
	cout<<"|                                                          |"<<endl;	
	cout<<"| 5. CONVERSION DE NUMEROS ARABICOS A ROMANOS              |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;
	cout<<"|                                                          |"<<endl;	
	cout<<"| 6. CONVERSION DE NUMEROS ENTEROS A LETRAS                |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;
	cout<<"|                                                          |"<<endl;	
	cout<<"| 7. CONVERSION DE NUMEROS DECIMALES A LETRAS      X       |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;
	cout<<"|                                                          |"<<endl;	
	cout<<"| 8. UNA TABLA DE MULTIPLICAR                              |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;
	cout<<"|                                                          |"<<endl;	
	cout<<"| 9. TABLAS DE MULTIPLICAR DEL 1 AL 10                     |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;
	cout<<"|                                                          |"<<endl;	
	cout<<"| 10. FORMA GRAFICA DE MULTIPLICACION                      |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;
	cout<<"|                                                          |"<<endl;	
	cout<<"| 11. CONVERSION DE NUMEROS DECIMALES A BINARIO            |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;
	cout<<"|                                                          |"<<endl;	
	cout<<"| 12. CONVERSION DE NUMEROS DECIMALES A HEXADECIMALES      |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;
	cout<<"|                                                          |"<<endl;	
	cout<<"| 13. CREAR FIGURAS GEOMETRICAS BASICAS     X              |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;
	cout<<"|                                                          |"<<endl;	
	cout<<"| 14. MOVER UN PUNTO EN TODA LA PANTALLA                   |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;
	cout<<"|                                                          |"<<endl;	
	cout<<"| 15. SIMULACION DE UN CAJERO AUTOMATICO                   |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;
	cout<<"|                                                          |"<<endl;	
	cout<<"| 16. CALCULAR LA HIPOTENUSA                               |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;
	cout<<"|                                                          |"<<endl;	
	cout<<"| 17. SUMAR VARIOS NUMEROS                                 |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;
	cout<<"|                                                          |"<<endl;	
	cout<<"| 18. ADIVINAR UN NUMERO RANDOM                            |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;
	cout<<"|                                                          |"<<endl;	
	cout<<"| 19. JUEGO PARA MEJORAR MEMORIA                           |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;
	cout<<"|                                                          |"<<endl;	
	cout<<"| 20. JUEGO DE NAVE                                        |"<<endl;
	cout<<"|__________________________________________________________|"<<endl;
	cout<<"               |                           |"<<endl;	
	cout<<"               | 21. SALIR                 |"<<endl;
	cout<<"               |___________________________|"<<endl;
}

//-----Menu Programa 1-------------------------------------------------------------------
void menu_1(){
	cout<<" ________________________________________"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"|       OPERACOPMES CON 2 NUMEROS        |"<<endl;
	cout<<"|________________________________________|"<<endl;	
	cout<<"|                                        |"<<endl;
	cout<<"|    1. SUMAR                            |"<<endl;
	cout<<"|________________________________________|"<<endl;	
	cout<<"|                                        |"<<endl;	
	cout<<"|    2. RESTAR                           |"<<endl;
	cout<<"|________________________________________|"<<endl;	
	cout<<"|                                        |"<<endl;	
	cout<<"|    3. MULTIPLICAR                      |"<<endl;
	cout<<"|________________________________________|"<<endl;
	cout<<"|                                        |"<<endl;	
	cout<<"|    4. DIVIDIR                          |"<<endl;
	cout<<"|________________________________________|"<<endl;
	cout<<"|                                        |"<<endl;	
	cout<<"|    5. SALIR AL MENU GENERAL            |"<<endl;
	cout<<"|________________________________________|"<<endl;
}

//-----Variables programa 3------------------------------------------------
float medida, conversion;

//-----CONVERSION DE KILOMETROS A MILLAS----------------------------------------
void kilometros_millas()
{
	// 1 km = 0.621371 mill
	system("CLS");
	double millas=0.621371;
	cout<<" ________________________________________"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"|   CONVERSION DE KILOMETROS A MILLAS    |"<<endl;
	cout<<"|________________________________________|"<<endl;	
	cout<<"| Ingrese los kilometros : ";
	cin>>medida;
	conversion = medida*millas;
	cout<<"| "<<medida<<" km = "<<conversion<<" mill"<<endl;
	cout<<"|________________________________________|"<<endl;	
}

//-----CONVERSION DE MILLAS A KILOMETROS----------------------------------
void millas_kilometros()
{
	// 1 km = 0.621371 mill
	system("CLS");
	double millas=0.621371;
	cout<<" ________________________________________"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"|   CONVERSION DE MILLAS A KILOMETROS    |"<<endl;
	cout<<"|________________________________________|"<<endl;	
	cout<<"| Ingrese las millas : ";
	cin>>medida;
	conversion = medida/millas;
	cout<<"| "<<medida<<" mill = "<<conversion<<" km"<<endl;
	cout<<"|________________________________________|"<<endl;	
}

//-----CONVERSION DE METROS A PULGADAS-----------------------------------------
void metros_pulgadas()
{
	// 1 metro = 39.37 pulgadas
	system("CLS");
	double pulgadas=39.37;
	cout<<" ________________________________________"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"|    CONVERSION DE METROS A PULGADAS     |"<<endl;
	cout<<"|________________________________________|"<<endl;	
	cout<<"| Ingrese los metros : ";
	cin>>medida;
	conversion = medida*pulgadas;
	cout<<"| "<<medida<<" m = "<<conversion<<" pulg"<<endl;
	cout<<"|________________________________________|"<<endl;	
}

//-----CONVERSION DE PULGADAS A METROS---------------------------------------
void pulgadas_metros()
{
	// 1 metro = 39.37 pulgadas
	system("CLS");
	double pulgadas=39.37;
	cout<<" ________________________________________"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"|    CONVERSION DE PULGADAS A METROS     |"<<endl;
	cout<<"|________________________________________|"<<endl;	
	cout<<"| Ingrese las pulgadas: ";
	cin>>medida;
	conversion = medida/pulgadas;
	cout<<"| "<<medida<<" pulg = "<<conversion<<" m"<<endl;
	cout<<"|________________________________________|"<<endl;	
}

//-----CONVERSION DE LIBRAS A KILOS-----------------------------------------
void libras_kilos()
{
	// 1 kilo = 2.20462 libras
	system("CLS");
	double libras=2.20462;
	cout<<" ________________________________________"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"|     CONVERSION DE LIBRAS A KILOS       |"<<endl;
	cout<<"|________________________________________|"<<endl;	
	cout<<"| Ingrese las libras: ";
	cin>>medida;
	conversion = medida*libras;
	cout<<"| "<<medida<<" lb = "<<conversion<<" kg"<<endl;
	cout<<"|________________________________________|"<<endl;	
}

//-----CONVERSION DE KILOS A LIBRAS------------------------------------------
void kilos_libras()
{
	// 1 kilo = 2.20462 libras
	system("CLS");
	double libras=2.20462;
	cout<<" ________________________________________"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"|     CONVERSION DE KILOS A LIBRAS       |"<<endl;
	cout<<"|________________________________________|"<<endl;	
	cout<<"| Ingrese los kilos: ";
	cin>>medida;
	conversion = medida/libras;
	cout<<"| "<<medida<<" kg = "<<conversion<<" lb"<<endl;
	cout<<"|________________________________________|"<<endl;	
}

//-----MENU programa 3-------------------------------------------------------
void menu()
{
	cout<<" ________________________________________"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"|         MENU DE CONVERSIONES           |"<<endl;
	cout<<"|________________________________________|"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"| 1. Kilometros a Millas                 |"<<endl;
	cout<<"|________________________________________|"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"| 2. Millas a Kilometros                 |"<<endl;
	cout<<"|________________________________________|"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"| 3. Metros a Pulgadas                   |"<<endl;
	cout<<"|________________________________________|"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"| 4. Pulgadas a Metros                   |"<<endl;
	cout<<"|________________________________________|"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"| 5. Libras a Kilos                      |"<<endl;
	cout<<"|________________________________________|"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"| 6. Kilos a Libras                      |"<<endl;
	cout<<"|________________________________________|"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"| 7. Salir al Menu General               |"<<endl;
	cout<<"|________________________________________|"<<endl;
}

//-----Variables programa 4-----------------------------------------------------
int invertir(int n);
bool esPalindromo(int n);

//-----menu polindromo programa 4-------------------------------------------
void menupol(){
	cout<<" ________________________________________"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"|       QUE TIPO DE DATO INGRESARA       |"<<endl;
	cout<<"|________________________________________|"<<endl;	
	cout<<"|                                        |"<<endl;
	cout<<"|    1. PALABRA                          |"<<endl;
	cout<<"|________________________________________|"<<endl;	
	cout<<"|                                        |"<<endl;	
	cout<<"|    2. NUMERO                           |"<<endl;
	cout<<"|________________________________________|"<<endl;	
	cout<<"|                                        |"<<endl;	
	cout<<"|    3. SALIR                            |"<<endl;
	cout<<"|________________________________________|"<<endl;
}

//-----Menu Programa 5----------------------------------------------
void menuej5(){
	cout<<" ________________________________________"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"|COMVERTIR DE NUMEROS ARABIGOS A ROMANOS |"<<endl;
	cout<<"|________________________________________|"<<endl;	
	cout<<"|                                        |"<<endl;
	cout<<"|    1. ARABIGOS A ROMANOS               |"<<endl;
	cout<<"|________________________________________|"<<endl;	
	cout<<"|                                        |"<<endl;	
	cout<<"|    2. ROMANOS A ARABIGOS               |"<<endl;
	cout<<"|________________________________________|"<<endl;	
	cout<<"|                                        |"<<endl;	
	cout<<"|    3. SALIR                            |"<<endl;
	cout<<"|________________________________________|"<<endl;
}

//-----Metodos Programa 10---------------------------------------------
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 
void control();

//-----Metodos programa 19------------------------------------------------
int ingreso[100];

//ingreso numero memorizado

void inicio(int level);

void continuar(int level){
	int seleccion = 0;
	
	cout<<" ________________________________________"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"|     DESEA CONTINUAR CON EL JUEGO?      |"<<endl;
	cout<<"|________________________________________|"<<endl;
	cout<<"|                   |                    |"<<endl;
	cout<<"|       1. SI       |        2. NO       |"<<endl;
	cout<<"|___________________|____________________|"<<endl;
	cin>>seleccion;
	if(seleccion==1){
		inicio(level+1);
	}
}

//ingreso de los valores por parte del jugador
void ing_num_memor(int level){
// atributo

string num_ingresado="";
int aux=0;

for(int j=0;j<level;j++){
	cout<<"Ingrese el valor memorizado numero "<<j+1<<" con enter"<<endl;
	cin>>num_ingresado;
	
// se convierte de string a entero
	aux = atoi(num_ingresado.c_str());
	ingreso[j]=aux;
	}
}

//incio del juego
void inicio(int level){
	
// arreglo para almacenar valores dados al azar
	int memoria[level];
	int opcion=0;
	
	system("CLS");
	
	cout<<" ________________________________________"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"|    NIVEL "<<level<<"                            |"<<endl;
	cout<<"|________________________________________|"<<endl;
	
// asignamos los valores dados al azar con la funcion rand()
	srand(time(NULL));
	for(int i=0;i<level;i++){
		cout<<" ______"<<endl;
		cout<<"|  ";
		memoria[i] = rand()%100;
		cout<<memoria[i];
		cout<<"  | "<<endl;
		}
		
	cout<<"Oprima una tecla cuando memorice los numeros"<<endl;
	system("PAUSE");
	
	system("CLS");
	
	ing_num_memor(level);
	
//contador: incrementa a medida que se comparan los datos
	int contador = 0;
	
	do{
		if(memoria[contador]==ingreso[contador]){
		contador++;
		}
		else{
			cout<<"Los valores ingresados no son iguales, intente nuevamente"<<endl;
			cout<<"   1. SEGUIR 	|	 2. SALIR		"<<endl;
			cin>>opcion;
			if(opcion!=2){
				ing_num_memor(level);
				contador = 0;
			}
		else{
			break;
			}
		}
	
	}while(contador<level);
	
	cout<<"Felicitaciones, usted tiene muy buena memoria \n"<<endl;
	continuar(level);
	system("CLS");	
}	

/* menu del juego */
void menu_19(){
	
	cout<<" ________________________________________"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"|    BIENVENIDO AL JUEGO DE MEMORIA      |"<<endl;
	cout<<"|________________________________________|"<<endl;	
	cout<<"|                                        |"<<endl;
	cout<<"|    1. INICIAR                          |"<<endl;
	cout<<"|________________________________________|"<<endl;	
	cout<<"|                                        |"<<endl;	
	cout<<"|    2. NIVEL                            |"<<endl;
	cout<<"|________________________________________|"<<endl;	
	cout<<"|                                        |"<<endl;	
	cout<<"|    3. SALIR                            |"<<endl;
	cout<<"|________________________________________|"<<endl;
}

int ingreso_nivel(){
	int level = 0;
	cout<<"Ingrese el nivel: ";
	cin>>level;
	while((level<=0)||(level>100)){
		cout<<"El nivel maximo es de 100 y minimo de 1"<<endl;
		cin>>level;
	}
	return level;
}

//mensaje bienvenidos
void mensaje (void){
	system("cls");
	cout<<"\t\n****   ***  *****  *   *  *   *  *****  *   *  ***  ***     **   *****\n";
	cout<<"*   *   *   *      **  *  *   *  *      **  *   *   *  *   *  *  *    \n";
	cout<<"****    *   ***    * * *  *   *  ***    * * *   *   *   *  *  *  *****\n";
	cout<<"*    *  *   *      *  **   * *   *      *  **   *   *  *   *  *      *\n";
	cout<<"*****  ***  *****  *   *    *    *****  *   *  ***  ***     **   *****\n";
}

//mensaje Game over
void over (void){
	cout<<"\t\n****   **   *   *  ****      **   *   *  ****  *** \n";
	cout<<"*     *  *  ** **  *        *  *  *   *  *     *  *\n";
	cout<<"*     ****  * * *  ***      *  *  *   *  ***   *** \n";
	cout<<"* **  *  *  *   *  *        *  *   * *   *     * * \n";
	cout<<"****  *  *  *   *  ****      **     *    ****  *  *\n";
}

//-----Metodos programa 20----------------------------------------------
char avion_l1[]={' ',' ',' ', '*',' ',' ',' ',0};       // dibujo del avion 
char avion_l2[]={' ',' ','*', '*','*',' ',' ',0};		
char avion_l3[]={' ','*',' ', '*',' ','*',' ',0};

char explocion_l1[]={' ',' ','*','*',' ',' ',' ',0};    // dibujo de la explosion 1 del avion
char explocion_l2[]={' ','*','*','*','*',' ',' ',0};
char explocion_l3[]={' ',' ','*','*',' ',' ',' ',0};

char explocion_r1[]={'*',' ','*','*',' ','*',' ',0};    // dibujo de la explocion 2 del avion
char explocion_r2[]={' ','*','*','*','*',' ',' ',0};
char explocion_r3[]={'*',' ','*','*',' ','*',' ',0};

char borrar_avion[]={' ',' ',' ',' ',' ',' ',' ',0};	// lo usare para borrar las lineas del avion

int Num_vidas = 3;
int Corazones = 3;
int ix = 40;
int iy = 19;

int y = 8 , x = 12;
int yy = 12 , xx = 17;
int x1 = 58 , y4 = 6;
int x2 = 70 , y2 = 9;

int i,v;

//variables para disparo
int dd=0;
bool disparo = false;
int xb;

// variables para rutina de cambio de nivel
int repeticion = 0 , nivel = 1;
bool condicion = false;

//instruccion para vidas
void vidas(int vi)
{
	gotoxy(2,1); printf("VIDAS %d",vi);
}

void Barra_salud(int n)
{
	gotoxy(72,1); printf(" ");
	gotoxy(73,1); printf(" ");
	gotoxy(74,1); printf(" ");
	
	for(v = 0; v < n ; v++)
	{
		//imprime el simbolo de corazones
		gotoxy(72+v,1);
		printf("%c",3);
	}

}

void Explocion(void)
{
	gotoxy(ix,iy); puts(explocion_l1);
	gotoxy(ix,iy+1); puts(explocion_l2);
	gotoxy(ix,iy+2); puts(explocion_l3);
	
	Sleep(380);
	
	gotoxy(ix,iy); puts(explocion_r1);
	gotoxy(ix,iy+1); puts(explocion_r2);
	gotoxy(ix,iy+2); puts(explocion_r3);
	
	Sleep(380);
	
	gotoxy(ix,iy); puts(avion_l1);
	gotoxy(ix,iy+1); puts(avion_l2);
	gotoxy(ix,iy+2); puts(avion_l3);
	
}

void jugar(void)
{
	if(!disparo) xb = ix;
	gotoxy(xb+3 , iy+dd); printf("*");
	
	// rutina de los asteroides
	gotoxy(x,y); printf("%c",2);
	gotoxy(xx,yy); printf("%c",2);
	gotoxy(x1,y4); printf("%c",2);
	gotoxy(x2,y2); printf("%c",2);
	
	Sleep(70);
	
	gotoxy(x,y); printf(" ");
	gotoxy(xx,yy); printf(" ");
	gotoxy(x1,y4); printf(" ");
	gotoxy(x2,y2); printf(" ");
	
	//borrar disparo y pintarlo +1 arriba
	gotoxy(xb+3 , iy+dd); printf(" ");
	if(disparo == true) dd--;
	if(iy + dd < 5){
		dd = 0;
		disparo = false;
	}
	
	//rutina asteroides
	if (y > 20 || x == xb+3 && iy+dd <= y)
	{
		y = 4;
		x = (rand() % 70) +6;
		
		if (y == 4)
		condicion = false;
		
	}
	
	if (yy > 20 || xx == xb+3 && iy+dd <= yy)
	{
		yy = 4;
		xx = (rand() % 70) +6;
	}
	
	if (y4 > 20 || x1 == xb+3 && iy+dd <= y4)
	{
		y4 = 4;
		x1 = (rand() % 70) +6;
	}
	
	if (y2 > 20 || x2 == xb+3 && iy+dd <= y2)
	{
		y2 = 4;
		x2 = (rand() % 70) +6;
	}
	
	// rutina para mover avion
	
	if(kbhit())
	{
		unsigned char tecla = getch();
		
		switch (tecla)
		{
			case IZQUIERDA:
				 
				if( ix > 4)
				{
				 	gotoxy(ix,iy); puts(borrar_avion);
				 	gotoxy(ix,iy+1); puts(borrar_avion);
				 	gotoxy(ix,iy+2); puts(borrar_avion);
				 	
				 	// ix = ix -2;
				 	ix -=2; 
				 	
				 	gotoxy(ix,iy); puts(avion_l1);
				 	gotoxy(ix,iy+1); puts(avion_l2);
				 	gotoxy(ix,iy+2); puts(avion_l3);
				}
				break;
				 
			case DERECHA:
				
			    if(ix <70)
				{
					gotoxy(ix,iy); puts(borrar_avion);
				 	gotoxy(ix,iy+1); puts(borrar_avion);
				 	gotoxy(ix,iy+2); puts(borrar_avion);
				 	
				 	// ix = ix +2;
					 ix +=2;
				 	
				 	gotoxy(ix,iy); puts(avion_l1);
				 	gotoxy(ix,iy+1); puts(avion_l2);
				 	gotoxy(ix,iy+2); puts(avion_l3);
				}
				break;
			
			case 'd':
				disparo = true;
			break;
						 
		} // fin del switch
		
	} // fin del if
	
	// rutina para golpes de asteroides
	
	if( (x > ix && x<ix + 6 && y == iy-1) || (xx > ix && xx<ix + 6 && yy == iy-1)
	|| (x1 > ix && x1<ix + 6 && y4 == iy-1) || (x2 > ix && x2<ix + 6 && y2 == iy-1))
	{
		Corazones --;
		Barra_salud(Corazones);
		printf("\a");
	}
	
		gotoxy(ix,iy); puts(avion_l1);
		gotoxy(ix,iy+1); puts(avion_l2);
	 	gotoxy(ix,iy+2); puts(avion_l3);
	 	
	 	if(!Corazones){   // ! = negacion
	 		Num_vidas--;
	 		vidas(Num_vidas);
	 		Explocion();
	 		Corazones = 3;
	 		
	 		Barra_salud(Corazones);
		 }
		 
		 //rutina para cambio de nivel
		 if(!condicion){ // ! = negacion
		 	
		 	repeticion ++;
		 	condicion = true;
		 	
		 }
		 
		//tiempo de juego por nivel
		 if(repeticion == 5){
		 	
		 	nivel++;
		 	gotoxy(35, 1); printf("NIVEL %i",nivel);
		 	
		 	gotoxy(ix, iy); puts(borrar_avion);
		 	gotoxy(ix, iy+1); puts(borrar_avion);
		 	gotoxy(ix, iy+2); puts(borrar_avion);
		 	
		 	iy -= 2; // iy = iy - 2
		 	
		 	gotoxy(ix, iy); puts(avion_l1);
		 	gotoxy(ix, iy+1); puts(avion_l2);
		 	gotoxy(ix, iy+2); puts(avion_l3);
		 	
		 	repeticion = 0;
		 	
		 }
	
	y++; 
	yy++; 
	y4++; 
	y2++;
	
}

int main(int argc, char *argv[])
{
	int opcionG;
	
	while(opcionG!=21){
	system("cls");
	menu_general();
	cout<<"Opcion: ";
	cin>>opcionG;
	
//-----Metodos programa 14------------------------------------
char opcionp;
int x=10,y=10;

//-----Programa 1-----------------------------------
if(opcionG==1){
	double num1=0,num2=0,tot=0;
	int op = 0;
	
		while(op!=5){
		system("cls");
		menu_1();	
		cout<<"\nOpcion: ";
		cin>>op;
		
		if(op==1){
			system("CLS");
		    cout<<" ________________________________________"<<endl;
			cout<<"|                                        |"<<endl;
			cout<<"|                 SUMA                   |"<<endl;
			cout<<"|________________________________________|"<<endl;
			cout<<"|                                        |"<<endl;
			cout<<"| Ingrese los dos numeros a Sumar        |"<<endl;
			cout<<"| Primer numero: ";
			cin>>num1;
			cout<<"| Segundo numero: ";
			cin>>num2;
			cout<<"|________________________________________|"<<endl;
			
			tot = num1+num2;
			
			cout<<"|                                        |"<<endl;
			cout<<"| "<<num1<<" + "<<num2<<" = "<<tot<<endl;
			cout<<"| El resultado es: "<<tot<<endl;	
			cout<<"|________________________________________|"<<endl;
			system("PAUSE");
			system("CLS");	
		}
		
		
		if(op==2){
			system("CLS");
			cout<<" ________________________________________"<<endl;
			cout<<"|                                        |"<<endl;
			cout<<"|                 RESTA                  |"<<endl;
			cout<<"|________________________________________|"<<endl;
			cout<<"|                                        |"<<endl;
			cout<<"| Ingrese los dos numeros a Restar       |"<<endl;
			cout<<"| Primer numero: ";
			cin>>num1;
			cout<<"| Segundo numero: ";
			cin>>num2;
			cout<<"|________________________________________|"<<endl;
			
			tot = num1-num2;
			
			cout<<"|                                        |"<<endl;
			cout<<"| "<<num1<<" - "<<num2<<" = "<<tot<<endl;
			cout<<"| El resultado es: "<<tot<<endl;	
			cout<<"|________________________________________|"<<endl;
			system("PAUSE");
			system("CLS");	
		}
		
		if(op==3){
			system("CLS");
			cout<<" ________________________________________"<<endl;
			cout<<"|                                        |"<<endl;
			cout<<"|            MULTIPLICACION              |"<<endl;
			cout<<"|________________________________________|"<<endl;
			cout<<"|                                        |"<<endl;
			cout<<"| Ingrese los dos numeros a Multiplicar  |"<<endl;
			cout<<"| Primer numero: ";
			cin>>num1;
			cout<<"| Segundo numero: ";
			cin>>num2;
			cout<<"|________________________________________|"<<endl;
			
			tot = num1*num2;
			
			cout<<"|                                        |"<<endl;
			cout<<"| "<<num1<<" * "<<num2<<" = "<<tot<<endl;
			cout<<"| El resultado es: "<<tot<<endl;	
			cout<<"|________________________________________|"<<endl;
			system("PAUSE");
			system("CLS");	
		}
		
		if(op==4){
			system("CLS");
			cout<<" ________________________________________"<<endl;
			cout<<"|                                        |"<<endl;
			cout<<"|                DIVICION                |"<<endl;
			cout<<"|________________________________________|"<<endl;
			cout<<"|                                        |"<<endl;
			cout<<"| Ingrese los dos numeros a Divicion     |"<<endl;
			cout<<"| Primer numero: ";
			cin>>num1;
			cout<<"| Segundo numero: ";
			cin>>num2;
			cout<<"|________________________________________|"<<endl;
			
			tot = num1/num2;
			
			cout<<"|                                        |"<<endl;
			cout<<"| "<<num1<<" / "<<num2<<" = "<<tot<<endl;
			cout<<"| El resultado es: "<<tot<<endl;	
			cout<<"|________________________________________|"<<endl;
			system("PAUSE");
			system("CLS");	
		}
		
		if(op==5){
		}
	}
}//-----Fin programa 1------------------------------------------

//-----Programa 2-----------------------------------------------
if(opcionG==2){
	system("cls");
	  int numero;
  printf("DETERMINAR SI UN NUMERO ES PAR O IMPAR\n");
  printf("Escribe un numero:\n");
  scanf("%d", &numero);
  if (numero % 2 == 0) {
    printf("Es par\n");
  } else {
    printf("Es impar\n");
  }
  system("pause");
}//-----Fin programa 2-------------------------------------------

//-----Programa 3-------------------------------------------------
if(opcionG==3){
	int op=0;

		while(op!=7){
		system("CLS");
		menu();
		cout<<"Opcion: ";
		cin>>op;
		
		if(op==1){
			kilometros_millas();
			system("PAUSE");
		}
		if(op==2){
			millas_kilometros();
			system("PAUSE");
		}
		if(op==3){
			metros_pulgadas();
			system("PAUSE");
		}
		if(op==4){
			pulgadas_metros();
			system("PAUSE");
		}
		if(op==5){
			libras_kilos();
			system("PAUSE");
		}
		if(op==6){
			kilos_libras();
			system("PAUSE");
		}
		if(op==7){
		}
	}
}//-----Fin Programa 3-------------------------------------------

//-----Programa 4------------------------------------------------
if(opcionG==4){
		int op;

	while(op!=3){
	system("cls");
	menupol();
	cout<<"Opcion: ";
	cin>>op;
	
	if(op==1){
	char cadena[100],copia[100];
cout<<"ingrese palabra :"<<endl;
gets(cadena);                            // ERROR EN EL GETS NO ALMACENA PALABRA
for(int i=(strlen(cadena)-1);i>=0;i--){
  copia[strlen(cadena)-1-i]=cadena[i];
 }
 copia[strlen(cadena)]='\0';
 if(strcmp(cadena,copia)==0){
  cout<<"Es palindroma";
 }else{
  cout<<"No es palindroma";
 }
	}
	
	if(op==2){
			int n;
	cout<<"Ingrese un numero: "<<endl;
	cout<<"n = "; cin>>n;
	if(esPalindromo(n)){
		cout<<"Es palindromo"<<endl;
		system("pause");
	}
	else{
		cout<<"No es palindromo"<<endl;
		system("pause");

	}
	}
}
}//-----Fin Programa 4------------------------------------------

//-----Programa 5----------------------------------------------------
if(opcionG==5){
		int opej5 = 0;
	
		while(opej5!=3){
		system("cls");
		menuej5();	
		cout<<"\nOpcion: ";
		cin>>opej5;

// ARABIGOS A ROMANOS--------------------------------------		
		if(opej5==1){
			system("CLS");
	int numero,unidades,decenas,centenas,millar;
	
	printf("Ingresa un numero: ");
	scanf("%d",&numero);
	
	unidades = numero%10;
	numero /=10;
	
	decenas = numero%10;
	numero /=10;
	
	centenas = numero%10;
	numero /=10;
	
	millar = numero%10;
	
	switch(millar){
		case 1: printf("M");break;
		case 2: printf("MM");break;
		case 3: printf("MMM");break;
	}
	
	switch(centenas)
	{
		case 1: printf("C");break;
		case 2: printf("CC");break;
		case 3: printf("CCC");break;
		case 4: printf("CD");break;
		case 5: printf("D");break;
		case 6: printf("DC");break;
		case 7: printf("DCC");break;
		case 8: printf("DCCC");break;
		case 9: printf("CM");break;
	}
	
	switch(decenas)
	{
		case 1: printf("X");break;
		case 2: printf("XX");break;
		case 3: printf("XXX");break;
		case 4: printf("XL");break;
		case 5: printf("L");break;
		case 6: printf("LX");break;
		case 7: printf("LXX");break;
		case 8: printf("LXXX");break;
		case 9: printf("XC");break;
	}
	
	switch(unidades)
	{
		case 1: printf("I");break;
		case 2: printf("II");break;
		case 3: printf("III");break;
		case 4: printf("IV");break;
		case 5: printf("V");break;
		case 6: printf("VI");break;
		case 7: printf("VII");break;
		case 8: printf("VIII");break;
		case 9: printf("IX");break;
	}
	system("PAUSE");
		}
		
// ROMANOS A ARABIGOS--------------------------------------		
		if(opej5==2){
		char romano[100];
	int valor[100];
	int n,i,numero=0;
	printf("escribe el numero romano ");
	gets(romano);                             // ERROR EN EL GET NO ALMACENA PALAGRA
	n=strlen(romano);
	for(i=0;i<n;i++){
		if(romano[i] == 'I' || romano[i] == 'i')
		{	valor[i]=1;}
		if(romano[i] == 'V' || romano[i] == 'v')
		{	valor[i]=5;}
		if(romano[i] == 'X' || romano[i] == 'x')
		{	valor[i]=10;}
		if(romano[i] == 'L' || romano[i] == 'l')
		{	valor[i]=50;}
		if(romano[i] == 'C' || romano[i] == 'c')
		{	valor[i]=100;}
		if(romano[i] == 'D' || romano[i] == 'd')
		{	valor[i]=500;}
		if(romano[i] == 'M' || romano[i] == 'm')
		{	valor[i]=1000;}
	}
	for(i=0;i<n;i++){
		if(i==n-1){
			numero+=valor[i];
		}
		else
		   if(romano[i]>=romano[i+1]){
			   numero+=valor[i];
		   }
		   else
			  numero-=valor[i];
	}
	printf("%d\n",numero);
		}
		
		if(opej5==3){
		}
	}
}//-----Fin Programa 5----------------------------------------------

//-----Programa 6---------------------------------------------------
if(opcionG==6){
	int numero, n1, n2, n3, n4, n5;
	system("cls");
   cout<<"Escribe un numero de 1 a 10 mil (numeros): "; cin>>numero;
   n1 = numero / 10000;
   n2 = (numero / 1000) % 10;
   n3 = (numero / 100) % 10;
   n4 = (numero / 10) % 10;
   n5 = (numero % 10);
 
   cout<<"\n"<<n1<<" -> Decenas de mil"<<endl;
   cout<<n2<<" -> Unidades de mil"<<endl;
   cout<<n3<<" -> Centenas"<<endl;
   cout<<n4<<" -> Decenas"<<endl;
   cout<<n5<<" -> Unidades \n"<<endl; 
   if(numero > 10000){
      cout<<"El numero ingresado excede el rango de valores";
      system("pause");
   }else{
      if(n1 == 1){
      cout<<"Diez mil";
      }
      //Sentencia para determinar los miles
      if(n2 == 1){
         cout<<"MIL ";
      }else if(n2 == 2){
         cout<<"DOS MIL ";
      }else if(n2 == 3){
         cout<<"TRES MIL ";
      }else if(n2 == 4){
         cout<<"CUATRO MIL ";
      }else if(n2 == 5){
         cout<<"CINCO MIL ";
      }else if(n2 == 6){
        cout<<"SEIS MIL ";
      }else if(n2 == 7){
         cout<<"SIETE MIL ";
      }else if(n2 == 8){
         cout<<"OCHO MIL ";
      }else if(n2 == 9){
         cout<<"NUEVE MIL ";
      }
      //Setencia para determinar los cientos
      if(n3 == 1 && n4 == 0 && n5 == 0){
         cout<<"CIEN";
      }else if(n3 == 1){
         cout<<"CIENTO ";
      }else if(n3 == 2){
         cout<<"DOSCIENTOS ";
      }else if(n3 == 3){
         cout<<"TRESCIENTOS ";
      }else if(n3 == 4){
         cout<<"CUATROCIENTOS ";
      }else if(n3 == 5){
         cout<<"QUINIENTOS ";
      }else if(n3 == 6){
         cout<<"SEISCIENTOS ";
      }else if(n3 == 7){
         cout<<"SETECIENTOS ";
      }else if(n3 == 8){
         cout<<"OCHOCIENTOS ";
      }else if(n3 == 9){
         cout<<"NOVECIENTOS ";
      }
      //Setencia para determinar las decenas
      if(n4 == 1 && n5 == 0){
         cout<<"Diez ";
      }else if(n4 == 1 && n5 == 1){
         cout<<"ONCE ";
      }else if(n4 == 1 && n5 == 2){
         cout<<"DOCE ";
      }else if(n4 == 1 && n5 == 3){
         cout<<"TRECE ";
      }else if(n4 == 1 && n5 == 4){
         cout<<"CATORCE ";
      }else if(n4 == 1 && n5 == 5){
         cout<<"QUINCE ";
      }else if(n4 == 1){
         cout<<"DIECI ";
      }
      if(n4 == 2 && n5 == 0){
         cout<<"VEINTE ";
      }else if(n4 == 2){
         cout<<"VEINTI ";
      }else if(n4 == 3 && n5 == 0){
         cout<<"TREINTA ";
      }else if(n4 == 3){
         cout<<"TREINTA Y ";
      }else if(n4 == 4 && n5 == 0){
         cout<<"CUARENTA ";
      }else if(n4 == 4){
         cout<<"CUARENTA Y ";
      }else if(n4 == 5 && n5 == 0){
         cout<<"CINCUENTA ";
      }else if(n4 == 5){
         cout<<"CINCUENTA Y ";
      }else if(n4 == 6 && n5 == 0){
         cout<<"SESENTA ";
      }else if(n4 == 6){
         cout<<"SESENTA Y ";
      }else if(n4 == 7 && n5 == 0){
         cout<<"SETENTA ";
      }else if(n4 == 7){
         cout<<"SETENTA Y ";
      }else if(n4 == 8 && n5 == 0){
         cout<<"OCHENTA ";
      }else if(n4 == 8){
         cout<<"OCHENTA Y ";
      }else if(n4 == 9 && n5 == 0){
         cout<<"NOVENTA ";
      }
      else if(n4 == 9){
         cout<<"NOVENTA Y ";
      }
      //Sentencia para determinar las unidades 
      if(n5 == 1 && n4 > 1){
         cout<<"UNO ";
      }else if(n5 == 1 && n4 == 0){
         cout<<"UNO "; 
      }else if(n5 == 2 && n4 > 1){
         cout<<"DOS ";
      }else if(n5 == 2 && n4 == 0){
         cout<<"DOS ";
      }else if(n5 == 3 && n4 > 1){
         cout<<"TRES ";
      }else if(n5 == 3 && n4 == 0){
         cout<<"TRES "; 
      }else if(n5 == 4 && n4 > 1){
         cout<<"CUATRO ";
      }else if(n5 == 4 && n4 == 0){
         cout<<"CUATRO "; 
      }else if(n5 == 5 && n4 > 1){
         cout<<"CINCO ";
      }else if(n5 == 5 && n4 == 0){
         cout<<"CINCO ";
      }else if(n5 == 6){
         cout<<"SEIS ";
      }else if(n5 == 7){
         cout<<"SIETE ";
      }else if(n5 == 8){
         cout<<"OCHO ";
      }else if(n5 == 9){
         cout<<"NUEVE ";
      }
    system("pause");
   }
}//-----Fin programa 6----------------------------------------------

//-----programa 7---------------------------------------------------
if(opcionG==7){
	// CODIGO
}//-----Fin programa 7----------------------------------------------

//-----programa 8--------------------------------------------------
if(opcionG==8){
	system("cls");
	char seguir;
    int i, numero;

    do
    {
        printf( "\n   Introduzca un n%cmero entero para ver la tabla: ", 163 );
        scanf( "%d", &numero );

        printf( "\n   La tabla de multiplicar del %d es:\n", numero );

        /* Inicio del anidamiento */

        for ( i = 1 ; i <= 10 ; i++ )
            printf( "\n   %d * %d = %d", i, numero, i * numero );

        /* Fin del anidamiento */

        printf( "\n\n   %cDesea ver otra tabla (s/n)?: ", 168 );
        fflush( stdin );
        scanf( "%c", &seguir );

    } while ( seguir != 'n' );
}//-----Fin programa 8----------------------------------------------

//-----Programa 9---------------------------------------------------
if(opcionG==9){
	system("pause");
		cout<<" ________________________________________"<<endl;
	cout<<"|                                        |"<<endl;
	cout<<"|    TABLAS DE MULTIPLICAR DE 1 A 10     |"<<endl;
	cout<<"|________________________________________|"<<endl;	
	
for(int i = 1; i<=10; i++){
	cout<<"\n----------------------------------------"<<endl;
	cout<<"Tabla del "<<i<<endl;
	cout<<"----------------------------------------"<<endl;
	
	for(int m =0;m<=10;m++){
		
		cout<<i<<" X "<<m<<" = "<<i * m<<endl;
	}
}

system("PAUSE");
}//-----Fin programa 9-----------------------------------------------

//-----Programa 10---------------------------------------------------
if(opcionG==10){
control();	
}//-----Fin Programa 10---------------------------------------------------

//-----Programa 11----------------------------------------------------
if(opcionG==11){
	system("cls");
	 int decimal;
    short binario[8];
    cout << "Teclea el valor en entero a convertir:" << endl;
    cin >> decimal;
    for (int i = 0; i < 8; i++){
        binario[i] = decimal % 2;
        decimal /= 2;
    }
    cout << "El numero en binario es:" << endl;
    for (int i = 7; i >= 0; i--){
        cout << binario[i];
    }
    cout << endl;
    system("PAUSE");
}//-----Fin programa 11-------------------------------------------

//-----Programa 12------------------------------------------------
if(opcionG==12){
	system("cls");
	int digitoex[20];
    int decimal, residuo, resultado, i = 0;

    cout << "Introduce el numero entero a convertir: " << endl;
    cin >> decimal;

    do
    {
        residuo = decimal % 16;
        resultado = decimal / 16;
        digitoex[i] = residuo;
        decimal = resultado;
        i++;
    } while (resultado > 15);

    digitoex[i] = resultado;

    cout << "El equivalente en hexadecimal es: ";

    for (int j = i; j >= 0; j--)
    {
        if (digitoex[j] == 10)
        {
            cout << "A";
        }
        else if (digitoex[j] == 11)
        {
            cout << "B";
        }
        else if (digitoex[j] == 12)
        {
            cout << "C";
        }
        else if (digitoex[j] == 13)
        {
            cout << "D";
        }
        else if (digitoex[j] == 14)
        {
            cout << "E";
        }
        else if (digitoex[j] == 15)
        {
            cout << "F";
        }
        else
        {
            cout << digitoex[j];
        }   
    }
    cout << endl;
    system("PAUSE");
}//-----Fin programa 12-------------------------------------------

//-----Programa 13--------------------------------------------------
if(opcionG==13){
	
}//-----Fin programa 13---------------------------------------------

//-----Programa 14----------------------------------------------------
if(opcionG==14){
while(opcionp!='z'){
		system("cls");
		gotoxy(20,1);cout<<"Instrucciones:";	
		gotoxy(20,2);cout<<"W-arriba | S-abajo | A-izquierda | D-derecha | Z-salir";
		gotoxy(x,y); cout<<"O";
		opcionp=getch();
		
		switch(opcionp){
			case'w':y--; break;
			case's':y++; break;
			case'a':x--; break;
			case'd':x++; break;
		}
	}
		system("pause");
}//-----Fin programa 14----------------------------------------------

//-----Programa 15---------------------------------------------------
if(opcionG==15){
	system("cls");
	int saldo_inicial = 1000;
int saldo, retirar, opcion, agregar;

//Mensajes de salida y opcciones a seleccionar
cout<<"\tBIENVENIDO A SU CAJERO VIRTUAL";
cout<<"\nSeleccione una opcion: ";
cout<<"\n#1. Ingreso en cuenta: ";
cout<<"\n#2. Retirar de cuenta: ";
cout<<"\n#3. Ver saldo de cuenta: ";
cout<<"\n#0. Salir";
cout<<"\nOpcion = ";
cin>>opcion;

//Condicionales para cada opccion y operaciones
if(opcion == 1)
{
    cout<<"\nIngrese la cantidad a depositar: ";
    cin>>agregar;
    saldo = saldo_inicial + agregar;
    cout<<"\nCantidad disponible en cuenta: "<<saldo;
    system("pause");
}

else if(opcion == 2)
{
    cout<<"\nCuanta cantidad desea retirar: ";
    cin>>retirar;

    if(retirar > 1000)
    {
        cout<<"La cantidad digitada es superior al saldo disponible, reingrese la cantidad a retirar: ";
        cin>>retirar;
    }
    saldo = saldo_inicial - retirar;
    cout<<"\nLa cantidad disponible en cuenta es de: "<<saldo;
        system("pause");

}

else if(opcion == 3)
{
    cout<<"\nLa cantidad disponible en cuenta es de: "<<saldo_inicial;
        system("pause");

}

else if(opcion == 0)
{
    cout<<"Gracias por utilizar nuestro cajeto automatico";
        system("pause");

}

else{
    cout<<"Ha ingresado una opcion incorrecta\n";
        system("pause");

}

cin.get();
}//-----Fin programa 15--------------------------------------------

//-----Programa 16--------------------------------------------------
if(opcionG==16){
	system("cls");
		float hipotenusa,cat1,cat2;
	
	cout<<"Ingrese los 2 catetos: "<<endl;
	cin>>cat1;
	cin>>cat2;
	
	hipotenusa = sqrt(pow(cat1,2)+pow(cat2,2));
	
	cout<<"La hipotenusa del truangulo es: "<<hipotenusa<<endl;
	system("pause");
}//-----Fin programa 16--------------------------------------------

//-----Programa 17---------------------------------------------------
if(opcionG==17){
	int x,n,c=0,s=0;
system("cls");
cout<<"ingresar cantidad de numeros:";
cin>>n;
while(c<n)
{
cout<<"ingresar numero:";
cin>>x;
s=s+x;
c=c+1;
}
cout<<"La suma de los numeros es:"<<s;
getch();
}//-----Fin programa 17--------------------------------------------

//-----Programa 18-----------------------------------------------
if(opcionG==18){
	system("cls");
		int x;
	int num;
	int cont = 0;
	
	srand((unsigned)time(NULL));
	x = rand()%(101);
	
	cout<<"Adivina el numero entre 0 y 100"<<endl<<endl;
	int a = 0;
	
	while(a == 0)
	{
		cout<<"Introduce un numero: "<<endl;
		cin>>num;
		cont++;
		if(num>x)
		cout<<"El numero es menor"<<endl;
		else if(num<x)
		cout<<"El numero es mayor"<<endl;
		else
		{
			cout<<endl<<"Adivinaste!"<<endl;
			cout<<"No. de intentos: "<<cont<<endl;
			a = 1;
		}
	}
	system("pause");
}//-----Fin programa 18-----------------------------------------

//-----Programa 19--------------------------------------------------
if(opcionG==19){
		int entrada=0;
	int nivel = 1;
	
	while(entrada!=3){	
		mensaje();
		menu_19();
		cin>>entrada;
		
		if(entrada==1){
			inicio(nivel);
		}
		if(entrada==2){
			nivel=ingreso_nivel();
			inicio(nivel);
		}
		if(entrada==3){
			over();
		}
	}
	
	
system("PAUSE");
}//-----Fin programa 19---------------------------------------------

//-----Programa 20----------------------------------------------------
if(opcionG==20){
	system("cls");
	vidas(Num_vidas);
	Barra_salud (Corazones);
	gotoxy(35, 1); printf("NIVEL %i",nivel);
	
	gotoxy(ix,iy); puts(avion_l1);
	gotoxy(ix,iy+1); puts(avion_l2);
	gotoxy(ix,iy+2); puts(avion_l3);
	
	while(Num_vidas > 0 && nivel <= 4)//numero de niveles
	jugar();
	
	Sleep(200);
	gotoxy(20, 15); printf("GAME OVER");
	
	getch();
	system("pause");
}//-----Fin programa 20---------------------------------------------

//-----Salir General------------------------------------------------
if(opcionG==21){
	
}

}
	
	return 0;
}

//-----Metodos programa 4---------------------------------------------
int invertir(int n){
	int respuesta =0;
	
	while(n>0){
		respuesta = respuesta + n % 10;
		respuesta = respuesta * 10;
		n = n/10;
	}
	return respuesta/10;
}

bool esPalindromo(int n){
	if(n == invertir(n)){
		return true;
	}
	else{
		return false;
	}
}

//-----Metodos programa 10------------------------------------------------
void control(){
	system("cls");
int z,x,a,b,c,d,e,f,p,g,cent1,cent2;
int uni,dec,uni1,dec1,uni2,dec2,uni3,dec3;
gotoxy(20,1);cout<<(" _______________________________________________");
gotoxy(20,2);cout<<("|                                               |");
gotoxy(20,2);cout<<("| Multilicacion de Dos Digitos en forma Grafica |");
gotoxy(20,3);cout<<("|_______________________________________________|");

gotoxy(20,6);cout<<("Ingrese la primera cantidad: ");
cin>>a;
gotoxy(20,7);cout<<("Ingrese la segunda cantidad: ");
cin>>b;
int r=a*b;
gotoxy(20,10);cout<<a;
gotoxy(18,12);cout<<("X");gotoxy(20,12);cout<<b;
gotoxy(15,13);cout<<("___________");

	uni = a%10; a /= 10;
	dec = a%10; a /= 10;
    uni1 = b%10; b /= 10;
	dec1 = b%10; b /= 10;

c=uni1*uni;
	uni2 = c%10; c /= 10;
	dec2 = c%10; c /= 10;
	cent1= c%10; c /= 10;
	
d=uni1*dec+dec2;
gotoxy(20,15);cout<<d<<uni2;

e=dec1*uni;
	uni3 = e%10; e /= 10;
	dec3 = e%10; e /= 10;
	
	cent2 = e%10; e /= 10;
	
f=dec1*dec+dec3;
gotoxy(19,16);cout<<f<<uni3;
gotoxy(15,17);cout<<("____________");
/*x=dec2+dec3;
p=dec2+dec+uni3;*/
gotoxy(19,18);cout<<r;

gotoxy(20,22);cout<<(" Desea realizar otra multiplicacion 1-si | 2-no: ");
cin>>z;
if (z==1){
 control();

}else{
}
}
