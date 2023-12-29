public class solution{

    public static char nextGreatestLetter(char[] letters, char target) {
        for (int i = 0 ; i < letters.length ; i++){
            if(target<letters[i]){
                return letters[i];
            }
        }
        return letters[0];
    }

    public static void main(String[]args){
        char[] letters = {'c','f','j'};
        char target = 'c';
        char ans ;
        ans =nextGreatestLetter(letters,target);
        System.out.println(ans);
    }
}
