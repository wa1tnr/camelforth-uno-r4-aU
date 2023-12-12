

targettte:	clean
	@echo compile for uno r4 minima
	@arduino-cli compile --fqbn arduino:renesas_uno:minima

# @arduino-cli compile --fqbn arduino:renesas_uno:minima ${1}
# @./compile.sh

all:

install:
	@echo upload to uno r4 minima
	@arduino-cli upload --fqbn arduino:renesas_uno:minima -p /dev/ttyACM0

# @./upload.sh
# @arduino-cli upload --fqbn arduino:renesas_uno:unor4wifi -p /dev/ttyACM0

comm:
	./cf-fastpico9t-uno_r4_wifi.sh /dev/ttyACM0

clean:
	@echo so this is make clean right here
	rm -rf /tmp/arduino/cores ; rm -rf /tmp/arduino/sketches

# arduino-cli compile --fqbn arduino:renesas_uno:unor4wifi ${1}
# arduino-cli compile --fqbn arduino:renesas_uno:minima ${1}

# end.
