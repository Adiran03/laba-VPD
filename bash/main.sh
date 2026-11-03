#!/usr/bin/env bash

name_ru="Чнваян Адриан"
name_en="Adrian Chnvayan"
num=29
group="М03-104БВ-26"
lang="Bash"

student_id="$group/29"
control=$((304 * num))

words=$(echo "$name_en" | wc -w)

echo "Hello to 304 from $name_en, number $num, group $group!"
echo "Привет, 304! Это $name_ru, номер $num, группа $group!"
echo "Student ID: $student_id | Language: $lang | Control: $control"
echo "Words: $words"
