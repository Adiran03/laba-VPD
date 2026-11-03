% База данных из одного факта
student('Чнаваян Адриан', 'Adrian Chnvanya', 29, 'М03-104БВ-26', 'Prolog').

get_control(N, Res) :- Res is 304 * N.

main :-
    student(Ru, En, Num, Grp, Lang),
    get_control(Num, Ctrl),
    format('Hello to 304 from ~w, number ~d, group ~w!~n', [En, Num, Grp]),
    format('Привет, 304! Это ~w, номер ~d, группа ~w!~n', [Ru, Num, Grp]),
    format('Student ID: ~w/~d | Language: ~w | Control: ~d~n', [Grp, Num, Lang, Ctrl]),
    halt.
