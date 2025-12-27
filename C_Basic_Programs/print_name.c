// C Program to Print Your Own Name 
#include <stdio.h>

int main() {
    // Write C code here
    char f_name[10];
    char l_name[10];
    printf("Enter Your First Name: ");
    scanf("%s",&f_name);
    printf("Enter Your Last Name: ");
    scanf("%s",&l_name);
    
    printf("Your Full Name is: %s %s", f_name, l_name);

    return 0;
}
