bool isSubsequence(char * s, char * t){

    short int lastStep = 0, verifier, chance;

    for(int a = 0; s[a] != NULL; a++){
        verifier = 0;

        for(int b = 0; t[b] != NULL; b++){

            if(s[a] == t[b] && (b > lastStep || lastStep == 0)){
                lastStep = b;
                verifier = 1;

                if(chance == 1)
                    chance = 0;

                break;
            }

            else if(s[a] == t[b] && b < lastStep){
                chance = 1;
            }

            else{
                continue;
            }

        }

        if(verifier == 0 || chance == 1)
            return false;
    }

    return true;
}