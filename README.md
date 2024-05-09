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

También contamos con un submenú interactivo, el cual nos brinda nuevas opciones y funciones

            	printf("1.Ingresar un numero\n");
            	printf("2.Ingresar un vector\n");
            	printf("Ingrese su opcion: ");

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
