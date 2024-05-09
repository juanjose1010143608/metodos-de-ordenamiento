# Metodos de Ordenamiento

Los métodos de ordenamiento son algoritmos que organizan los registros de una tabla en algún orden secuencial según un criterio dado. Este proceso se basa en el valor
e un campo dentro de un conjunto de datos y puede realizarse de manera iterativa o recursiva, según la naturaleza y la forma de ejecución del método.

En principio, contamos con el menú interactivo, el cual nos brinda diferentes opciones de lo que podemos hacer con el programa.

        printf("\nMenu:\n");
        printf("1. Agregar numero\n");
        printf("2. Eliminar numero\n");
        printf("3. Metodos de ordenamiento\n");
        printf("4. Mostrar lista del archivo\n");
        printf("5. Cargar desde archivo\n");
        printf("6. Guardar en archivo\n");
		printf("7. Salir\n");

###Opcion N°1 Agrgar numero

en la primera opcion contamos con un submenu, donde podemos ingresar un solo numero o tambien un vector de numeros.

            	printf("1.Ingresar un numero\n");
            	printf("2.Ingresar un vector\n");
            	printf("Ingrese su opcion: ");

###Opcion N°2 Eliminar numero

En la segunda opcion tenemos la funcion de eliminar algun numero de nuestra lista.
Su codigo es el siguiente. 

    void deletenode(Node** head, int data) {
	Node* temp = *head;  // Se asigna el puntero 'temp' para que apunte al inicio de la lista
	Node* prev = NULL;  // Se inicializa el puntero 'prev' como NULL para rastrear el nodo anterior al nodo actual

	// Verifica si el nodo a eliminar es el primer nodo de la lista
		if (temp != NULL && temp->data == data) {
			*head = temp->next;  // Actualiza el inicio de la lista para que apunte al siguiente nodo
			free(temp);  // Libera la memoria del nodo eliminado.
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

		printf("El numero se elimino de la lista.\n");	
		prev->next = temp->next;  // Enlaza el nodo anterior al nodo siguiente al nodo a eliminar, omitiéndolo
		free(temp);               // Libera la memoria del nodo eliminado
        }
 
 ### Opcion N°3 Metodos de ordenamiento
 
 En la tercera opcion tenemos un submenu, donde mostramos 9 metodos de ordenamiento, donde el usuario escogera el que desee.
 
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
				
a continuacion mostraremos la explicacion de cada metodo de ordenamiento con sus respectivos codigos.

### 1. Bubble Sort
BubbleSort es un algoritmo de clasificación simple. Funciona comparando cada elemento de la lista ordenada con el elemento que le sigue y cambiando su posición si están desordenados (n>n+1). Debe repetir este proceso varias veces hasta que no sean necesarios más cambios, lo que significa que la lista estará ordenada.

Este es el respectivo codigo para un ordenamiento por BubbleSort

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

### 2. Selection Sort
El método de clasificación de la selección consiste en encontrar el más pequeño de todos los elementos no clasificados y colocarlo al principio, tras lo cual se debe repetir lo mismo con los demás (los que ya están ordenados no se consideran).

     int arr[6000];  // Declara un arreglo 'arr' de tamaño 5000 para almacenar los datos de la lista enlazada.
     	Node* current = head;  // Declara un puntero 'current' y lo inicializa apuntando al primer nodo de la lista enlazada.
     	 int i = 0; // Inicializa un contador 'i' para rastrear el índice actual en el arreglo 'arr'
                            
	// Recorre la lista enlazada y almacena los datos en el arreglo 'arr'
		while (current != NULL) {
               rr[i++] = current->data;  // Almacena el dato del nodo actual en el arreglo 'arr' y luego incrementa 'i'
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
						

### 3. Insertion Sort
El método de clasificación de entrada itera sobre la lista para ordenar, toma el elemento actual y lo inserta donde debería estar, y lo compara con el elemento ya pasado. Este es un ejemplo más claro del método de clasificación de entrada:

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

### 4. Merge Sort
Este algoritmo divide recursivamente la lista por la mitad hasta que cada mitad contiene un elemento. Luego une estas mitades en orden, comparando y combinando los elementos en una lista ordenada más grande. Por su naturaleza recursiva y la combinación de sublistas ordenadas.

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

### 5. Quick Sort
Es un algoritmo de ordenamiento eficiente y ampliamente utilizado. Funciona dividiendo el arreglo en subconjuntos más pequeños, ordenando recursivamente cada subconjunto y luego combinándolos para obtener el arreglo ordenado. Utiliza una estrategia de "divide y vencerás" para lograr su eficiencia.

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

### 6. Bucket Sort
Es un algoritmo de ordenamiento que funciona dividiendo el rango de valores del arreglo en un número finito de "cubetas" o "buckets". Luego, distribuye los elementos del arreglo en estas cubetas y luego ordena cada cubeta individualmente, ya sea utilizando otro algoritmo de ordenamiento o recursivamente aplicando bucket sort si es necesario. Finalmente, concatena las cubetas ordenadas para obtener el arreglo ordenado completo.
 
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

### 7. Shell Sort
Shell sort, también conocido como ordenación por incrementos decrecientes, es un algoritmo de ordenamiento que mejora el rendimiento del algoritmo de inserción. Funciona comparando elementos distantes entre sí y moviéndolos hacia la posición correcta utilizando una secuencia de intervalos llamados "gaps". La idea es reducir la cantidad de elementos que necesitan ser movidos de manera significativa.

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
			        
### 8. Counting Sort
Es un algoritmo de ordenamiento que funciona bien para ordenar un conjunto de elementos cuyos valores están en un rango específico. Utiliza la información sobre la frecuencia de cada elemento en el arreglo para ordenarlos de manera eficiente.

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

### 9. Radix Sort
Es un algoritmo de ordenamiento que ordena los elementos comparando sus dígitos de manera incremental, desde el dígito menos significativo hasta el más significativo o viceversa, dependiendo de la implementación. Este algoritmo se basa en el principio de que los elementos con el mismo dígito en una posición específica se ordenan antes que aquellos con un dígito diferente en esa posición.

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
						

### Opcion N°4 Imprimir lista

En esta opcion se imprime la lista de numeros que contiene nuestro programa, cuenta con un contador y un salto de linea, para que cada que lea una cantidad haga un salto de linea.

    	void display(Node* head) {
          Node* current = head;
   		  if (head == NULL) {
             printf("La lista esta vacia.\n");
          return;
    }
   		 int count = 0;  // Contador para controlar el número de elementos por columna
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

### Opcion N°5 Cargar Archivo 

En esta funcion tenemos la opcion de poder cargar un archivo txt que contenga una cierta cantidad de datos integrados.

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
Este codigo recibe un archivo de texto con numeros en su interior, sus listas deben de estar separadas por espacio y sin ningun otro simbolos, solo leera numeros nada de lestras, el archivo que se integrara debe de estar en la misma ubicacion que se encuentra ubicada el programa para que este funcione correctamente.

#conclusion

Este codigo puede ordenar una cantidad de 5000 datos numericos que esten enlistados, puede agregar mas datos y tambien puede eliminarlos, tiene su tiempo en segundos y su cantidad de iteraciones cada ves que se ejecuta un metodo de ordenamiento.













