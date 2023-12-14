
# **Level2**

### **Walk through**

Using Ghidra to decompile the binary we get:

```
#include "out.h"
...

void no(void)

{
  puts("Nope.");
                    // WARNING: Subroutine does not return
  exit(1);
}

void ok(void)

{
  puts("Good job.");
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 main(void)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  bool bVar4;
  char local_3d;
  char local_3c;
  char local_3b;
  undefined local_3a;
  char local_39 [24];
  char local_21 [9];
  uint local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  
  local_c = 0;
  printf("Please enter key: ");
  local_10 = __isoc99_scanf(&DAT_00012d2e,local_39);
  if (local_10 != 1) {
    no();
  }
  if (local_39[1] != '0') {
    no();
  }
  if (local_39[0] != '0') {
    no();
  }
  fflush(_stdin);
  memset(local_21,0,9);
  local_21[0] = 'd';
  local_3a = 0;
  local_18 = 2;
  local_14 = 1;
  while( true ) {
    sVar2 = strlen(local_21);
    uVar1 = local_18;
    bVar4 = false;
    if (sVar2 < 8) {
      sVar2 = strlen(local_39);
      bVar4 = uVar1 < sVar2;
    }
    if (!bVar4) break;
    local_3d = local_39[local_18];
    local_3c = local_39[local_18 + 1];
    local_3b = local_39[local_18 + 2];
    iVar3 = atoi(&local_3d);
    local_21[local_14] = (char)iVar3;
    local_18 = local_18 + 3;
    local_14 = local_14 + 1;
  }
  local_21[local_14] = '\0';
  iVar3 = strcmp(local_21,"delabere");
  if (iVar3 == 0) {
    ok();
  }
  else {
    no();
  }
  return 0;
}
...
```

This code is a little more dense than the previous level.  
   
The user input is get at the very beginning of the program. Shortly after the scanf, the first two characters of the input are checked. They must be equaled to `'0'`. If not, the function **no()** is called and the program exits.  
  
After those checks, memory for the variable `local_21` is allocated, and its first char is set to `'d'`.  
  
Looking at the end of the decompiled code we observe that the var `local_21` will be compared to the word `"delabere"`. If the comparison return `'0'` the function **ok()** is called, meaning that we've found the password. At first glance it seems a bit strange because the user input is not directly part of the comparison.  

Interesting things happen in the `while` loop. Indeed, we see that the user input is analyzed three characters by three characters. We recall that the first two characters of the input are checked before the loop, that's why the index `local_18` is initialized at 2. The three characters a respectively stored in `local_3d`, `local_3c`, `local_3b`. Right after, **atoi()** is called, its parameter is the number made up by those 3 characters. We can easily deduce that those latter has to be digit. The number given by **atoi()** is assigned to the var `local_21`, starting at the index (`local_14`) `1` because its first character is already set to `'d'` before the loop. After that, the indexes `local_18` and `local_14` are incremented accordingly to the algorithm, so respectively by `3` and `1`.

At this point, we have all we need to find the password. Indeed, we know that the first two characters has to be `'0'` and then the ascii code of each letter composing `"elabere"`. The `'d'` is hard coded, so I must not be part of the user input. Also, knowing that the input is parsed three characters by three characters, if the ascii code of a letter is `<100` we have to prefix it by a `'0'` that will be ignored by the **atoi()** function.

Thus, the password is : **`00101108097098101114101`**

