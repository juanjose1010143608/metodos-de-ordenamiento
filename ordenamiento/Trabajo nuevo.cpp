//***librerias *******
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_SIZE 100

// Definición de la estructura de nodo
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Funciones para la lista enlazada
void insert(Node** head, int data);      //funcion de insertar 
void deletenode(Node** head, int data);  //funcion de eliminar
void display(Node* head);               //funcion de imprimir     

// Funciones de ordenamiento
void bubbleSort(int arr[], int n);                  //funcion bubbleSort
void selectionSort(int arr[], int n);               //funcion selectionSort
void insertionSort(int arr[], int n);		        //funcion insertionSort
void mergeSort(int arr[], int l, int r);            //funcion mergeSort
void quickSort(int arr[], int low, int high);       //funcion quickSort
void bucketSort(int arr[], int n);                  //funcion bucketSort
void shellSort(int arr[], int n);                   //funcion shellSort
void countingSort(int arr[], int n);                //funcion countingSort
int getMax(int arr[], int n);                       //funcion getMax
void radixSort(int arr[], int n);                   //funcion radixSort  
void loadFromFile(Node** head, char* filename);     //función para cargar desde archivo
void saveToFile(int arr[], int n, char* filename); // funcion para guardar el archivo 

int main() {
    Node* head = NULL;  // Puntero al primer nodo de la lista, inicialmente apunta a NULL
    int choice, num;    // Declaración de variables para el menú y manipulación de datos
    char filename[100]; // Variable para almacenar el nombre del archivo
    int arr[100], n, i;  // Arreglo y variables para manipular datos

    do {
        printf("\nMenu:\n");
        printf("1. Agregar numero\n");
        printf("2. Eliminar numero\n");
        printf("3. Metodos de ordenamiento\n");
        printf("4. Mostrar lista del archivo\n");
        printf("5. Cargar desde archivo\n");
        printf("6. Guardar en archivo\n");
		printf("7. Salir\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &choice);
        system("cls");
        switch(choice) {
            case 1:
            	printf("\n Insertar numeros \n");
            	printf("1.Ingresar un numero\n");
            	printf("2.Ingresar un vector\n");
            	printf("Ingrese su opcion: ");
       			 scanf("%d", &choice);
       			 system("cls");
       			 switch(choice) {
       				case 1:
                		printf("Ingrese el numero a agregar: ");
                		scanf("%d", &num); // Lee el número ingresado por el usuario y lo almacena en la variable 'num'
                		insert(&head, num); //Llama a la función 'insert' para agregar el número ingresado a la lista enlazada,
						                   // pasando la dirección de memoria del puntero 'head' y el número 'num' como argumentos
                		break;
                		
                	case 2:
                		printf("Ingrese la cantidad de elementos: ");
    					scanf("%d", &n); // Lee la cantidad de elementos de la lista

    					printf("Ingrese los elementos:\n");
    					for (i = 0; i < n; i++) {
        				 scanf("%d", &arr[i]);  // Lee cada elemento ingresado por el usuario y lo almacena en el arreglo 'arr'
        				 insert(&head, arr[i]); // Llama a la función 'insert' para agregar el elemento a la lista enlazada, 
						                      //pasando la dirección de memoria del puntero 'head' y el elemento 'arr[i]' como argumentos
				        }
					}
    			      break;
                
            case 2:
                printf("Ingrese el numero a eliminar: ");
                scanf("%d", &num);
                deletenode(&head, num);
                break;
                
            case 3:
                // Submenú para elegir el método de ordenamiento
                printf("\nMetodos de ordenamiento:\n");
                printf("1. Bubble Sort\n");
                printf("2. Selection Sort\n");
                printf("3. Insertion Sort\n");
                printf("4. Merge Sort\n");
                printf("5. Quick Sort\n");
                printf("6. Bucket Sort\n");
                printf("7. Shell Sort\n");
                printf("8. Counting Sort\n");
                printf("9. Radix Sort\n");
                printf("Ingrese su opcion: ");
                scanf("%d", &choice);
                
                switch(choice) {
                    case 1:
                        //*******Ordenar con Bubble Sort**********
                        
                          int arr[6000];              //Declaración para almacenar los elementos de la lista
                          {
                            Node* current = head;         //puntero que apunta al primer nodo de la lista
                            int i = 0;                   // inicializacion de un contador
                            while (current != NULL) {     //Recorrido de la lista y copia de sus elementos al arreglo
                                arr[i++] = current->data; 
                                current = current->next;
                            }
                            bubbleSort(arr, i);           //llamada de la fucion 
                           
						    printf("\nLista ordenada: "); //impresion de la lista ordenada
                            for (int j = 0; j < i; j++) {
                                printf("%d ", arr[j]);
                               
                            }
                            printf("\n");
                          
                        }
                   
                        break;
                    case 2:
                          // Ordenar con Selection Sort ////////
                        {
                            int arr[6000];         // Declara un arreglo 'arr' de tamaño 5000 para almacenar los datos de la lista enlazada
                            Node* current = head;  // Declara un puntero 'current' y lo inicializa apuntando al primer nodo de la lista enlazada
                            int i = 0;             // Inicializa un contador 'i' para rastrear el índice actual en el arreglo 'arr'
                            
							// Recorre la lista enlazada y almacena los datos en el arreglo 'arr'
							while (current != NULL) {
                                arr[i++] = current->data;  // Almacena el dato del nodo actual en el arreglo 'arr' y luego incrementa 'i'
                                current = current->next;  // Avanza al siguiente nodo en la lista
                            }
                            // Ordena el arreglo 'arr' utilizando el algoritmo de ordenación por selección
                            selectionSort(arr, i);
                          
                            printf("Lista ordenada: ");   // Imprime los elementos ordenados del arreglo 'arr' como la lista ordenada
                            for (int j = 0; j < i; j++) {
                                printf("%d ", arr[j]);    // Imprime cada elemento del arreglo 'arr'
                            }
                            printf("\n");
                        }
                        break;
                        
                     case 3:
                        //// Ordenar con Insertion Sort/////////////
				        {
				        int arr[6000];
				        Node* current = head;
				        int i = 0;
				        while (current != NULL) {
				            arr[i++] = current->data;
				            current = current->next;
				        }
				        insertionSort(arr, i);
				        printf("Lista ordenada: ");
				        for (int j = 0; j < i; j++) {
				            printf("%d ", arr[j]);
				        }
				        printf("\n");
				    }
				    break;
                        
                    case 4:
                    	// Ordenar con Merge Sort
                         {
            				int arr[6000];
					            Node* current = head;
					            int i = 0;
					            while (current != NULL) {
					                arr[i++] = current->data;
					                current = current->next;
					            }
					            mergeSort(arr, 0, i - 1);
					            printf("Lista ordenada: ");
					            for (int j = 0; j < i; j++) {
					                printf("%d ", arr[j]);
					            }
							    printf("\n");
		                }
		                break;
                        
					case 5:
                        // Ordenar con Quick Sort
				        {
				            int arr[6000];
				            Node* current = head;
				            int i = 0;
				            while (current != NULL) {
				                arr[i++] = current->data;
				                current = current->next;
				            }
				            quickSort(arr, 0, i - 1);
				            printf("Lista ordenada: ");
				            for (int j = 0; j < i; j++) {
				                printf("%d ", arr[j]);
				            }
				            printf("\n");
				        }
				        break;
                        
					case 6:
                         // Ordenar con Bucket Sort
				        {
				            int arr[6000];
				            Node* current = head;
				            int i = 0;
				            while (current != NULL) {
				                arr[i++] = current->data;
				                current = current->next;
				            }
				            bucketSort(arr, i);
				            printf("Lista ordenada: ");
				            for (int j = 0; j < i; j++) {
				                printf("%d ", arr[j]);
				            }
				            printf("\n");
				        }
				        break;
                        
					case 7:
                          // Ordenar con Shell Sort
			        {
			            int arr[6000];
			            Node* current = head;
			            int i = 0;
			            while (current != NULL) {
			                arr[i++] = current->data;
			                current = current->next;
			            }
			            shellSort(arr, i);
			            printf("Lista ordenada: ");
			            for (int j = 0; j < i; j++) {
			                printf("%d ", arr[j]);
			            }
			            printf("\n");
			        }
			        break;
                        
					case 8:
                        // Ordenar con Counting Sort
			        {
			            int arr[6000];
			            Node* current = head;
			            int i = 0;
			            while (current != NULL) {
			                arr[i++] = current->data;
			                current = current->next;
			            }
			            countingSort(arr, i);
			            printf("Lista ordenada: ");
			            for (int j = 0; j < i; j++) {
			                printf("%d ", arr[j]);
			            }
			            printf("\n");
			        }
			        break;
                        
                    case 9:
                        // Ordenar con Radix Sort
				        {
				            int arr[6000];
				            Node* current = head;
				            int i = 0;
				            while (current != NULL) {
				                arr[i++] = current->data;
				                current = current->next;
				            }
				            radixSort(arr, i);
				            printf("Lista ordenada: ");
				            
				            for (int j = 0; j < i; j++) {
				                printf("%d ", arr[j]);
				            }
				            printf("\n");
				    	} 
				    break;
                } 
                break;
                
             case 4:
                display(head);
                break;
                
            case 5:
                printf("Ingrese el nombre del archivo: ");
                scanf("%s", filename);                          //Lee el nombre del archivo ingresado por el usuario y lo almacena en la variable 'filename'
                loadFromFile(&head, filename);                  //Llamar a la función para cargar desde archivo
                printf("Lista cargada desde el archivo: \n");
    			display(head);                                  //Llama a la función 'display' para mostrar la lista cargada en la consola
			    break;
                
            case 6:
                printf("Ingrese el nombre del archivo: ");
                scanf("%s", filename);
                // Convertir la lista enlazada a un array
                int arr[MAX_SIZE];
               Node* current = head;
                int i = 0;
                while (current != NULL) {
                    arr[i++] = current->data;
                    current = current->next;
                }
                // Guardar el array ordenado en el archivo
                saveToFile(arr, i, filename);
                printf("Numeros guardados en el archivo \"%s\".\n", filename);
                break; 
               
            /*case 7:
               printf("Saliendo del programa.\n");
               break;
           */
        }
     } while (choice != 7);

    return 0;
}

///// Función para insertar un nodo al final de la lista /////////////////////

void insert(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node)); // Crea un nuevo nodo y reserva memoria para él
    newNode->data = data;  //Asigna el valor 'data' al campo de datos del nuevo nodo
    newNode->next = NULL;  //Establece el puntero 'next' del nuevo nodo como NULL, ya que será el último nodo en la lista
    if (*head == NULL) {   //Verifica si la lista está vacía
        *head = newNode;   //Si la lista está vacía, el nuevo nodo se convierte en el primer nodo de la lista
    } else {
        Node* last = *head;          //Si la lista no está vacía, se inicializa un puntero 'last' apuntando al primer nodo de la lista
        while (last->next != NULL) { //Recorre la lista hasta encontrar el último nodo
            last = last->next;       //Avanza al siguiente nodo en la lista
        }
        last->next = newNode; // Cuando se encuentra el último nodo, se establece el puntero 'next' para que apunte al nuevo nodo, agregándolo al final de la lista
    }
}

