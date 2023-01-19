

bool isIsomorphic(char * s, char * t){


    int sPath[95], tPath[95], count=1;
    
    sPath[0] = s[0];
    tPath[0] = t[0];
                
    for(int a = 0; s[a] != NULL; a++){

        for(int b = 0; b < count; b++){

            if( sPath[b] == (int) s[a]){

                for(int c = 0; c < count; c++){
                    if(tPath[c] == (int) t[a] && c == b){
                        break;
                    }
                    else if (tPath[c] == (int) t[a] && c != b){
                        return false;
                    }
                    else if(c == (count-1)){
                        return false;
                    }
                }
                break;  
            }
            else if(b == (count - 1)){

                sPath[count] = s[a];
                tPath[count] = t[a];
                count++;
            }
        }
        
    }

    return true;
}