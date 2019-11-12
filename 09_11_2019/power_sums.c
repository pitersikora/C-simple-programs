#include <stdio.h>
#include <math.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void clear_array(int array_to_clean[])
{
  for(int i = 0; i < 100; i++)
  {
    array_to_clean[i] = 0;
  }
}

void printf_array(int array_to_print[])
{
  int empty = 1;

  for(int i = 99; i >= 0; i--)
  {
    if(array_to_print[i] != 0 && empty == 1)
    {
      empty = 0;
    }
    if(empty == 0){
      printf(ANSI_COLOR_GREEN"%d"ANSI_COLOR_RESET, array_to_print[i]);
    }
  }
}

void write_array(int what_array[], int num_to_write)
{
  int digit_number = 0;
  int num_to_count = num_to_write;

  // loop for counting digits in a number
  while(num_to_count != 0)
  {
    // n = n/10
    num_to_count /= 10;
    ++digit_number;
  }

  // loop for writing number into array
  for(int i = digit_number - 1; i >= 0; i--)
  {
    int divider = pow(10, i);
    what_array[i] = num_to_write / divider;
    num_to_write = num_to_write % divider;
  }
  for(int i = digit_number; i <= 99; i++)
  {
    what_array[i] = 0;
  }
}

void sum_array(int component[], int sum[])
{
  for(int i = 0; i < 100; i++)
  {
    {
      sum[i] = sum[i] + component[i];
      if(sum[i] >= 10)
      {
        sum[i] = sum[i] % 10;
        sum[i+1] += 1;
      }
    }
  }
}

void multiply_array(int multiplicant[], int multiplier[], int final_array[])
{
  int prepare_array[100] = {0};
  int multiply_res = 0;

  for(int i = 0; i < 100; i++)
  {
    if(multiplicant[i] != 0)
    {
      for(int j = 0; j < 100; j++)
      {
        if(multiplier[j] != 0)
        {
          multiply_res = multiplicant[i] * multiplier[j];
        } else {
          continue;
        }
        prepare_array[j+i] = multiply_res % 10;
        prepare_array[j+i+1] = multiply_res / 10;
        sum_array(prepare_array, final_array);
        clear_array(prepare_array);
      }
    }
  }
}

int main(int argc, char *argv[])
{
  int N;
  int exponent;

  printf("Enter max base number \n");
  scanf("%d", &N);
  printf("Enter max exponent number \n");
  scanf("%d", &exponent);

  printf(ANSI_COLOR_RED"\t POWER \t\t|\t RESULT \t\n");
  printf("-------------------------------------------------\n"ANSI_COLOR_RESET);
  int result[100] = {0};
  int power_base[100] = {0};
  int power_power[100] = {0};
  int power_step[100] = {0};

  for(int e = 1; e <= exponent; e++)
  {
    for(int b = 1; b <= N; b++)
    {
      write_array(power_base, b);
      write_array(power_power, b);
      for(int i = 2; i <=e; i++)
      {
        clear_array(power_step);
        multiply_array(power_base, power_power, power_step);

        //copying array into another
        for(int c = 0; c <= 99; c++)
        {
          power_base[c] = power_step[c];
        }
      }
      if(e == 1){
        sum_array(power_base, result);
      } else {
        sum_array(power_step, result);
      }
    }
    printf(ANSI_COLOR_YELLOW" 1^%d+2^%d+...+%d^%d \t"ANSI_COLOR_RESET, e, e, N, e);
    printf(ANSI_COLOR_RED"| "ANSI_COLOR_RESET);
    printf_array(result);
    printf("\n");
    clear_array(result);
  }
}