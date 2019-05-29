package main

import (
	"fmt"
	"./event"
)

func main() {
	x := event.Test
	fmt.Println(x)
	y := event.NewEvent()
	y.SetId(uint(1234))
	fmt.Printf("id = %d\n", y.GetId())
	fmt.Printf("example.GetInfo() = %v\n", event.GetExample().GetInfo())
}
