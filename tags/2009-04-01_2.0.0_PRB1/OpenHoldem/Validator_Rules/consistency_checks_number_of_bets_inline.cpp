BEGIN_TESTCASE
    TESTCASE_ID ("1700")
    HEURISTIC_RULE (false)
    REASONING ("If it's a FL-game and it's not HU, there can be at most 4 bets for any street.")
    PRECONDITION (gws("isfl") && (gws("nplayersplaying") > 2))
    POSTCONDITION (gws("ncallbets") <= 4)
    SYMBOLS_POSSIBLY_AFFECTED ("isfl, nplayersplaying, ncallbets")
END_TESTCASE
 
 


