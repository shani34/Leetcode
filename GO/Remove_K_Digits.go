package main

import (
	"fmt"
	"strconv"
)



func removeKdigits(num string, k int) string {
     ans:=1000000
	 ptr:=0
	 if len(num)==k{
		return "0"
	 }
	for i:=0; i<len(num)-k+1; i++{
		subStr:=""
		for j:=0; j<ptr; j++{
          subStr+=string(num[j])
		  }

		for p:=ptr+k; p<len(num); p++{
			subStr+=string(num[p])
		}

		if subStr!=""{
		 tmp, _:= strconv.Atoi(subStr)
		 if ans>tmp{
			ans=tmp
		 }
		}

		ptr++
	}

	return strconv.Itoa(ans)
}

func main(){

	 num:= "102"
	 k:= 3

	fmt.Println(removeKdigits(num,k))
}