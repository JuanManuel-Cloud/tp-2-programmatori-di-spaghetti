#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void say_hi(){
	printf("Hola\n");
	exit(0);
}

int check_authentication(char *password) {
	int auth_flag = 0;
	char password_buffer[16];

	strcpy(password_buffer, password);

	if (strcmp(password_buffer, "perejil7") == 0)
		auth_flag = 1;
	if (strcmp(password_buffer, "perejil9") == 0)
		auth_flag = 1;

	return auth_flag;
}

int main(int argc, char *argv[])
{
	/* code */
	if (argc < 2) {
		printf("Utilzar: %s <password>\n", argv[0] );
		exit(0);
	}

	if (check_authentication(argv[1])){
		printf("\n---------------------------\n");
		printf("  Acceso permitido..!!       \n");
		printf("-----------------------------\n");
	} else {
		printf("Acceso denegado... :-(\n");
	}
	return 0;
}