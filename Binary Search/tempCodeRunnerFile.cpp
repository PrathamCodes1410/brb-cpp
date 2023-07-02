int s1 = 0;
    int e1 = pivot - 1;
    int s2 = pivot;
    int e2 = num - 1;

    if(target > arr[e2]){ // this means if target is above 2nd line
        while(s1 <= e1){
            int mid = (s1 + e1) / 2;
            if(arr[mid] == target){
                cout << "Position is : " << mid << endl;
                break;
            }
            if(arr[mid] < target){
                s1 = mid + 1;
            }
            else if(arr[mid] > target){
                e1 =  mid - 1;
            }
        }
    }
    else{  // It means target is in second line
        while(s2 <= e2){
            int mid = (s2 + e2) / 2;
            if(arr[mid] == target){
                cout << "Position is : " << mid << endl;
                break;
            }
            if(arr[mid] < target){
                s2 = mid + 1;
            }
            else if(arr[mid] > target){
                e2 =  mid - 1;
            }
        }
    }