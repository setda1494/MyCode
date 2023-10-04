let array = [52,273,"아침밥","점심밥",true,false]

            array[0] = 0
            for (var i =0; i< array.length;i++) {
                if(array[i]%2==1)
                {
                    break;
                }
                console.log(array[i]);
            }
            while(i<array.length) {
                console.log(array[i]);
                i++
            }