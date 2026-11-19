
#include <gtest/gtest.h>
#include "lab_8.2it.cpp"

// Тест 1. Перевірка великих англійських літер
TEST(Lab82, UppercaseLetters) {
    EXPECT_EQ(isLetter('A'), 1);
    EXPECT_EQ(isLetter('Z'), 1);
    EXPECT_EQ(isLetter('M'), 1);
}

// Тест 2. Перевірка малих англійських літер
TEST(Lab82, LowercaseLetters) {
    EXPECT_EQ(isLetter('a'), 1);
    EXPECT_EQ(isLetter('z'), 1);
    EXPECT_EQ(isLetter('m'), 1);
}

// Тест 3. Перевірка цифр та спеціальних символів
TEST(Lab82, NonLetters) {
    EXPECT_EQ(isLetter('1'), 0);
    EXPECT_EQ(isLetter('5'), 0);
    EXPECT_EQ(isLetter('+'), 0);
    EXPECT_EQ(isLetter('!'), 0);
    EXPECT_EQ(isLetter(' '), 0);
}

// Тест 4. Видалення всіх символів, крім літер
TEST(Lab82, RemoveNonLetters) {
    char str[80] = "C++ 2026 is a programming language!";

    for(int i = 0; i < strlen(str); i++){
        if(isLetter(str[i]) == 0) {
     
            for(int j = i; j < strlen(str); j++){
                str[j] = str[j + 1];
            } 

            i--;
        }
    }

    EXPECT_STREQ(str, "Cisaprogramminglanguage");
}

// Тест 5. Перевірка рядка, який містить лише літери
TEST(Lab82, OnlyLetters) {
    char str[80] = "Programming";

    for(int i = 0; i < strlen(str); i++){
        if(isLetter(str[i]) == 0) {
     
            for(int j = i; j < strlen(str); j++){
                str[j] = str[j + 1];
            } 

            i--;
        }
    }

    EXPECT_STREQ(str, "Programming");
}

// Тест 6. Перевірка рядка без літер
TEST(Lab82, NoLetters) {
    char str[80] = "123 + !";

    for(int i = 0; i < strlen(str); i++){
        if(isLetter(str[i]) == 0) {
     
            for(int j = i; j < strlen(str); j++){
                str[j] = str[j + 1];
            } 

            i--;
        }
    }

    EXPECT_STREQ(str, "");
}

// Тест 7. Перевірка видалення символів на початку та в кінці
TEST(Lab82, SymbolsAtBeginningAndEnd) {
    char str[80] = "!!!Hello123";

    for(int i = 0; i < strlen(str); i++){
        if(isLetter(str[i]) == 0) {
     
            for(int j = i; j < strlen(str); j++){
                str[j] = str[j + 1];
            } 

            i--;
        }
    }

    EXPECT_STREQ(str, "Hello");
}