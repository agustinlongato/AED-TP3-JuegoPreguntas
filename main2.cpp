#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    bool continuar = true,next = false;
    char RespMenu='z',RespPreg;
        while(continuar){
        system("cls");
           if(RespMenu == 'z'){
           
            cout<<"Test verdadero o falso"<<endl << endl;
            cout<<"Seleccione una tematica"<< endl;
            cout<<"A-Deportes		B-Historia"<< endl;
            cout<<"S-Salir"<<endl;
            cin>>RespMenu;
            }
        system("cls");
        if(RespMenu == 'A'||RespMenu == 'a'){
           if(next == false){
            cout<<"El jugador de futbol Lionel Messi\n ha ganado mas balones de oro que Cristiano Ronaldo"<< endl <<endl;
            cout<<"1-Verdadero"<< endl;
            cout<<"2-Falso"<< endl;
            cin>>RespPreg;
            switch(RespPreg){
            case '1':
                cout<<"Correcto"<< endl;
                system("pause");
                next = true;
                break;
            case '2':
                cout<<"Incorrecto"<< endl;
                system("pause");
                next = true;
                break;
            default:
                cout<<"Esa respuesta no esta entre las opciones"<< endl;
           		system("pause");
		   }
           }
            if(next == true){
                system("cls");
                cout<<"El Tenis es originario de Inglaterra"<< endl << endl;
                cout<<"1-Verdadero"<< endl;
                cout<<"2-Falso"<< endl;
                cin>>RespPreg;
                switch(RespPreg){
                    
                    case '1':
                    cout<<"Incorrecto"<< endl;
                    system("pause");
                    RespMenu = 'z';
                    next = false;
                    break;
                    
                    case '2':
                    cout<<"Correcto"<< endl;
                    cout<< "el tenis es originario de Francia"<< endl;
                    system("pause");
                    next = false;
                    RespMenu = 'z';
                    break;
                    
                    default:
                    cout<<"Esa respuesta no esta entre las opciones"<< endl;
           			system("pause");
                }
            }

            }else
        if(RespMenu == 'B'||RespMenu == 'b'){
            if(next == false){
            cout<<"La Torre eiffel se hizo en el siglo XV"<< endl;
            cout<<"1-Verdadero"<< endl;
            cout<<"2-Falso"<< endl;
            cin>>RespPreg;
            switch(RespPreg){
            case '1':
                cout<<"Incorrecto"<< endl;
                system("pause");
                next = true;
                break;
            case '2':
                cout<<"Correcto"<< endl;
                cout<< "Fue en el siglo XIX"<< endl;
                system("pause");
                next = true;
                break;
        
            default:
                cout<<"Esa respuesta no esta entre las opciones"<< endl;
           		system("pause");
           }
           }
            if(next == true){
                system("cls");
                cout<<"El primer presidente de EEUU fue Abraham Lincoln"<< endl;
                cout<<"1-Verdadero"<< endl;
                cout<<"2-Falso"<< endl;
                cin>>RespPreg;
                switch(RespPreg){
                    case '1':
                    cout<<"Incorrecto"<< endl;
                    system("pause");
                    next = false;
                    RespMenu = 'z';
                    break;
                    case '2':
                    cout<<"correcto"<< endl;
                    cout<<"El primer presidente fue George Washington"<< endl;
                    system("pause");
                    RespMenu = 'z';
                    next = false;
                    break;
                   
                    default:
                    	cout<<"Esa respuesta no esta entre las opciones"<< endl;
           				system("pause");
                    
                }
            }

            }

            if(RespMenu == 'S'||RespMenu == 's' ){
                return 0;
            }
        }
}
