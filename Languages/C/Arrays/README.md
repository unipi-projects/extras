# Arrays

Οι πίνακες είναι ένας εύκολος τρόπος να "μαζέψουμε" πολλές τιμές σε ένα μέρος. Για παράδειγμα αν έχουμε δημιουργήσει ένα παιχνίδι το οποίο έχει αρκετούς Players και εμείς θέλουμε να κρατάμε το **Score** του **κάθε** Player δεν βγάζει νοήμα να έχουμε μία μεταβλητή για κάθε Score.

Εδώ είναι μία κλασσική περίπτωση χρήσης ενός πίνακα, μπορούμε να κρατάμε το Score του κάθε Player σε έναν πίνακα.

Για αρχή ας μάθουμε πως κάνουμε `declare` έναν πίνακα στην **C**.

```C
int main(void)
{
	// create an array to hold the score of each player
    int score_of_players[50];
	
	// insert the score of PLayer1 to the array
	score_of_players[0] = 264;
	
	int player1_score = score_of_players[0]; 
	
	return 0;
}
```

Η σύνταξη είναι αρκετά απλή. Στην ουσία είναι σαν να δημιουργούμε μία απλή μεταβλητή απλά στο τέλος βάζουμε τα brackets `[]`.

Εμείς όμως έχουμε γράψει `int score_of_players[50];`. Αν δεν βάζαμε έναν αριθμό μέσα στα brackets τότε θα είχαμε **error**.

Ο λόγος που βάζουμε έναν αριθμό είναι επειδή ένας πίνακας πρέπει να γνωρίζει το μέγεθος του απο πριν. Δηλαδή όποιον αριθμό βάλουμε στα brackets τόσα στοιχεία θα χωράει ο πίνακας. 

Ο πίνακας αυτός ονομάζεται **στατικός**, το οποίο σημαίνει ότι δεν μπορεί να αλλάξει μέγεθος κατά την διάρκεια εκτέλεσης του προγράμματος.

Οπότε η γραμμή `int score_of_players[50];` λέει στην **C** ότι έχουμε έναν πίνακα που χωράει μέχρι και **50** στοιχεία τύπου **int**. Επειδή είναι τύπου int δεν μπορούμε να του εκχωρήσουμε στοιχεία άλλου τύπου. 

Στην επόμενη γραμμή βλέπουμε `score_of_players[0] = 264;`, εδώ στην ουσία κάνουμε access το πρώτο κελί του πίνακα και του εκχωρούμε την τιμή **264**. Οι πίνακες στην **C** όπως και σε πολλές άλλες γλώσσες αρχιζουν από το `0` την αρίθμηση τους.

Τέλος οι πίνακες μπορούν να χρησιμοποιηθούν όπως οποιαδήποτε άλλη μεταβλητή. Γι αυτό και στην επόμενη γραμμή `int player1_score = score_of_players[0]; ` περνάμε την τιμή που έχει ο πίνακας στο πρώτο κελί σε μία άλλη μεταβλητή.

Γενικά πρέπει να θυμόμαστε τα εξής:

* Στην **C** οι πίνακες αρχίζουν την αρίθμηση τους από το `0`.
* Πρέπει πάντα κατά την δήλωση τους να δίνεται το μέγεθος του πίνακα.

##  Multidimensional Arrays

Μέχρι στιγμής έχουμε δει πίνακες με μία διάσταση αλλά υπάρχουν και πίνακες με παραπάνω διαστάσιες όπως $2$ διαστάσεων, $3$ διαστάσεων και $4$ διαστάσεων.

Γενικά πάνω από $2$ διαστάσεων πίνακες δεν συνηθίζουμε να χρησιμοποιούμαι.

Στην **C** μπορούμε πολύ εύκολα να δημιουργήσουμε έναν πίνακα $2$ διαστάσεων, η σύνταξη είναι πολύ παρόμοια με την σύνταξη για την δημιουργία ενός μονοδιάστατου πίνακα.

```C
// creating a 2 dimensional array
int checkboard[8][8]
```

Μπορούμε να σκεφτούμε τους δισδιάστατους πίνακες ώς μία σκακιέρα με $x$ γραμμές και $y$ στήλες. Στην περίπτωση μας φτιάξαμε έναν πίνακα με $8$ γραμμές και $8$ στήλες.

## Arrays as Function Arguments

Το να ορίσουμε πίνακες ως ορίσματα είναι πολύ απλό. Απλά φτιάχνουμε μία συνάρτηση με όρισμα τον πίνακα μας.

Όταν καλούμε την συνάρτηση αυτή για να περάσουμε έναν πίνακα που θέλουμε δεν περιλαμβάνουμε brackets `[]`.

```C
void Something(int array[]);    // prototyped function

int main(void)
{
    // creating a simple array with 3 values
    int score[] = {130, 46, 149};
    
    // calling Something function and passing the entire score array to it
    Something(score);
}

void Something(int array[])
{
    // code
}
```

Όπως βλέπουμε όταν καλούμε την συνάρτηση `Something` στην `main`, της περνάμε τον πίνακα `score` αλλά δεν χρησιμοποιούμαι τα  brackets`[]`.

