console.log("selection sort")

let arr=[6,5,3,35,46,75,23,3,4687,564,2342,457,568,856];
let lens=(arr.length)
for(let i=0;i<lens;i++){
    let min = i;
    for(let j=i+1;j<lens;j++){
            if(arr[min] > arr[j]){
                    min =j;
            }
          let k = arr[min]
            arr[min]=arr[i]
            arr[i]=k;
        }

    }

    for(let i=0;i<lens;i++) console.log(arr[i])

