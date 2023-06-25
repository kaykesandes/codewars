/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   welcome.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayke <kayke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:06:30 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/24 12:14:33 by kayke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

struct Language {
    const char* name;
    const char* greeting;
};

struct Language languages[] = {
    {"english",    "Welcome"},
    {"czech",      "Vitejte"},
    {"danish",     "Velkomst"},
    {"dutch",      "Welkom"},
    {"estonian",   "Tere tulemast"},
    {"finnish",    "Tervetuloa"},
    {"flemish",    "Welgekomen"},
    {"french",     "Bienvenue"},
    {"german",     "Willkommen"},
    {"irish",      "Failte"},
    {"italian",    "Benvenuto"},
    {"latvian",    "Gaidits"},
    {"lithuanian", "Laukiamas"},
    {"polish",     "Witamy"},
    {"spanish",    "Bienvenido"},
    {"swedish",    "Valkommen"},
    {"welsh",      "Croeso"}
};

const char* greet(const char* language) {
    int numLanguages = sizeof(languages) / sizeof(languages[0]);
    int i = 0;

    while (i < numLanguages) {
        if (strcmp(language, languages[i].name) == 0) {
            return languages[i].greeting;
        }
        i++;
    }

    return "Welcome";
}

int main(void)
{
  printf("%s\n", greet("dutch"));
  printf("%s\n", greet("italian"));
  printf("%s\n", greet("polish"));
  printf("%s\n", greet("invalid"));

}
