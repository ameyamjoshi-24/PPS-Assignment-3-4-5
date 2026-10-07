#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
   int choice, n;
   char str1[100], str2[200], ch, sub[50];
   char *ptr;
   char *token;
   
   while(1) {
     printf("\n==== String Operations Menu ====\n");
     printf("1. Find length (strlen)\n");
     printf("2. Copy string (strcpy)\n");
     printf("3. Concatenate string (strcat)\n");
     printf("4. Compare string (strcmp)\n");
     printf("5. Find character (strchr)\n");
     printf("6. Find substring (strstr)\n");
     printf("7. Tokenize string (strtok)\n");
     printf("8. Convert to uppercase\n");
     printf("9. Converet to lowercase\n");
     printf("10. Exit\n");
     printf("Enter your choice: ");
     scanf("%d", &choice);
   
     getchar();
     
   switch(choice) {
     case 1:
      printf("enter string: "); fgets(str1, 100, stdin);
      str1[strcspn(str1, "\n")] = '\0';
      printf("Length = %lu\n" , strlen(str1));
      break;
     
     case 2:
      printf("enter source string"); fgets(str1, 100,stdin);
      str1[strcspn(str1, "\n")] = '\0';
      printf("Copied string: %s\n", str2);
      break;
     
     case 3:
      printf("enter first string: "); fgets(str1, 100, stdin);
      str1[strcspn(str1, "\n")] = '\0';
      printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
               
              strcat(str1, str2);
                printf("Concatenated string = %s\n", str1);
                break;

            case 4:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
               
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
               
                int result = strcmp(str1, str2);
                if (result == 0)
                    printf("Strings are equal.\n");
                else if (result > 0)
                    printf("First string is greater than the second.\n");
                else
                    printf("First string is smaller than the second.\n");
                break;

            case 5:
                printf("Enter string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
               
                printf("Enter character to find: ");
                scanf("%c", &ch);
                getchar();
               
                ptr = strchr(str1, ch);
                if (ptr != NULL)
                    printf("Character '%c' found at index: %ld\n", ch, ptr - str1);
                else
                printf("Character '%c' not found.\n", ch);
                break;

            case 6:
                printf("Enter main string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
               
                printf("Enter substring to search: ");
                fgets(sub, sizeof(sub), stdin);
                sub[strcspn(sub, "\n")] = '\0';
               
                ptr = strstr(str1, sub);
                if (ptr != NULL)
                    printf("Substring found at index: %ld\n", ptr - str1);
                else
                    printf("Substring not found.\n");
                break;

            case 7:
                printf("Enter string to tokenize: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
               
                printf("Enter delimiter character(s): ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
               
                printf("Tokens:\n");
                token = strtok(str1, str2);
                while (token != NULL) {
                    printf(" - %s\n", token);
                    token = strtok(NULL, str2);
                }
                break;

            case 8:
                printf("Enter string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
               
                for(int i = 0; str1[i] != '\0'; i++) {
                    str1[i] = toupper((unsigned char)str1[i]);
                }
                printf("Uppercase string = %s\n", str1);
                break;

            case 9:
                printf("Enter string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
               
                for(int i = 0; str1[i] != '\0'; i++) {
                    str1[i] = tolower((unsigned char)str1[i]);
                }
                printf("Lowercase string = %s\n", str1);
                break;

            case 10:
                printf("Exiting program. Goodbye!\n");
                exit(0);

            default:
             printf("Invalid choice! Please enter a number between 1 and 10.\n");
        }
      }
     return 0;
}