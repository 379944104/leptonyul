rgbasm -ofhbg.obj fhbg.z80
rgblink -t -mfhbg.map -nfhbg.sym -ofhbg.gb fhbg.obj
rgbfix -p0 -v fhbg.gb
pause