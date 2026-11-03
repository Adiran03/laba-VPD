name_ru = "Чнваня Адриан"
name_en = "Adrian Chnvanya"
num = 29
group = "М03-104БВ-26"
lang = "Python"

student_id = f"{group}/{num:02d}"
control = 304 * num

words = len(name_en.split())

print(f"Hello to 304 from {name_en}, number {num}, group {group}!")
print(f"Привет, 304! Это {name_ru}, номер {num}, группа {group}!")
print(f"Student ID: {student_id} | Language: {lang} | Control: {control}")
print(f"Words count: {words}")
