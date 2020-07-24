# Algoritmi di Ordinamento e di Ricerca

Tutti gli algoritmi di ordinamento condividono l’obiettivo di generare un elenco ordinato, ma il modo in cui ciascun algoritmo svolge questa attività può variare.
Quando si lavora con qualsiasi tipo di algoritmo, è importante sapere quanto è veloce e in quanto spazio opera.
Questi fattori sono indicati come Time Complexity e Space Complexity dell’algoritmo.

Ecco alcuni algoritmi di ordinamento noti:

* Bubble Sort
* Selection Sort
* Insertion Sort
* Merge Sort
* QuickSort

Quando si sceglie un algoritmo di ordinamento, è necessario considerare la quantità di dati che si sta ordinando e il tempo necessario per implementare l’algoritmo.
Ad esempio, QuickSort è molto efficiente, ma può essere piuttosto complicato da implementare, mentre, Bubble Sort è semplice da implementare, ma è lento.
Per ordinare piccoli set di dati, Bubble Sort potrebbe essere un’opzione migliore poiché può essere implementata rapidamente, ma per set di dati più grandi, la velocità di QuickSort potrebbe valere la pena di implementare l’algoritmo seppur complesso.
Prima di buttarsi sull’algoritmo che preferiamo o che conosciamo meglio vale la pena valutare tutti gli algoritmi per determinare la soluzione migliore.

## Bubble Sort

Bubble Sort è un algoritmo utilizzato per ordinare una lista di elementi, ad esempio elementi in un array.
L’algoritmo confronta due elementi adiacenti e quindi li scambia se non sono in ordine.
Il processo viene ripetuto fino a quando non è necessario più lo scambio.

Per esempio, consideriamo il seguente array [3,1,5,2]:

1) [1,3,5,2], i primi due elementi vengono confrontati e scambiati.
2) [1,3,5,2], la coppia successiva viene confrontata e non scambiata, poiché sono in ordine.
3) [1,3,2,5], gli ultimi due elementi vengono scambiati.

Questa è stata la prima iterazione sull’array.

Ora dobbiamo iniziare la seconda iterazione:

1) [1,3,2,5]
2) [1,2,3,5]
3) [1,2,3,5]

La terza iterazione non cambierà alcun elemento, il che significa che l’elenco è ordinato!

# Per maggiori informazioni

Mini Corso Base Algoritmi di Ordinamento [Youtube]: link...

Created By Antonio Bernardini Copyright© 2020
