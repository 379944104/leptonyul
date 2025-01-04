island2:
  db LVL_V_CHECKER|$2, $2
  db LVL_V_CHECKER|$1, $13
  db LVL_CHECKER, $24
  db LVL_H_PLAT|$2, $32
  db LVL_H_SOLID|$3, $38
  db LVL_H_SOLID|$2, $29
  db LVL_H_SOLID|$2, $1a
  db LVL_SOLID,   $d
  db LVL_V_LADDER|$1, $2c
  db LVL_H_FENCE|$2, $a
  db LVL_RECT|LVL_POLE,    $48, $30
  db LVL_RECT|LVL_POLE,    $4b, $30
  db LVL_H_CHECKER|$3, $88
  db LVL_RECT|LVL_WATER,   $8c, $3
  db LVL_RECT|LVL_WATER,   $80, $3
  db LVL_H_DIRT|$3, $84
  db LVL_H_FENCE|$3, $74
  db LVL_DONE, $69
