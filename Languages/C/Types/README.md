# Types in C

H **C** είναι μία **static** γλώσσα προγραμματισμού, το οποίο σημαίνει ότι ο προγραμματιστής πρέπει να δηλώσει τον τύπο μίας μεταβλητής.

Μερικοί τύποι στην C:

* Integer (**int**):

Στους **int** βάζουμε όλους τους **ακέραιους αριθμούς**. Είναι ένας από τους πιο συνηθισμένους τύπους που θα χρησιμοποιούμε.

* Floating-Point (**float**):

Στους **float** βάζουμε όλους τους **δεκαδικούς αριθμούς**.

* Characters (**char**):

Το **char** το χρησιμοποιούμε για τους χαρακτήρες. Για πολλούς χαρακτήρες (πχ. κείμενο) δεν αρκεί το σκέτο *char*.

Για να τους μάθουμε καλύτερα δημιουργούμε έναν νέο φάκελο με όνομα **Types** και μέσα φτιάχνουμε το αρχείο **types.c**. Τέλος γράφουμε τον ακόλουθο κώδικα:

```C
#include <stdio.h>

void main(void)
{
	int a = 5;		// a is an integer
	float b = 22.1;  	// b is a floating-point number
	char c = 'r';	// c is a character

	printf("a =  %d\n", a);
	printf("b =  %f\n", b);
	printf("c =  %c\n", c);
}
```

![types_c.run.gif](https://github.com/unipi-projects/extras/blob/main/C/gifs/Types/types_c_run.gif)

Τώρα στην συνάρτηση `printf()` περνάμε δύο παραμέτρους ένα **string**(κείμενο) και μία μεταβλητή.

Ας δούμε πχ την **γραμμή 9** που έχει το εξής:

```C
printf("a =  %d\n", a);
```
Εδώ περνάμε το "**a = %d\n**" και την μεταβλητή **a**. Το σύμβολο **%d** λέει στην ουσία ότι σε αυτή την θέση (του κειμένου) θα μπει ένας **int**.

Οπότε μπορούμε να καταλάβουμε εύκολα τι σημαίνει και το **%f** και το **%c**.

**Σημείωση**: Επίσης κάτι καινούριο στον κώδικα αυτό είναι το `//`. Αυτό είναι ένα σχόλιο (**comment**). Αυτό είναι ένα κομμάτι το οποίο δεν μεταφράζεται από τον Compiler. Δηλαδή η **C** το αγνοεί, σαν να μην έχουμε γράψει τίποτα

Παρόλα αυτά **τα σχόλια είναι πολύ σημαντικά**. Μας δίνουν την δυνατότητα να θυμόμαστε τι κάναμε, αλλά και βοηθάει άλλους που θα δουν τον κώδικα μας να καταλάβουν τι κάνουμε.

## Ασκήσεις για Εξάσκηση
**Άσκηση 1:**

Τροποποιήστε το αρχείο **types.c** με τέτοιο τρόπο ώστε να εκτυπώνει την ακόλουθη πρόταση:

`a = 7 and b = 18.5`

**Άσκηση 2:**

Τροποποιήστε το αρχείο **types.c** με τέτοιο τρόπο ώστε να εκτυπώνει την ακόλουθη πρόταση:

`not only a = 3 and c = k but also b = 43.1`

**Σημείωση**: Και για τις δύο ασκήσεις πρέπει να χρησιμοποιήσετε μεταβλητές και να μην το γράψετε απλά όπως το βλέπετε.

Δηλαδή το ακόλουθο είναι λάθος:

```C
printf("a = 7 and b = 18.5\n"); 	// wrong, use variables
```