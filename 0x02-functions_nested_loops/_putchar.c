#include <unistd.h>
/**
 * _putchar- writes char c to stdout                     

 * @c: is the char to print                              

 * on error -1 is returned ans set appropraitely         

 */

int _putchar(char c)

{

  return (write(1, &c, 1));

}
