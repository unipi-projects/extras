# Γιατί να μάθει κάποιος C;

* Η **C** είναι πολύ ευπροσάρμοστη σαν γλώσσα προγραμματισμού και είναι μία γλώσσα η οποία χρησιμοποιείται σχεδόν παντού.
* Όταν κάποιος μάθει να προγραμματίζει σε **C** στην ουσία έχει μάθει να προγραμματίζει σε σχεδόν όλες τις γλώσσες που υπάρχουν.
* Η **C** είναι γλώσσα προγραμματισμού γενικής χρήσης. Συνήθως όμως την βλέπουμε σε **microcontrollers**, **operating systems** κ.α.
* Είναι εύκολη γλώσσα να μάθει κάποιος και μάλιστα του δίνει την δυνατότητα του προγραμματισμού σε πολύ χαμηλό επίπεδο.
* Είναι πάρα πολύ γρήγορη γλώσσα.

***

# Hello, World!

Το πρώτο πρόγραμμα όλων όταν μαθαίνουν μία νέα γλώσσα προγραμματισμού είναι το γνωστό **Hello, World!**.

Στην **C** θα το γράφαμε ως εξής:

```C
#include <stdio.h>

void main(void)
{
	printf("Hello, World!\n");
}
```

1. **#include <stdio.h>**

H C έχει μία μεγάλη γκάμα βιβλιοθηκών (**libraries**) με έτοιμες συναρτήσεις που μπορούμε να χρησιμοποιήσουμε. Μία από αυτές τις βιοβλιοθήκες είναι η **stdio** *standard input-output library*.

2. **void main(void)** 

H **C** είναι function-based γλώσσα προγραμματισμού. Κάθε συνάρτηση (**function**) δέχεται καμία ή παραπάνω παραμέτρους και μπορεί να επιστρέψει μία τιμή.

Πάντα αρχίζουμε με τον τύπο της συνάρτησης (στην περίπτωση μας **void**) και αμέσως μετά δίνουμε το όνομα της συνάρτησης (στην περίπτωση μας **main**). Μετά το όνομα της συνάρτησης ακολουθούν οι παρενθέσεις στις οποίες βάζουμε τις παραμέτρους.

**Σημείωση**: Αν δεν θέλουμε να έχει καμία παράμετρο τότε βάζουμε **void** στις παρενθέσεις (όπως κάναμε και στο παράδειγμα).

3. **printf("Hello, World!\n");**

Εδώ χρησιμοποιούμε την συνάρτηση `printf()` και της περνάμε μία παράμετρο. Η δουλειά της είναι να εκτυπώσει αυτό το μύνημα στην οθόνη του υπολογιστή. Η συνάρτηση αυτή είναι έτοιμη και υπάρχει στην βιβλιοθήκη **stdio** οπότε για να την χρησιμοποιήσουμε πρέπει να περιλλάβουμε την βιβλιοθήκη αυτή στο πρόγραμμα μας.

***

# Installing a Compiler

Θα αφήσω μερικά Links εδώ για την εγκατάσταση του **GCC**:

## Windows

GCC: [mingw-64](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download)

Ορίστε και ένα Site με βίντεο για την εγκατάσταση του. Γενικά στα Windows είναι λίγο περίπλοκο αλλά αν ακολουθήσετε το tutorial η δουλειά γίνεται γρήγορα.

