

targettte:	clean
	@echo compile for uno r4 minima
	@arduino-cli compile --fqbn arduino:renesas_uno:minima

# @arduino-cli compile --fqbn arduino:renesas_uno:minima ${1}
# @./compile.sh

all:

that:
	@echo

comm:
	@cf-fastpico9t /dev/ttyACM0

# ./cf-fastpico9t-uno_r4_wifi.sh /dev/ttyACM0

sleeper:
	@date
	@sleep 1

upload:
	@echo upload to uno r4 minima
	@arduino-cli upload --fqbn arduino:renesas_uno:minima -p /dev/ttyACM0

install:	upload sleeper comm
	@echo done

clean:
	@echo so this is make clean right here
	rm -rf /tmp/arduino/cores ; rm -rf /tmp/arduino/sketches

# end.
