
## Source file/s

```
src/.
├── body.txt
├── footer.txt
├── header.txt
├── main.c
└── shortcut.h

0 directories, 5 files
```

---


# src/body.txt

```

gne is one of the premier college of India.


It started in 1956 with ce. Currently ced is headed by me.

```

---


# src/footer.txt

```


--- 
Programmed by:
H S Rai
HoD Civil Engineering
GNDEC, Ludhiana

```

---


# src/header.txt

```

gne


```

---


# src/main.c

```

#include "shortcut.h"

#include "header.txt"

#include "body.txt"

#include "footer.txt"

```

---

# src/shortcut.h

```

#define gne Guru Nanak Dev Engineering College, Ludhiana
#define me Hardeep Singh Rai
#define ce Civil Engineering
#define ced Civil Engineering Department

```

---

## Execution

```
cpp -P -traditional-cpp  src/main.c -o  main.i

```


---



# ./main.i

```

Guru Nanak Dev Engineering College, Ludhiana


Guru Nanak Dev Engineering College, Ludhiana is one of the premier college of India.


It started in 1956 with Civil Engineering. Currently Civil Engineering Department is headed by Hardeep Singh Rai.


--- 
Programmed by:
H S Rai
HoD Civil Engineering
GNDEC, Ludhiana

```
