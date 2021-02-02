#include <stdarg.h>

int		ft_printf(const char *s, ...)
{
	
}
/*
Partie obligatoire

Nom du programme : libftprintf.a
Makefile : all clean fclean re bonus
fct authorisees : malloc free write va_star, va_arg, va-copy, va_end

le prtototype de ft_printf devra etre int ft_printf(const char *, ...)
faut recoder printf de la libc
pas gérer le buffer
doit gérer les conversions : cspdiuxX%
doit gérer n'importe quelle combinaison de flag : -0.*
doit gérer la taille de champ minimale
le rendu est comparé au vrai printf (donc tout tester pour avoir les memes
resultats que printf)
MAN 3 PRINTF / MAN 3 STDARG

BONUS (MDRRRRRR)
Gérer les conversions : nfge
Gérer les flags : l ll h hh
Gérer les flags : # ' ' et + (oui espace pas double apostrophe )
*/

/*
COMMENT TRAVAILLER LE SUJET :

Les va_list: 

Il faut naviguer dans les arguments variables grace aux va_list.
D'abord il faut initialiser la va list avec va_start puis naviguer avec va_arg.
va_arg a besoin d'une variable du bon type auquel transferer la valeur de son 
argument actuel.
Doit se finir par un va_end.


La string de format doit etre transposée sans changement tant qu'il n'y a pas
le symbole de la conversion (%).

*:
l'etoile fait passer a l'argument suivant en spécifiant que sa valeur doit 
d'abord etre remplacée par un des argument (suivant ou spécifié par *m$ ou 
m est le numero de l'argument).


*/