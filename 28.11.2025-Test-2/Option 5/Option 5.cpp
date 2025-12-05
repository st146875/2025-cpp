#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

// Структура для хранения актера
typedef struct {
    char name[50];
    char role[50];
} Actor;

// Структура для хранения массива актеров
typedef struct {
    Actor* actors;     // динамический массив актеров
    int count;         // количество актеров
    int capacity;      // вместимость массива
} ActorList;

// Структура для фильма
typedef struct {
    char title[100];
    char genre[50];
    ActorList actors;  // вложенная структура со списком актеров
} Film;

// Функции для работы с ActorList
void init_actor_list(ActorList* al) {
    al->count = 0;
    al->capacity = 2;
    al->actors = (Actor*)malloc(al->capacity * sizeof(Actor));
}

void add_actor(ActorList* al, const char* name, const char* role) {
    // Если массив заполнен, увеличиваем его размер
    if (al->count >= al->capacity) {
        al->capacity *= 2;
        al->actors = (Actor*)realloc(al->actors,
            al->capacity * sizeof(Actor));
    }

    // Копируем данные актера
    strcpy(al->actors[al->count].name, name);
    strcpy(al->actors[al->count].role, role);
    al->count++;
}

void free_actor_list(ActorList* al) {
    free(al->actors);
    al->actors = NULL;
    al->count = 0;
    al->capacity = 0;
}

// Функции для работы с фильмами
Film* create_films(int n) {
    Film* films = (Film*)malloc(n * sizeof(Film));
    for (int i = 0; i < n; i++) {
        init_actor_list(&films[i].actors);
    }
    return films;
}

Film* find_film_with_most_actors(Film* films, int n) {
    if (n <= 0) return NULL;

    Film* most_actors_film = &films[0];
    int max_actors = films[0].actors.count;

    for (int i = 1; i < n; i++) {
        if (films[i].actors.count > max_actors) {
            most_actors_film = &films[i];
            max_actors = films[i].actors.count;
        }
    }
    return most_actors_film;
}

void print_film(const Film* film) {
    printf("Фильм: %s\n", film->title);
    printf("Жанр: %s\n", film->genre);
    printf("Количество актеров: %d\n", film->actors.count);

    if (film->actors.count > 0) {
        printf("Актерский состав:\n");
        for (int i = 0; i < film->actors.count; i++) {
            printf("  - %s (роль: %s)\n",
                film->actors.actors[i].name,
                film->actors.actors[i].role);
        }
    }
    printf("\n");
}

void free_films(Film* films, int n) {
    for (int i = 0; i < n; i++) {
        free_actor_list(&films[i].actors);
    }
    free(films);
}

void clear_input_buffer() {
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void clear_last_linebreak(char* str) {
    if (str != NULL) {
        str[strcspn(str, "\n")] = '\0';
    }
}

int main(int argc, char** argv) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n = 0;
    printf("Введите количество фильмов: ");
    scanf("%d", &n);
    clear_input_buffer();

    Film* films = create_films(n);

    // Ввод данных о фильмах
    for (int i = 0; i < n; i++) {
        printf("\nФильм %d:\n", i + 1);

        printf("Название: ");
        fgets(films[i].title, sizeof(films[i].title), stdin);
        clear_last_linebreak(films[i].title);

        printf("Жанр: ");
        fgets(films[i].genre, sizeof(films[i].genre), stdin);
        clear_last_linebreak(films[i].genre);

        int actor_count = 0;
        printf("Количество актеров в фильме: ");
        scanf("%d", &actor_count);
        clear_input_buffer();

        for (int j = 0; j < actor_count; j++) {
            char actor_name[50];
            char actor_role[50];

            printf("  Актер %d:\n", j + 1);
            printf("    Имя: ");
            fgets(actor_name, sizeof(actor_name), stdin);
            clear_last_linebreak(actor_name);

            printf("    Роль: ");
            fgets(actor_role, sizeof(actor_role), stdin);
            clear_last_linebreak(actor_role);

            add_actor(&films[i].actors, actor_name, actor_role);
        }
    }

    // Вывод всех фильмов
    printf("\nВсе фильмы:\n");
    for (int i = 0; i < n; i++) {
        printf("\n%d. ", i + 1);
        print_film(&films[i]);
    }

    // Поиск фильма с наибольшим количеством актеров
    Film* film_with_most_actors = find_film_with_most_actors(films, n);
    if (film_with_most_actors) {
        printf("\nФильм с наибольшим количеством актеров:\n");
        print_film(film_with_most_actors);
    }

    free_films(films, n);
    return 0;
}