/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlatrech <mlatrech@students.42lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:56:15 by mlatrech          #+#    #+#             */
/*   Updated: 2021/02/10 14:56:15 by mlatrech         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int		ft_printf(const char *s, ...)
{
	
}
/*
Partie obligatoire

Nom du programme : libftprintf.a
Makefile : all clean fclean re bonus
fct authorisees : malloc free write va_star, va_arg, va-copy, va_end

le prototype de ft_printf devra etre int ft_printf(const char *, ...)
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
D'abord il faut initialiser la va list avec va_start(nom_de_valist,
dernier_argument_connu) puis naviguer avec va_arg.
va_arg a besoin d'une variable du bon type auquel transferer la valeur de son 
argument actuel.
Doit se finir par un va_end.


La string de format doit etre transposée sans changement tant qu'il n'y a pas
le symbole de la conversion (%).

*:
l'etoile fait passer a l'argument suivant en spécifiant que sa valeur doit 
d'abord etre remplacée par un des argument (suivant ou spécifié par *m$ ou 
m est le numero de l'argument).


FORMAT : Flag --> FW --> Précision.


idee :on imprime tout au fur et a mesure parceque avec une idee de remplacer
au fur et a mesure je vais me heurter au probleme de la conversion %% qui va
trigger en boucle.

Du coup tout ce qui n'est pas un conversion on imprime direct sans se poser de
question.

Des qu'on rencontre une conversion on l'envoie dans l'unité de traitement de
cette conversion, chaque unité de traitement de conversion doit se charger
d'appeler les diverses fonction de pré-conversion adaptées

conversions :

c : la conversion traduit l'int en 1 seul char et l'ecrit après la FW (avant si
-).

s : la conversion copie l'argument censé etre un pointeur sur une string écrit
jusqu'a trouver un NULL. La précision donne le nombre maximum de Char a
imprimer.

p : prend un void *x et l'imprime en hexadecimal. Il faut donc traduire l'adresse
du pointeur que l'on recoit en hexa decimal. Pas d'effet de la precision.

d / i : ItoA --> la précision indique le nombre de chiffres a print MINIMUM. Si
le nombre est plus petit on met des zeros a gauche. Si on met une précision de 0
et que nombre est 0 la sortie est vide.

u : pareil mais unsigned

x / X : ItoX --> convertit et imprime en format hexadécimal. x = lettre en
minuscule. X = lettres en majuscule. Sinon pareil que d/i/u.

% : ecrit % et ne prend aucun flag.
*/