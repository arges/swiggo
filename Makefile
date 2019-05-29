all:
	go build -x

swig_gen:
	cd event ; swig -go -cgo -c++ -intgosize 64 -package event event.swigcxx

clean:
	rm -f event/event_wrap.cxx event/event.go swiggo
