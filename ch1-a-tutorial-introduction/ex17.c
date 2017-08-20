#include <stdio.h>
#define MAXLINE 1000  // maximum input line size

int get_line(char line[], int maxline);  // getline exists in stdio.h

/* Exercise 1-17: Print lines of length more than 80 characters */
// ============================== long line with more than 80 characters ====================================
int main() {
  int len;  // current line length
  char line[MAXLINE];  // current input line

  while ((len = get_line(line, MAXLINE)) > 0)
    if (len > 80)
      printf("%s", line);
  return 0;
}

/* get_line: read a line into s, return length */
// ============================== another long line with more than 80 characters ====================================
int get_line(char s[], int lim) {
  int c, i;

  for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}