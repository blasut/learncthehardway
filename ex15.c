#include <stdio.h>

int main(int argc, char *argv[]) {
  int y = 0;

  printf("%p\n", argv);

  for (y = 0; y < argc; y++) {
    printf("%d: %s : %p \n", y, argv[y], &argv[y]);
    printf("%d: %s : %p \n", y, *(argv + y), (argv + y));
  }

  int ages[] = {23, 43, 12, 89, 2};
  char *names[] = {"Alan", "Frank", "Mary", "Joh", "Lisa"};

  int count = sizeof(ages) / sizeof(int);
  int i = 0;

  for (i = 0; i < count; i++) {
    printf("%s has %d years alive.\n", names[i], ages[i]);
  }

  printf("---\n");

  // setup the pointers to the start of the array
  int *cur_age = ages;
  char **cur_name = names;

  // second way using pointers
  for (i = 0; i < count; i++) {
    printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
  }

  printf("---\n");

  // third way, pointers are just arrays
  for (i = 0; i < count; i++) {
    printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
  }

  printf("---\n");

  for (i = 0; i < count; i++) {
    printf("%d: %d : %p \n", i, cur_age[i], &cur_age[i]);
  }

  // fourth way with pointers in a complex way
  for (cur_name = names, cur_age = ages; (cur_age - ages) < count;
       cur_name++, cur_age++) {
    printf("%s lived %d years so far.\n", *cur_name, *cur_age);
  }

  return 0;
}
