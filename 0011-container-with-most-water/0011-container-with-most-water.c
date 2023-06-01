// FIRST VERSION - WORKS BUT NOT VERY EFFICIENT 

// int maxArea(int* height, int heightSize){

//     int length = 1, maxHeight, mostOp = 0, sample;
    
//     for(int walker = 0; walker < heightSize; walker++){
        
//         maxHeight = height[walker];
        
//         for(int walker_aux = walker + 1; walker_aux < heightSize; walker_aux++){
            
//             sample = maxHeight > height[walker_aux] ? (maxHeight - (maxHeight - height[walker_aux])) * length : maxHeight * length;
            
//             mostOp = 
            
//             length++;
            
//         }

//         length = 1;
//     }
    
//     return mostOp;
// }

// SECOND VERSION WITH TWO WAY SCAN(At least, that's how i call it)
// EFICIENT BUT NOT VERY LOGICAL AT FIRST
int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int mostOp = 0;
    
    while (left < right) {
        int length = right - left;
        int minHeight = height[left] > height[right] ? (height[left] - (height[left] - height[right])) : height[left];
        int sample = length * minHeight;
        
        mostOp = sample > mostOp ? sample : mostOp;
        
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    
    return mostOp;
}