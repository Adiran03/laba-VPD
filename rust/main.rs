fn main() {
    let name_ru = "Чнаваян Адриан";
    let name_en = "Adrian Chnvayan";
    let num = 29;
    let group = "М03-104БВ-26";
    let lang = "Rust";

    let student_id = format!("{}/{:02}", group, num);
    let control = 304 * num;

    println!("Hello to 304 from {}, number {}, group {}!", name_en, num, group);
    println!("Привет, 304! Это {}, номер {}, группа {}!", name_ru, num, group);
    println!("Student ID: {} | Language: {} | Control: {}", student_id, lang, control);
    println!("Student ID check: {}", student_id);
}