Site: [tutorial](http://www.codebind.com/cprogramming/install-mingw-windows-10-gcc/)

**Σημείωση**: Το tutorial είναι από το 2016. Η διαδικασία είναι ίδια απλά αντί να το κατεβάσετε από αυτο που δείχνει. Απλά πάτε στο Link που παρέχω πιο πάνω.

## Linux

Τα περισσότερα Linux Distributions έρχονται ήδη με έναν C compiler (συνήθως **gcc**) οπότε είστε κομπλέ.

## MacOs

Δεν γνωρίζω πολλά για τα macOs αλλά έχω βρει αυτό το βίντεο:

[Install GCC on MacOS](https://youtu.be/0z-fCNNqfEg)

Σε κάθε περίπτωση ανοίγουμε ένα **terminal** ή το **cmd** (αν είμαστε από Windows) και γράφουμε:

`gcc --version`

Ώστε να σιγουρευτούμε ότι όλα πήγαν καλά. Αν δεν βγάλει την έκδωση (δλδ έναν αριθμό) του gcc τότε κάπου έχει γίνει λάθος.

***
# Installing IDE or Text Editor

Για την δημιουργία προγραμμάτων σε **C** χρησιμοποιούμε είτε έναν **IDE** είτε έναν **Text Editor**.

Μερικά **IDE**:

1. [Eclipse](https://www.eclipse.org/downloads/packages/release/2021-03/r/eclipse-ide-cc-developers) [Windows/Linux/MacOs]
2. [Code::Blocks](https://www.codeblocks.org/) [Windows/Linux/MacOs]
3. [Visual Studio](https://visualstudio.microsoft.com/vs/) [Windows]
4. [CLion](https://www.jetbrains.com/clion/) [Windows/Linux/MacOs]

**Σημείωση**: Το **Visual Studio** και το **CLion** είναι επί πληρωμή αλλά τα παρέχει το πανεπιστήμιο δωρεάν. Οπότε μην τα αγοράσετε.

Μερικά **Text Editors**:

1. [Visual Studio Code](https://code.visualstudio.com/#alt-downloads) [Windows/Linux/MacOS]
2. [Atom](https://atom.io/) [Windows/Linux/MacOs]
3. [Emacs](https://www.gnu.org/software/emacs/) [Windows/Linux/MacOs]
4. [Notepad++](https://notepad-plus-plus.org/) [Windows]
5. [Visual Studio Codium](https://vscodium.com/) [Windows/Linux/MacOs]

**Σημείωση**: Όλα τα Text Editors που αναφέρθηκαν είναι δωρεάν. Υπάρχουν προφανώς πολλά περισσότερα, αλλά νομίζω ένα από αυτά τα πέντε αρκούν. Επίσης θα ήταν καλό να δείτε πως να σετάρετε τον Text Editor της επιλογής σας για **C**. Πχ για το **Visual Studio Code** η διαδικασία είναι [αυτή](https://code.visualstudio.com/docs/languages/cpp).

***
# Compiling Code

Για να αρχίσουμε να δοκιμάζουμε προγράμματα σε C πρέπει να τα κάνουμε **Compile** πρώτα.

Για αρχή δημιουργόυμε ένα αρχείο με όνομα **main.c**.

**Σημείωση**: Όλα τα αρχεία που περιέχουν κώδικα σε C πρέπει να έχουν το extension **.c**

Οπότε δημιουργούμε έναν φάκελο με όνομα **HelloWorld** και μέσω του προγράμματος μας είτε IDE είτε Text Editor φτιάχνουμε το παραπάνω αρχείο.

Εγώ σε όλα θα χρησιμοποιήσω το **Visual Studio Codium**.

![create_main_c.gif](https://github.com/unipi-projects/extras/blob/main/C/gifs/HelloWorld/create_main_c.gif)

Στην συνέχεια γράφουμε τον κώδικα για το **Hello, World!** και κάνουμε Compile.
Θα ήταν καλό να μην πάρετε **Copy Paste** τον κώδικα, αλλά να τον γράψετε μόνοι σας.

Με τον **GCC** Compiler η διαδικασία είναι αρκετά απλή, απλά ανοίγουμε ένα **terminal** ή το **cmd** (αν είμαστε από Windows) στον φάκελο που βρίσκεται το αρχείο μας (στην περίπτωση μας στον φάκελο **HelloWorld**) και γράφουμε την ακόλουθη εντολή:

`gcc main.c -o main`

**Σημείωση**: Στο **Visual Studio Codium** και στο **Visual Studio Code** υπάρχει intergrated terminal. Για να το ενεργοποιήσουμε πατάμε **Ctrl + ~**.

Τέλος για να τρέξουμε το πρόγραμμα γράφουμε **./main** ή **./main.exe**(αν είμαστε από Windows).

![compile_main_c.gif](https://github.com/unipi-projects/extras/blob/main/C/gifs/HelloWorld/compile_main_c.gif)
***

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

**Σημείωση**: Επίσης κάτι καινούριο στον κώδικα αυτό είναι το `//`. Αυτό είναι ένα σχόλιο (**comment**). Αυτό είναι ένα κομμάτι το οποίο δεν μεταφράζεται από τον Compiler. Δηλαδή η **C** το αγνοεί, σαν να μην έχουμε γράψει τίποτα.

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

***

# Basic Operations

Το να δημιουργούμε απλά μεταβλητές και να τις εκτυπώνουμε δεν είναι και τόσο χρήσιμο. Κάτι που είναι αρκετά χρήσιμο είναι οι βασικές πράξεις που μπορούμε να κάνουμε.

* ## Πρόσθεση

```C
int num1 = 5;
int num2 = 3;

int result_add = num1 + num2;	// calculate the result of num1 + num2

printf("result_add = %d\n", result_add);	// print the result of the addition
```

* ## Αφαίρεση

```C
int num3 = 6;
int num4 = 4;

int result_sub = num3 - num4;	// calculate the result of num3 - num4

printf("result_sub = %d\n", result_sub);	// print the result of the subtraction

```

* ## Πολλαπλασιασμός

```C
int num5 = 10;
int num6 = 7;

int result_multi = num5 * num6;	// calculate the result of num5 * num6

printf("result_multi = %d\n", result_multi);	// print the result of the multiplication

```

* ## Διαίρεση

```C
int num7 = 5;
int num8 = 2;

int result_div = num7 / num8;	// calculate the result of num7 / num8

printf("result_div = %d\n", result_div);	// print the result of the division

```

**Σημείωση**: Πρέπει να σημειωθεί πως στην Διαίρεση `/`(**div**) πάντα θα έχουμε έναν ακέραιο ακόμα και αν το αποτέλεσμα θα είναι δεκαδικός. Όπως στο παράδειγμα μας, κανονικά 5 / 2 μας κάνει 2.5 αλλά επειδή είναι **div**, το αποτέλεσμα θα είναι 2.

Παρόλα αυτά δεν είναι ακριβώς σωστό αυτό όταν θέλουμε να βρούμε το ακριβές αποτέλεσμα της διαίρεσης θα πρέπει ένας από τους δύο αριθμούς να είναι **float**.

**Προσοχή** τώρα έχουμε **float** αποτέλεσμα άρα και το **result_div** πρέπει να γίνει float. Επίσης τώρα που θα έχουμε **float** πρέπει να αλλάξουμε το **%d** σε **%f**. 

```C
int num7 = 5;
float num8 = 2;

float result_div = num7 / num8;	// calculate the result of num7 / num8

printf("result_div = %f\n", result_div);	// print the result of the division

```
Τώρα το αποτέλεσμα είναι σωστό **2.5**.

* ## Υπόλοιπο Διαίρεσης

Το Υπόλοιπο της Διαίρεσης είναι πάλι το ίδιο με την απλή διαίρεση, δηλαδή θα επιστρέφει πάντα έναν ακέραιο. Αν θέλουμε να έχουμε δεκαδικό αποτέλεσμα πρέπει ένας από τους δύο αριθμούς να είναι **float**. Για τον υπολογισμό του χρησιμοποιούμαι τον ειδικό τελεστή `%` (**mod**).

```C
int num9 = 5;
int num10 = 2;

int result_mod = num9 % num10;	// calculate the result of num9 % num10

printf("result_mod = %d\n", result_mod);	// print the result of the modulo

```

Τώρα φτιάχνουμε έναν νέο φάκελο με όνομα **BasicOperations** και ένα αρχείο **operations.c**. Και γράφουμε τα από πάνω snippets κώδικα. Στην διαίρεση άφησα μόνο το κομμάτι με τον **float**.

Πιστεύω ότι μέχρι τώρα έχετε μάθει να κάνετε **compile** ένα αρχείο όποτε πάω κατευθείαν στο αποτέλεσμα. Αν βάλατε τους ίδιους αριθμούς με εμένα τα αποτελέσματα είναι τα εξής:


![operation.png](/home/poa/Documents/Languages/C/img/BasicOperations/operations.png)

***