//////////////////////////////////////////////////////////////////////////////

////// Función para eliminar un nodo de la lista ////////////////////////////

void deletenode(Node** head, int data) {
    Node* temp = *head;  // Se asigna el puntero 'temp' para que apunte al inicio de la lista
    Node* prev = NULL;  // Se inicializa el puntero 'prev' como NULL para rastrear el nodo anterior al nodo actual

// Verifica si el nodo a eliminar es el primer nodo de la lista
    if (temp != NULL && temp->data == data) {
        *head = temp->next;  // Actualiza el inicio de la lista para que apunte al siguiente nodo
        free(temp);          // Libera la memoria del nodo eliminado
        return;
    }

 // Busca el nodo a eliminar mientras se mantiene un puntero al nodo anterior
  while (temp != NULL && temp->data != data) {
        prev = temp;       // Actualiza el puntero 'prev' para que apunte al nodo actual
        temp = temp->next; // Avanza al siguiente nodo en la lista
    }
    
// Si el nodo a eliminar no se encuentra en la lista
    if (temp == NULL) {
        printf("El numero no se encuentra en la lista.\n");
        return;
    }

    prev->next = temp->next;  // Enlaza el nodo anterior al nodo siguiente al nodo a eliminar, omitiéndolo
    free(temp);               // Libera la memoria del nodo eliminado
}
/////////////////////////////////////////////////////////////////////

