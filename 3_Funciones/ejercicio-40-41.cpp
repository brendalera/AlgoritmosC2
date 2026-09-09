#include <iostream>
#include <vector>
using namespace std;
#include <limits>

// Defino persona
struct Persona
{
  string nombre;
  int numTelefono;
};

// Defino la agenda
vector<Persona> agenda;

void pausar()
{
  cout << "\nPresione Enter para continuar...\n";
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  cin.get();
}

/*
  Funcionalidades
*/

// Cargar los datos a una agenda
void cargarContacto(Persona persona)
{
  agenda.push_back(persona);
  cout << "\n\n¡Persona cargada Correctamente!\n\n";

  pausar();
}

// Buscar por nombre
int buscarContactoPorNombre(string nombre, vector<Persona> v)
{
  for (int i = 0; i < v.size(); i++)
  {
    if (nombre == v[i].nombre)
    {
      return i;
    }
  }
  return -1;
}

// Buscar por nombre
int buscarContactoPorTelefono(int telefono, vector<Persona> v)
{
  for (int i = 0; i < v.size(); i++)
  {
    if (telefono == v[i].numTelefono)
    {
      return i;
    }
  }
  return -1;
}

// main
int main()
{
  vector<string> nombres;
  vector<string> telefonos;
  int opcion;

  do
  {
    cout << "\n--- AGENDA ---\n";
    cout << "1. Cargar contacto\n";
    cout << "2. Buscar telefono por nombre\n";
    cout << "3. Buscar nombre por telefono\n";
    cout << "4. Modificar telefono\n";
    cout << "5. Eliminar\n";
    cout << "6. Salir\n";
    cout << "Opcion: ";
    cin >> opcion;
    switch (opcion)
    {
    case 1:
    {
      Persona nuevoContacto;
      cout << "\nIngrese el nombre: \n";
      cin >> nuevoContacto.nombre;
      cout << "\nIngrese el Telefono: \n";
      cin >> nuevoContacto.numTelefono;
      cargarContacto(nuevoContacto);

      break;
    }

    case 2:
    {
      string nombre;
      cout << "\nIngrese el nombre a buscar: \n";
      cin >> nombre;
      int index = buscarContactoPorNombre(nombre, agenda);
      cout << ((index == -1) ? "No se encontró el telfono" : "El numero de telefono de " + nombre + " es: " + to_string(agenda[index].numTelefono));
      pausar();
      break;
    }
    case 3:
    {
      int telefono;
      cout << "\nIngrese el numero a buscar: \n";
      cin >> telefono;
      int index = buscarContactoPorTelefono(telefono, agenda);
      cout << ((index == -1) ? "No se encontró el telfono" : "El numero de telefono de " + to_string(telefono) + " es de: " + agenda[index].nombre);
      pausar();
      break;
    }
    case 4:
    {
      int telefono;
      cout << "\nIngrese el numero a modificar: \n";
      cin >> telefono;
      int index = buscarContactoPorTelefono(telefono, agenda);
      int nuevoNumero;
      if (index != -1)
      {
        cout << "\nIngrese el nuevo numero: \n";
        cin >> nuevoNumero;
        agenda[index].numTelefono = nuevoNumero;
        cout << "\nNumero modificado correctamente. \n";

        pausar();
      }
      else
      {
        cout << "\nNumero inexistente: \n";
        pausar();
      }
      break;
    }
    case 5:
    {
      int telefono;
      cout << "\nIngrese el numero a eliminar: \n";
      cin >> telefono;
      int index = buscarContactoPorTelefono(telefono, agenda);
      int nuevoNumero;
      if (index != -1)
      {
        agenda.erase(agenda.begin() + index);
        cout << "Contacto eliminado." << endl;

        pausar();
      }
      else
      {
        cout << "\nNumero inexistente: \n";
        pausar();
      }
      break;
    }
    }
  } while (opcion != 6);

  return 0;
}