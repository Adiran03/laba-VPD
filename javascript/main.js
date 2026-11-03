let nameRu = "Чнваня Адриан";
let nameEn = "Adrian Chnvanya";
let num = 29;
let group = "М03-104БВ-26";
let lang = "JavaScript";

let studentId = `${group}/${num < 10 ? '0' + num : num}`;
let control = 304 * num;

console.log(`Hello to 304 from ${nameEn}, number ${num}, group ${group}!`);
console.log(`Привет, 304! Это ${nameRu}, номер ${num}, группа ${group}!`);
console.log(`Student ID: ${studentId} | Language: ${lang} | Control: ${control}`);
console.log(`Length: ${nameEn.length}`);