///////// Función para mostrar la lista /////////////////////////////////

void display(Node* head) {
    Node* current = head;
    if (head == NULL) {
        printf("La lista esta vacia.\n");
        return;
    }
    int count = 0;                     // Contador para controlar el número de elementos por columna
	while (current != NULL) {
        printf("%d ", current->data); // Imprimir el elemento
        count++;
		if (count % 4 == 0) {
			
        // Si hemos impreso 5 elementos, cambiamos de línea
           // printf("\n");
        }

        current = current->next;
    }
    printf("\n"); // Agregamos un salto de línea al final
}
//////////////////////////////////////////////////////////////////////////

//////// Función para cargar desde un archivo de texto /////////////////////

void loadFromFile(Node** head, char* filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return;
    }
        char line[MAX_SIZE];
    		while (fgets(line, sizeof(line), file)) {
        // Separar la línea en elementos (por ejemplo, usando strtok)
        	char* token = strtok(line, " "); // Separadores: coma, espacio, nueva línea
        		while (token != NULL) {
            	int num = atoi(token);         // Convertir a entero
            		insert(head, num);         // Insertar en la lista
            		token = strtok(NULL, " ,\n");
        }
    }

    fclose(file);
}
///////////////////////////////////////////////////////////////////////

  

////// Función para guardar en un archivo de texto///////////////////

