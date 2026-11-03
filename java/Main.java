public class Main {
    public static void main(String[] args) {
        String nameRu = "Чнваня Адриан";
        String nameEn = "Adrian Chnvanya";
        int num = 29;
        String group = "М03-104БВ-26";
        String lang = "Java";

        String studentId = String.format("%s/%02d", group, num);
        int control = 304 * num;

        System.out.printf("Hello to 304 from %s, number %d, group %s!%n", nameEn, num, group);
        System.out.printf("Привет, 304! Это %s, номер %d, группа %s!%n", nameRu, num, group);
        System.out.printf("Student ID: %s | Language: %s | Control: %d%n", studentId, lang, control);
    }
}
