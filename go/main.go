package main

import "fmt"

func main() {
	nameRu := "Чнаваян Адриан"
	nameEn := "Adrian Chnvayan"
	num := 29
	group := "М03-104БВ-26"
	lang := "Go"

	studentId := fmt.Sprintf("%s/%02d", group, num)
	control := 304 * num

	fmt.Printf("Hello to 304 from %s, number %d, group %s!\n", nameEn, num, group)
	fmt.Printf("Привет, 304! Это %s, номер %d, группа %s!\n", nameRu, num, group)
	fmt.Printf("Student ID: %s | Language: %s | Control: %d\n", studentId, lang, control)
}
