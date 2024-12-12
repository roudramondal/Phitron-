#include<stdio.h>
int main ()
{
  char s[100];
  int freq[26] = {0};
  char chars[26];
  scanf("%s", s);
  for (int i = 0; s[i] != '\0';i++)
  {
    freq[s[i] - 'a']++;
  }
  for (int i = 0; i < 26;i++)
  {
    chars[i] = 'a' + i;
  }
  for (int i = 0; i < 25;i++)
  {
    for (int j = i + 1; j < 26;j++)
    {
      if (freq[i]<freq[j])
      {
        int tempfreq = freq[i];
        freq[i] = freq[j];
        freq[j] = tempfreq;
        char tempchar = chars[i];
        chars[i] = chars[j];
        chars[j] = tempchar;
      }
    }
  }
  for (int i = 0; i < 26;i++)
  {
    for (int j = 0; j < freq[i];j++)
    {
      printf("%c", chars[i]);
    }
  }
  printf("\n");
  return 0;
}