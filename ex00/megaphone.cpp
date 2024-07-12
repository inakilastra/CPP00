#include <iostream> 

int main(int argc, char **argv) 
{
  int   i;
  int   j;

  i = 1;
  if (argc == 1) 
  {
    std::cout << "* LOUD AND UNBEARABLE FEDDBACK NOISE *" << std::endl;
    return 1;
  }
  while (i < argc)
  {
    j = 0;
    while (argv[i][j] != '\0')
    {
        std::cout << (char)toupper(argv[i][j]);
        j++;
    }
    i++;
  }
  std::cout << std::endl;
  return 0;
}