void saveToFile(int arr[], int n, char* filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        fprintf(file, "%d", arr[i]);
    }
    fclose(file);
}
/////////////////////////////////////////////////////////////////////



////////// Función de Bubble Sort //////////////////////////////

void bubbleSort(int arr[], int n) {
    int temp;
    int cont = 0;
    clock_t start_time = clock(); // Iniciar el temporizador
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
        	cont++;
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
     }
     clock_t end_time = clock(); // Detener el temporizador
     double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC; // Calcular el tiempo transcurrido en segundos
     printf("\nTiempo de ejecucion de Bubble Sort: %.5f segundos\n", elapsed_time);
	 printf("Bubble Sort se ejecuto %d veces.\n", cont); // Imprimir el valor del contador
}
/////////////////////////////////////////////////////////////////////////////

//////// selection sort /////////////////////////////////////////////
 
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    int cont = 0; // Contador 
    clock_t start_time = clock(); // Iniciar el temporizador
    
    // Iterar sobre el array
    for (i = 0; i < n-1; i++) {
    	
        // Encontrar el índice del mínimo en el array no ordenado
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
             cont++;
        }
        // Intercambiar el mínimo con el primer elemento del array no ordenado
        swap(&arr[min_idx], &arr[i]);
    }
     clock_t end_time = clock(); // Detener el temporizador
     double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC; // Calcular el tiempo transcurrido en segundos
     printf("\nTiempo de ejecucion de Selection Sort: %.5f segundos\n", elapsed_time);
	 printf("Selection Sort se ejecuto %d veces.\n", cont); // Mostrar el número de ejecuciones
}
///////////////////////////////////////////////////////////////////////////////////////////////////

//////////// insertion sort//////////////////////////////////////////////////////

void insertionSort(int arr[], int n) {
    int i, j, key;
     int cont = 0;
    clock_t start_time = clock(); // Iniciar el temporizador
    
    // Iterar sobre el array
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        
    // Mover los elementos del array que son mayores que key a una posición adelante de su posición actual
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
            cont++; 
        }
        arr[j + 1] = key;
    }
     clock_t end_time = clock(); // Detener el temporizador
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC; // Calcular el tiempo transcurrido en segundos
    printf("Tiempo de ejecucion de Insertion Sort: %.6f segundos\n", elapsed_time);
	printf("Insertion Sort se ejecuto %d veces.\n", cont);
}
+.
////////////////////////////////////////////////////////////////////////////

// ///////////marge sort//////////////////////////////////

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
   
    // Creacion array temporal
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temporary arrays back into arr[l..r]
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
	 int cont = 0;
	 clock_t start_time = clock(); // Iniciar el temporizador
    if (l < r) {
        int m = l + (r - l) / 2;
	
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Merge the sorted halves
        merge(arr, l, m, r);
    }
    clock_t end_time = clock(); // Detener el temporizador
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC; // Calcular el tiempo transcurrido en segundos
    printf("Tiempo de ejecucion de Merge Sort: %.6f segundos\n", elapsed_time);
	 printf("Merge Sort se ejecuto %d veces.\n", cont); // Mostrar el número de ejecuciones
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////quick sort/////////////////////////////////////////
 
int partition(int arr[], int low, int high) {
	
    int pivot = arr[high];
    int i = (low - 1);
   
    
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
	  int cont = 0;
	 clock_t start_time = clock(); // Iniciar el temporizador
    if (low < high) {
    
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
        cont++;
    }
    clock_t end_time = clock(); // Detener el temporizador
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC; // Calcular el tiempo transcurrido en segundos
    printf("Tiempo de ejecucion de Quick Sort: %.6f segundos\n", elapsed_time);
	 printf("Quick Sort se ejecuto %d veces.\n", cont); // Mostrar el número de ejecuciones
}
///////////////////////////////////////////////////////////////////////////////

/////////// bucketsort////////////////////////////////////////////

