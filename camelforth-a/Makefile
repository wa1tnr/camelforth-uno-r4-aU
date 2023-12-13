
mktargeted:	clean
	@echo compile for uno r4 minima
	@arduino-cli compile --fqbn arduino:renesas_uno:minima

comm:
	@cf-fastpico9t /dev/ttyACM0

sleeper:
	@date
	@sleep 1

upload:
	@echo upload to uno r4 minima
	@arduino-cli upload --fqbn arduino:renesas_uno:minima -p /dev/ttyACM0

install:	upload sleeper comm
	@echo done with request to make install

clean:
	@rm -rf /tmp/arduino/cores ; rm -rf /tmp/arduino/sketches
	@echo CLEAN.

# end.
