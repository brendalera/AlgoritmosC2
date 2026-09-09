#include <iostream>
#include <vector>
using namespace std;
#include <limits>

// Defino producto
struct Producto
{
  string nombre;
  long codigoBarra;
  double precio;
  bool enOferta;
};

// Defino la gondola (maximo 50 productos)
const int MAX_PRODUCTOS = 50;
vector<Producto> gondola;

void pausar()
{
  cout << "\nPresione Enter para continuar...\n";
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  cin.get();
}

// Calcula el precio final teniendo en cuenta la oferta
double precioFinal(Producto p)
{
  return p.enOferta ? p.precio * 0.9 : p.precio;
}

/*
  Funcionalidades
*/

// a. Cargar productos en el vector
void cargarProducto(Producto producto)
{
  if (gondola.size() >= MAX_PRODUCTOS)
  {
    cout << "\n\nLa gondola esta llena, no se puede cargar mas productos.\n\n";
    pausar();
    return;
  }
  gondola.push_back(producto);
  cout << "\n\n¡Producto cargado correctamente!\n\n";

  pausar();
}

// b. Buscar por nombre
int buscarProductoPorNombre(string nombre, vector<Producto> v)
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

// c. Buscar por codigo de barra
int buscarProductoPorCodigo(long codigo, vector<Producto> v)
{
  for (int i = 0; i < v.size(); i++)
  {
    if (codigo == v[i].codigoBarra)
    {
      return i;
    }
  }
  return -1;
}

// f. Contar productos en oferta
int contarProductosEnOferta(vector<Producto> v)
{
  int contador = 0;
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i].enOferta)
    {
      contador++;
    }
  }
  return contador;
}

// main
int main()
{
  int opcion;

  do
  {
    cout << "\n--- GONDOLA ---\n";
    cout << "1. Cargar producto\n";
    cout << "2. Buscar producto por nombre\n";
    cout << "3. Buscar producto por codigo de barra\n";
    cout << "4. Modificar precio\n";
    cout << "5. Quitar producto\n";
    cout << "6. Cantidad de productos en oferta\n";
    cout << "7. Armar Chango (carrito)\n";
    cout << "8. Salir\n";
    cout << "Opcion: ";
    cin >> opcion;
    switch (opcion)
    {
    case 1:
    {
      Producto nuevoProducto;
      cout << "\nIngrese el nombre: \n";
      cin >> nuevoProducto.nombre;
      cout << "\nIngrese el codigo de barra: \n";
      cin >> nuevoProducto.codigoBarra;
      cout << "\nIngrese el precio: \n";
      cin >> nuevoProducto.precio;
      cout << "\n¿Esta en oferta? (1 = Si / 0 = No): \n";
      int oferta;
      cin >> oferta;
      nuevoProducto.enOferta = (oferta == 1);
      cargarProducto(nuevoProducto);

      break;
    }

    case 2:
    {
      string nombre;
      cout << "\nIngrese el nombre a buscar: \n";
      cin >> nombre;
      int index = buscarProductoPorNombre(nombre, gondola);
      if (index == -1)
      {
        cout << "No se encontró el producto";
      }
      else
      {
        cout << "Codigo: " << gondola[index].codigoBarra
             << " - Precio: $" << gondola[index].precio
             << " - Precio final: $" << precioFinal(gondola[index])
             << " - Oferta: " << (gondola[index].enOferta ? "Si" : "No");
      }
      pausar();
      break;
    }
    case 3:
    {
      long codigo;
      cout << "\nIngrese el codigo de barra a buscar: \n";
      cin >> codigo;
      int index = buscarProductoPorCodigo(codigo, gondola);
      if (index == -1)
      {
        cout << "No se encontró el producto";
      }
      else
      {
        cout << "Nombre: " << gondola[index].nombre
             << " - Precio: $" << gondola[index].precio
             << " - Precio final: $" << precioFinal(gondola[index])
             << " - Oferta: " << (gondola[index].enOferta ? "Si" : "No");
      }
      pausar();
      break;
    }
    case 4:
    {
      long codigo;
      cout << "\nIngrese el codigo de barra del producto a modificar: \n";
      cin >> codigo;
      int index = buscarProductoPorCodigo(codigo, gondola);
      double nuevoPrecio;
      if (index != -1)
      {
        cout << "\nIngrese el nuevo precio: \n";
        cin >> nuevoPrecio;
        gondola[index].precio = nuevoPrecio;
        cout << "\nPrecio modificado correctamente. \n";

        pausar();
      }
      else
      {
        cout << "\nProducto inexistente: \n";
        pausar();
      }
      break;
    }
    case 5:
    {
      long codigo;
      cout << "\nIngrese el codigo de barra del producto a quitar: \n";
      cin >> codigo;
      int index = buscarProductoPorCodigo(codigo, gondola);
      if (index != -1)
      {
        gondola.erase(gondola.begin() + index);
        cout << "Producto eliminado." << endl;

        pausar();
      }
      else
      {
        cout << "\nProducto inexistente: \n";
        pausar();
      }
      break;
    }
    case 6:
    {
      int cantidad = contarProductosEnOferta(gondola);
      cout << "\nCantidad de productos en oferta: " << cantidad << "\n";
      pausar();
      break;
    }
    case 7:
    {
      vector<Producto> chango;
      long codigo;
      cout << "\nIngrese codigos de barra para agregar al chango (ingrese -1 para terminar): \n";
      cin >> codigo;
      while (codigo != -1)
      {
        int index = buscarProductoPorCodigo(codigo, gondola);
        if (index != -1)
        {
          chango.push_back(gondola[index]);
          cout << "Producto agregado al chango.\n";
        }
        else
        {
          cout << "Producto inexistente.\n";
        }
        cout << "\nIngrese otro codigo (-1 para terminar): \n";
        cin >> codigo;
      }

      double montoAAbonar = 0;
      double ahorroTotal = 0;
      for (int i = 0; i < chango.size(); i++)
      {
        montoAAbonar += precioFinal(chango[i]);
        if (chango[i].enOferta)
        {
          ahorroTotal += chango[i].precio - precioFinal(chango[i]);
        }
      }

      cout << "\n--- Resumen del Chango ---\n";
      cout << "Monto a abonar: $" << montoAAbonar << "\n";
      cout << "Ahorro total: $" << ahorroTotal << "\n";
      pausar();
      break;
    }
    }
  } while (opcion != 8);

  return 0;
}