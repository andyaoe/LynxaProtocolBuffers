@echo off
:: This file is used to generator test.proto sources files

"nanopb-0.4.4-windows-x86/generator-bin/protoc.exe" -oLynxaDeviceMessages.pb LynxaDeviceMessages.proto
python "nanopb-0.4.4-windows-x86/generator/nanopb_generator.py" LynxaDeviceMessages.pb
