
# Computer Systems Organization: Recitation 3 - Solutions
---

### Swap

```c
void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
```

### Swap2

```c
void swap2(int **p1, int **p2){
	int *temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
```

### Vowels

```c
int countVowels(char* str) {
	int i,j;
	int count = 0;

	// For the adventurous
	// for(i=0; str[i] != 0; ++i){
	//    count += ( ((0x208222>>str[i]) & 1) ? 1 : 0);
	//}

	const char vowels[] = "aeiou";
	
	char temp;
	i=0;
	while (str[i] != '\0') {
		temp = tolower(str[i]);
		for (j = 0 ; j < strlen(vowels) ; j++) {
			if (temp == vowels[j]) {
				count++;
				break;
			}
		}
		i++;
	}		
	return count;
}
```

### Reverse

```c
void reverse_array (int * array, int length) {
	int i, temp;
	int j = length - 1;
	while(i<j){
		temp = array[i];
		array[i++] = array[j];
		array[j--] = temp;
	}
}
```

### Secret Message

```c
void decipher( int * message, int size, char * deciphered_message) { 
    const int CHAR_SIZE = 1<<8; 
    int i,j;
    for(i=0;i<size;++i){
		for(j=0;j<sizeof(int)/sizeof(char);++j){
			deciphered_message[j + i*4 ] = message[i] % CHAR_SIZE;
			message[i] /= CHAR_SIZE;
		}
	}
}
```


For graders: The Swap and Vowels programs yield the "Correct" message when the program is correct. For reverse, the expected output to the console is "01123587".
The expected output of the secret message is 'Hello CS201!'.