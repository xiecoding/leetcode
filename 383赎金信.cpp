    bool canConstruct(string ransomNote, string magazine) {
        bool judge=true;
        int i,j;
        for(i=0;i<((ransomNote=="")?1:(ransomNote.length()));i++){
            for(j=0;j<((magazine=="")?1:(magazine.length()));j++){
                if(ransomNote[i]==magazine[j]){
                    magazine[j]=' ';
                    break;
                }
            }
            if(j>((magazine=="")?1:(magazine.length()-1))){
                judge=false;
                break;
            }
        }
        return judge;
    }
