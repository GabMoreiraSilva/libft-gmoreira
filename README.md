# libft-gmoreira
Recreation of the C standard library 

Essa é a criação da Lib que vamos usar durante boa parte da formação, seguindo boas práticas e leaks sendo inaceitáveis.

Utilização
Basta compilar a lib com comando make, e caso queira compilar a bonus é make bonus
```
make
```
```
make bonus
```

Quando for utilizar é necessário passar para o compilador o .a
Exemplo main.c
```
#include "libft.h" //lib
#include <stdlib.h> // Lib com o free para limpar alocação de memória
#include <stdio.h> //Apenas para printar o resultado

int main()
{
  char *frase_com_dump;
  
  frase_com_dump = ft_dump("frase que utiliza malloc para existir");
  printf("%s/n", frase_com_dump);
  free(frase_com_dump);
}
```

Para compilar basta digitar no bash
```
gcc -Wall -Wextra -Werror main.c libft.a 
```
