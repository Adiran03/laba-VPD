open System

let nameRu = "Чнаваян Адриан"
let nameEn = "Adrian Chnvanya"
let num = 29
let group = "М03-104БВ-26"
let lang = "F#"

let studentId = sprintf "%s/%02d" group num
let control = 304 * num

printfn "Hello to 304 from %s, number %d, group %s!" nameEn num group
printfn "Привет, 304! Это %s, номер %d, группа %s!" nameRu num group
printfn "Student ID: %s | Language: %s | Control: %d" studentId lang control

let wordsCount = nameEn.Split(' ') |> Array.length
printfn "Words count via pipeline: %d" wordsCount
