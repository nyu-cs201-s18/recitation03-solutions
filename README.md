# Computer Systems Organization: Recitation 3 - Solutions
---

### Swap

```
	void swap(int *p1, int *p2)
	{
	    int temp = *p1;
	    *p1 = *p2;
	    *p2 = temp;
	}
```

### Vowels

```
	int countVowels(char* str) {
		int i = 0;
		int j;
		int count = 0;
		
		for (j = 0 ; j < strlen(str) ; j++) {
			str[j] = tolower(str[j]);
		}

		char vowels[] = {'a', 'e', 'i', 'o', 'u'};

		while (str[i] != '\0') {
			for (j = 0 ; j < strlen(vowels) ; j++) {
				if (str[i] == vowels[j]) {
					count++;
				}
			}
			i++;
		}
			
		return count;
	}
```

### Reverse

```
	void reverse_array (int * array, int length) {
		int i, temp;
		int j = length - 1;
		for (i = 0 ; i < length / 2 ; i++) {
			temp = array[i];
	  		array[i] = array[j];
	  		array[j] = temp;
	  		j--;
		}
	}

	void print_array (int * array, char * result, int length) {
		int i;
		for (i = 0 ; i < length ; i++) {
			result[i] = array[i] + '0';
		}
		result[length] = '\0';
	}
```

For graders: The Swap and Vowels programs yield the "Correct" message when the program is correct. For reverse, the expected output to the console is "01123587".
