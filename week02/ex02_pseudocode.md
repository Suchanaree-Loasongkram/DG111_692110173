

BEGIN ตรวจสอบเกรด
INPUT score
	IF score >= 80 THEN
     		เกรด = "A"

    ELSE IF score >= 70 THEN
     		เกรด = "B"

    ELSE IF score >= 60 THEN
    		เกรด = "C"

    ELSE IF score >= 50 THEN
     		เกรด = "D"

    ELSE
     		เกรด = "F"
	END IF
OUTPUT grade
END

---

BEGIN หาค่าสูงสุดจาก 2 ตัวเลข
INPUT a & b
	IF a > b THEN
    		OUTPUT a

    ELSE
    		OUTPUT b

    END IF
END

---

BEGIN นับจาก 1 ถึง N
INPUT N
i = 1

    FOR i FROM 1 TO i <= N DO
		OUTPUT i
		i = i + 1
	END FOR

END
