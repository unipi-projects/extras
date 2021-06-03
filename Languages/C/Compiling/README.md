# Compiling Code

Για να αρχίσουμε να δοκιμάζουμε προγράμματα σε C πρέπει να τα κάνουμε **Compile** πρώτα.

Για αρχή δημιουργόυμε ένα αρχείο με όνομα **main.c**.

**Σημείωση**: Όλα τα αρχεία που περιέχουν κώδικα σε C πρέπει να έχουν το extension **.c**

Οπότε δημιουργούμε έναν φάκελο με όνομα **HelloWorld** και μέσω του προγράμματος μας είτε IDE είτε Text Editor φτιάχνουμε το παραπάνω αρχείο.

Εγώ σε όλα θα χρησιμοποιήσω το **Visual Studio Codium**.

![create_main_c.gif](https://github.com/unipi-projects/extras/blob/main/Languages/C/gifs/HelloWorld/create_main_c.gif)

Στην συνέχεια γράφουμε τον κώδικα για το **Hello, World!** και κάνουμε Compile.
Θα ήταν καλό να μην πάρετε **Copy Paste** τον κώδικα, αλλά να τον γράψετε μόνοι σας.

Με τον **GCC** Compiler η διαδικασία είναι αρκετά απλή, απλά ανοίγουμε ένα **terminal** ή το **cmd** (αν είμαστε από Windows) στον φάκελο που βρίσκεται το αρχείο μας (στην περίπτωση μας στον φάκελο **HelloWorld**) και γράφουμε την ακόλουθη εντολή:

`gcc main.c -o main`

**Σημείωση**: Στο **Visual Studio Codium** και στο **Visual Studio Code** υπάρχει intergrated terminal. Για να το ενεργοποιήσουμε πατάμε `Ctrl + ~`.

Τέλος για να τρέξουμε το πρόγραμμα γράφουμε **./main** ή **./main.exe**(αν είμαστε από Windows).

![compile_main_c.gif](https://github.com/unipi-projects/extras/blob/main/Languages/C/gifs/HelloWorld/compile_main_c.gif)

[Back](https://github.com/unipi-projects/extras/blob/main/Languages/C/InstallingCompiler/README.md)

[Next](https://github.com/unipi-projects/extras/blob/main/Languages/C/Types/README.md)