void bucketSort(int arr[], int n) {
	 int cont = 0;
	  clock_t start_time = clock(); // Iniciar el temporizador
    
	// Encontrar el valor máximo en el array
    int max_val = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
            cont++;
        }
    }

    // Crear un array de baldes y inicializarlos con 0
    int* buckets = (int*)malloc((max_val + 1) * sizeof(int));
    for (int i = 0; i <= max_val; i++) {
        buckets[i] = 0;
        cont++;
    }

    // Contar la frecuencia de cada elemento en el array original
    for (int i = 0; i < n; i++) {
        buckets[arr[i]]++;
        cont++;
    }

    // Reconstruir el array ordenado
    int index = 0;
    for (int i = 0; i <= max_val; i++) {
        while (buckets[i] > 0) {
            arr[index++] = i;
            buckets[i]--;
            cont++;
        }
    }

    free(buckets);
    clock_t end_time = clock(); // Detener el temporizador
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC; // Calcular el tiempo transcurrido en segundos
    printf("Tiempo de ejecucion de Bucket Sort: %.6f segundos\n", elapsed_time);
	 printf("Bucket Sort se ejecuto %d veces.\n", cont); // Mostrar el número de ejecuciones
}
//////////////////////////////////////////////////////////////////////////////////

///////////// shell sort /////////////////////////

void shellSort(int arr[], int n) {
	int cont = 0;
 clock_t start_time = clock(); // Iniciar el temporizador
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
                cont++;
            }
            arr[j] = temp;
        }
    }
    clock_t end_time = clock(); // Detener el temporizador
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC; // Calcular el tiempo transcurrido en segundos
    printf("Tiempo de ejecucion de Shell Sort: %.6f segundos\n", elapsed_time);
	 printf("Shell Sort se ejecuto %d veces.\n", cont); 
}
////////////////////////////////////////////////////////////////////////////////

///////// countingsort //////////////////////////////////////////////

void countingSort(int arr[], int n) {
	
	clock_t start_time = clock(); // Iniciar el temporizador
    int max_val = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
	 // Inicializar el array de conteo y el array de salida
    int* count = (int*)malloc((max_val + 1) * sizeof(int));
    int* output = (int*)malloc(n * sizeof(int));

	
    for (int i = 0; i <= max_val; i++) {
        count[i] = 0;
    }
 // Contar la frecuencia de cada elemento
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
 // Actualizar el array de conteo para tener las posiciones finales de cada elemento
    for (int i = 1; i <= max_val; i++) {
        count[i] += count[i - 1];
    }
    
    int cont = 0;

    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
        cont++;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }

    free(count);
    free(output);
    clock_t end_time = clock(); // Detener el temporizador
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC; // Calcular el tiempo transcurrido en segundos
    printf("Tiempo de ejecucion de countingsort: %.6f segundos\n", elapsed_time);
	printf("countingsort se ejecuto %d veces.\n", cont);
}
/////////////////////////////////////////////////////////////////////////////////

///////// radix sort ///////////////////////////////////////////////

int getMax(int arr[], int n) {
	
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
    
}




void countSortRadix(int arr[], int n, int exp) {
// Creamos un arreglo temporal para almacenar los elementos ordenados
    int output[n];
   
    // Declaración de variables locales
    int i, count[10] = {0};  //count se utiliza para almacenar la frecuencia de los dígitos (0-9)
  
  	// Contamos la frecuencia de cada dígito en el arreglo original
    for (i = 0; i < n; i++){
	  count[(arr[i] / exp) % 10]++;
 	}
 	
  // Modificamos count para que contenga las posiciones finales de cada dígito en el arreglo ordenado
    for (i = 1; i < 10; i++){
	   count[i] += count[i - 1];
    }
    int cont = 0;
  
  // Construimos el arreglo ordenado en el arreglo output usando la información de count
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
        cont++;
    }
  
  // Copiamos los elementos ordenados desde output de nuevo a arr
    for (i = 0; i < n; i++){
	
        arr[i] = output[i];
     }
}

  
void radixSort(int arr[], int n) {
	
	clock_t start_time = clock(); // Iniciar el temporizador
    int m = getMax(arr, n);        // Obtenemos el valor máximo del arreglo
  
    // Iteramos sobre cada posición de los dígitos en el número
    // Empezamos por el dígito menos significativo (exp = 1)
    // y avanzamos al siguiente dígito multiplicando por 10
    
    for (int exp = 1; m / exp > 0; exp *= 10)
    
        countSortRadix(arr, n, exp); //Llamamos a la función countSortRadix para ordenar los elementos

    clock_t end_time = clock(); // Detener el temporizador
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC; // Calcular el tiempo transcurrido en segundos
    printf("Tiempo de ejecucion de radixSort: %.6f segundos\n", elapsed_time);
	 printf("radixSortse ejecuto %d veces.\n", n);
}