Χρησιμοποιούμε τα brackets μόνο αν θέλουμε να περάσουμε μία συγκεκριμένη τιμή του πίνακα στην συνάρτηση.

```C
#include <stdio.h>

void Something(int array[]);    // prototyped function

int main(void)
{
    // creating a simple array with 3 values
    int score[] = {130, 46, 149};

    // calling Something function and passing the second value of 
    // the score array
    Something(score[1]);
}

void Something(int array[])
{
    printf("array = %d\n", array);
}
```

**Σημείωση**: Μπορεί σε αυτή την περίπτωση να βρείτε κάποια **Warnings**. Για την ώρα αγνοήστε τα γιατί όλα θα εξαφανιστούν όταν μάθουμε pointers.

## Sorting an Array

Η διαδικασία της ταξινόμησης ενός πίνακα μπορεί να γίνει με πολλούς τρόπους. Ορισμένοι είναι εύκολοι αλλά όχι αποδοτικοί και πρέπει να απογεύγονται.

Ένας από τους πιο εύκολους τρόπους ταξινόμησης είναι ο λεγόμενος **Bubble Sort**. Αυτός ο αλγόριθμος αν και είναι απλός στην δημιουργία του δεν είναι καθόλου γρήγορος και καθόλου αποδοτικός.

Μία καλύτερη λύση σε αυτόν τον αλγόριθμο είναι ο **Selection Sort**. Αν και σε αυτή την περίπτωση η απόδοση δεν είναι καλή, ο συγκεκριμένος είναι πολύ καλύτερος από τον Bubble Sort και είναι ισάξιος στην ευκολία δημιουργίας του. 

Στην ουσία ο **Selection Sort** ψάχνει να βρει την μιρκότερη τιμή του πίνακα και την τοποθετεί στο πρώτο κελί του πίνακα. Μετά συνεχίζει την διαδικασία χωρίς να συγκρίνει το πρώτο στοιχείο, βάζοντας τα αμέσως μικρότερο στοιχείο στην δεύτερη θέση του πίνακα κτλ.

```C
/*
Simple implementation of Selection Sort in C
*/
#include <stdio.h>


void Swap(int *array_value_1, int *array_value_2);      // Swap the values of two variables
void SelectionSort(int array[], int length_of_array);    // Sort an array using Selection Sort

int main(void)
{
    int array[] = {9, 1, 7, 16, 5};

    // get the length of the array by dividing the bytes of
    // the entire array and the bytes of the first element
    int length_of_array = sizeof(array)/sizeof(array[0]);

    printf("Array before sorting:\n");

    // print each element of the unsorted array
    for(int i = 0; i < length_of_array; ++i)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    SelectionSort(array, length_of_array);

    printf("\nArray after sorting:\n");

    // print each element of the sorted array
    for(int i = 0; i < length_of_array; ++i)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }
	
	  return 0;
} // End of main

void Swap(int *array_value_1, int *array_value_2)
{
    int temp = *array_value_1;
    *array_value_1 = *array_value_2;
    *array_value_2 = temp;
}

void SelectionSort(int array[], int length_of_array)
{
    for(int i = 0; i < length_of_array-1; ++i)
    {
        int small = i;
        for(int j = i + 1; j < length_of_array; ++j)
        {
	          // Find the smallest element of the array
            if(array[j] < array[small]) 
            {
                small = j;
            }
        }

        if(small != i)
        {
	          Swap(&array[i], &array[small]); // Call function to swap the values
        }
    }
}
```

Όπως είναι φανερό ο αλγόριθμος του **Selection Sort** δεν είναι πολύ μεγάλος και δεν είναι δύσκολος στην κατανόηση. Οπότε αν θέλουμε να ταξινομήσουμε έναν πίνακα που δεν έχει υπερβολικά μεγάλο αριθμό στοιχείων τότε μπορούμε εύκολα με τον Selection Sort.

**Σημείωση**: Για την υλοποίηση της συνάρτησης `Swap` χρησιμοποίησα **pointers** και επειδή δεν τους έχουμε μάθει ακόμα μπορεί να έχετε μπερδευτεί. Θα σας πρότεινα να βγάλετε την συνάρτηση `Swap` εντελώς, ως αποτέλεσμα να μην χρειαστούμε pointers.

```C
void SelectionSort(int array[], int length_of_array)
{
    for(int i = 0; i < length_of_array-1; ++i)
    {
        int small = i;
        for(int j = i + 1; j < length_of_array; ++j)
        {
	          // Find the smallest element of the array
            if(array[j] < array[small]) 
            {
                small = j;
            }
        }

        if(small != i)
        {
            // swapping values
            int temp = array[i];
            array[i] = array[small];
            array[small] = temp;
        }
    }
}
```
Προφανώς το αποτέλεσμα και στις δύο περιπτώσεις είναι ίδιο.

![selection_sort.png](https://github.com/unipi-projects/extras/blob/main/Languages/C/img/Arrays/selection_sort.png)

[Back: Revisitng Types](https://github.com/unipi-projects/extras/blob/main/Languages/C/RevisitingTypes/README.md)
