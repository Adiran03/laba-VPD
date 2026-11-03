interface Student {
    nameRu: string;
    nameEn: string;
    num: number;
    group: string;
    lang: string;
}

let s: Student = {
    nameRu: "Чнваня Адриан",
    nameEn: "Adrian Chnvanya",
    num: 29,
    group: "М03-104БВ-26",
    lang: "TypeScript"
};

let studentId = `${s.group}/${s.num < 10 ? '0' + s.num : s.num}`;
let control = 304 * s.num;

console.log(`Hello to 304 from ${s.nameEn}, number ${s.num}, group ${s.group}!`);
console.log(`Привет, 304! Это ${s.nameRu}, номер ${s.num}, группа ${s.group}!`);
console.log(`Student ID: ${studentId} | Language: ${s.lang} | Control: ${control}`);
