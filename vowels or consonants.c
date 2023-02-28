//Given a character, to find out if that character is a vowel or consonant can be done in two ways.

//solution:
int main (){
	char c;
	printf("Enter a character: "):
	scanf("%c",&c);
	
	if(c=='a'||c=='e'||c='i'||c='o'||c=='u'||c='A'||c='E'||c='I'||c='O'||c='U'){
		printf("%C is a vowels\n",c);
	}
	else{
		printf("%c is a consonant\n",c);
	}
	
	return 0;		
}
