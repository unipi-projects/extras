# Loops

Τα **if** statements είναι χρήσιμα για τη λήψη μίας μόνο απόφασης. Αν θέλουμε να ελέγχουμε όμως 20 πράγματα την φορά δεν βγάζει νόημα να κάνουμε 20 διαφορετικά **if**.

Μπορούμε να φτιάξουμε ένα που θα λειτουργεί για όλα. Γι αυτό τον σκοπό χρησιμοποιούμαι τις επαναλήψεις.

Υπάρχουν 3 είδη επαναλήψεων στην **C**:

* **while**
* **for**
* **do - while**

Πότε όμως χρησιμοποιούμαι την κάθε μία;

## While

Την **while** επανάληψη την χρησιμοποιούμαι όταν δεν γνωρίζουμε το αριθμό των επαναλήψεων που θα γίνουν. Η επανάληψη θα τρέχει όσο η έκφραση που της περνάμε είναι αληθής.

```C
#include <stdio.h>

void main(void)
{
	int num = 15;
	int i = 1;

	while(i < 5)
	{
		num += 5;	// increment num by 5 each iteration
		++i;		// increment i each iteration

		printf("i = %d", i);
		printf(" num = %d\n", num);
	}
}
```

Στο από πάνω παράδειγμα η έκφραση **i < 5** είναι αληθής, και μέσα στην επανάληψη αυξάνουμε το **i** κατά ένα.

Μετά από 4 επαναλήψης η έκφραση **i < 5** παύει να είναι αληθής, με αποτέλεσμα η επανάληψη να σταματήσει.

## For

Την **for** επανάληψη την χρησιμοποιούμαι όταν **γνωρίζουμε το αριθμό των επαναλήψεων** που θα γίνουν.

```C
#include <stdio.h>

void main(void)
{
	int num = 15;

	for(int i = 0; i < 10; ++i)
	{
		num += 5;		// increment num by 5 each iteration
		printf("i = %d", i);
		printf(" num = %d\n", num);
	}
}
```

Σε αυτή την περίπτωση γνωρίζουμε ότι θέλουμε να αυξήσουμε το **num** 10 φορές οπότε χρησιμοποιήσαμε μία **for** επανάληψη.

## Do - While

Την επανάληψη αυτή είναι καλό να την αποφεύγουμε. Γενικά στην θέση της είναι καλύτερο να χρησιμοποιούμε την **while**.

[Back](https://github.com/unipi-projects/extras/blob/main/Languages/C/ConditionsAndControlFlow/README.md)

[Next](https://github.com/unipi-projects/extras/blob/main/Languages/C/IncrementingDecrementing/README.md)
