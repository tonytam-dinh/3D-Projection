#----------------------------------------------------------------------
README
#----------------------------------------------------------------------
Tasks:
  1. Recompile hmwk_06.c and run it again with the arguments
     Tests/Monkey.svfm and Tests/Monkey_setting_01.view and you
     should get the results as shown in the file
     Results/Monkey_01_results.txt.

 2. Capture the output of hmwk_06 in a file with the extension
     "sdf" and you can display it using the provided Display tool.

$ ./hmwk_06 Tests/Monkey.svfm Tests/Monkey_setting_01.view 
#- Model parameters --------------------
# Vertex count       :   507
# Face count         :   967
# Patch count        :     0
# Patch vertex count :     0
# Minimum            : (     -1.367188,     -0.984375,     -0.851562 )
# Maximum            : (      1.367188,      0.984375,      0.851562 )
# Center             : (      0.000000,      0.000000,      0.000000 )
# Size               : (      2.734376,      1.968750,      1.703124 )
#---------------------------------------
#- View parameters ---------------------
# Bézier resolution :     0
# Backface culling? : Yes
# Euler angles      :     25.000000,    -10.000000,     17.000000
# World limits      :     -1.640625,     -1.181250,      1.640625,      1.181250
# Camera distance   :      2.000000
# Canvas width      :   800
# Canvas height     :   800
# Screen limits     :      0.050000,      0.050000,      0.950000,      0.950000
# Portal pixels     :   40,  760,   40,  760
#---------------------------------------
#- Projection parameters ---------------
# (fx, fy) : (      1.640625,      1.181250 )
# (gx, gy) : (     40.000000,     40.000000 )
# (sx, sy) : (    219.428571,    304.761905 )
# (ax, ay) : (    400.000000,    400.000000 )
# Camera distance :      2.000000
#---------------------------------------
#- Rotation parameters -----------------
# r00, r01, r02 :      0.941776,     -0.287930,     -0.173648
# r10, r11, r12 :      0.194799,      0.888163,     -0.416198
# r20, r21, r22 :      0.274064,      0.358139,      0.892539
# ex,  ey,  ez  :      0.000000,      0.000000,      0.000000
#---------------------------------------
c  800  800
l     40.0     40.0     40.0    760.0
l     40.0    760.0    760.0    760.0
l    760.0    760.0    760.0     40.0
l    760.0     40.0     40.0     40.0

#----------------------------------------------------------------------