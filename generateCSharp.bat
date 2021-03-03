@echo off
:: This file is used to generator test.proto sources files

protoc.exe -I=. --csharp_out=. LynxaDeviceMessages.proto
