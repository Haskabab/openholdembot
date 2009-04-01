//
// ICM calculator symbols
//

BEGIN_TESTCASE
    TESTCASE_ID ("0292")
    HEURISTIC_RULE (false)
    REASONING ("Range check for symbol icm")
    PRECONDITION (true)
    POSTCONDITION ((gws("icm") >= 0) && (gws("icm") <= 1))
    SYMBOLS_POSSIBLY_AFFECTED ("icm")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0293")
    HEURISTIC_RULE (false)
    REASONING ("Range check for symbol icm_fold")
    PRECONDITION (true)
    POSTCONDITION ((gws("icm_fold") >= 0) && (gws("icm_fold") <= 1))
    SYMBOLS_POSSIBLY_AFFECTED ("icm_fold")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0294")
    HEURISTIC_RULE (false)
    REASONING ("Range check for symbol icm_callwin")
    PRECONDITION (true)
    POSTCONDITION ((gws("icm_callwin") >= 0) && (gws("icm_callwin") <= 1))
    SYMBOLS_POSSIBLY_AFFECTED ("icm_callwin")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0295")
    HEURISTIC_RULE (false)
    REASONING ("Range check for symbol icm_calllose")
    PRECONDITION (true)
    POSTCONDITION ((gws("icm_calllose") >= 0) && (gws("icm_calllose") <= 1))
    SYMBOLS_POSSIBLY_AFFECTED ("icm_calllose")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0296")
    HEURISTIC_RULE (false)
    REASONING ("Range check for symbol icm_calltie")
    PRECONDITION (true)
    POSTCONDITION ((gws("icm_calltie") >= 0) && (gws("icm_calltie") <= 1))
    SYMBOLS_POSSIBLY_AFFECTED ("icm_calltie")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0297")
    HEURISTIC_RULE (false)
    REASONING ("Range check for symbols icm_allilwin0..icm_alliwin9")
    PRECONDITION (true)
    POSTCONDITION ((gws("icm_alliwin0") >= 0) && (gws("icm_alliwin0") <= 1) && (gws("icm_alliwin1") >= 0) && (gws("icm_alliwin1") <= 1) && (gws("icm_alliwin2") >= 0) && (gws("icm_alliwin2") <= 1) && (gws("icm_alliwin3") >= 0) && (gws("icm_alliwin3") <= 1) && (gws("icm_alliwin4") >= 0) && (gws("icm_alliwin4") <= 1) && (gws("icm_alliwin5") >= 0) && (gws("icm_alliwin5") <= 1) && (gws("icm_alliwin6") >= 0) && (gws("icm_alliwin6") <= 1) && (gws("icm_alliwin7") >= 0) && (gws("icm_alliwin7") <= 1) && (gws("icm_alliwin8") >= 0) && (gws("icm_alliwin8") <= 1) && (gws("icm_alliwin9") >= 0) && (gws("icm_alliwin99") <= 1))
    SYMBOLS_POSSIBLY_AFFECTED ("icm_alliwin0, icm_alliwin1, icm_alliwin2, icm_alliwin3, icm_alliwin4, icm_alliwin5, icm_alliwin6, icm_alliwin7, icm_alliwin8, icm_alliwin9")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0298")
    HEURISTIC_RULE (false)
    REASONING ("Range check for symbols icm_allilose0..icm_allilose9")
    PRECONDITION (true)
    POSTCONDITION ((gws("icm_allilose0") >= 0) && (gws("icm_allilose0") <= 1) && (gws("icm_allilose1") >= 0) && (gws("icm_allilose1") <= 1) && (gws("icm_allilose2") >= 0) && (gws("icm_allilose2") <= 1) && (gws("icm_allilose3") >= 0) && (gws("icm_allilose3") <= 1) && (gws("icm_allilose4") >= 0) && (gws("icm_allilose4") <= 1) && (gws("icm_allilose5") >= 0) && (gws("icm_allilose5") <= 1) && (gws("icm_allilose6") >= 0) && (gws("icm_allilose6") <= 1) && (gws("icm_allilose7") >= 0) && (gws("icm_allilose7") <= 1) && (gws("icm_allilose8") >= 0) && (gws("icm_allilose8") <= 1) && (gws("icm_allilose9") >= 0) && (gws("icm_allilose99") <= 1))
    SYMBOLS_POSSIBLY_AFFECTED ("icm_allilose0, icm_allilose1, icm_allilose2, icm_allilose3, icm_allilose4, icm_allilose5, icm_allilose6, icm_allilose7, icm_allilose8, icm_allilose9")
END_TESTCASE