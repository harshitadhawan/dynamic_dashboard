set title 'Wireframe'
set xlabel 'facewash'
set ylabel 'month_number'
set zlabel 'total_units'
splot 'data.dat' using 1:2:3 with lines lt 1 lw 2 lt rgb 'green'
pause -1
