#include <stdio.h>

// int divides(int a, int b) {
//   if (b % a == 0) {
//     return 1;
//   } else {
//     return 0;
//   }
// }

int parse_int(char *s) {
  int resultado = 0;
  int i = 0;
  int sign = 1;
  if (s[i] == '-') {
    sign = -1;
    i++;
  }
  while (s[i] != 0) {
    resultado = resultado * 10 + s[i] - '0';
    i++;
  }
  return resultado * sign;
}

int is_prime(int n) {
  int res = 1;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      res = 0;
      break;
    }
  }
  return res;
}

int main(int argc, char *argv[]) {
  int n = parse_int(argv[1]);
  int n_prime = is_prime(n);
  printf("%d\n", parse_int(argv[1]));
  printf("%s\n", n_prime ? "es primo" : "no es primo");
  return 0;
}
