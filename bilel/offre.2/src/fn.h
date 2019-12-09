#include <gtk/gtk.h>

struct user
{
char login[20];
char password[20];
int role;
};

int verifier(struct user a);

