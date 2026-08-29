#include <iostream>

using namespace std;

void showMenu(){
  cout << "Ingresar una opcion\n";
  cout << "1_ Inicio \n2_Contacto\n3_Resenias\n4_Galeria\n";
}

int main(){
  int op;
  // Muestro el menu 
  showMenu();
  cin >> op;
  if(op >0 && op < 5){
    cout << "Opcion " << op << " Seleccionada."; 
  }else{
    cout << op << " No es una opcion valida.";
  }
  return 0;
}

// 47