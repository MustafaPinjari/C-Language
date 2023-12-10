  #include <stdio.h>
  #include <string.h>
  int main() 
  {
        char plainText[100], cipherText[100], val;
        int i = 0, key;

        /* get the plain text from the user */
        printf("Enter the plain text(all caps):");
        fgets(plainText, 100, stdin);

        /* key to convert plain text to cipher text */
        printf("Enter the key to create cipher text(1 - 5):");
        scanf("%d", &key);
        plainText[strlen(plainText) - 1] = '\0';

        /* converting plain text to cipher text */
        while (plainText[i] != '\0') {
                if ((plainText[i] + key) > 'Z') 
                {
                        val = (plainText[i] + key) - 'Z';
                        cipherText[i] = 'A' + val - 1;
                } else {
                        cipherText[i] = plainText[i] + key;
                }
                i++;
        }

        cipherText[i] = '\0';

        printf("Resultant Cipher Text: %s\n", cipherText);
        i = 0;

        /* converting cipher text to plain text */
        printf("Plain Text:");
        while (cipherText[i] != '\0') {
                if ((cipherText[i] - key) < 'A') {
                        printf("%c", 'Z' + 1 - ('A' - (cipherText[i] - key)));
                } else {
                        printf("%c", cipherText[i] - key);
                }
                i++;
        }
        printf("\n");
        return 0;
  }