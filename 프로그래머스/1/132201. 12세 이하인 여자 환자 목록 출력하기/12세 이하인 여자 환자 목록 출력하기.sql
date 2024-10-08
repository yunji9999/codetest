-- 코드를 입력하세요
SELECT PT_NAME
     , PT_NO
     , GEND_CD
     , AGE
     , NVL(TLNO, 'NONE') AS TLNO
FROM PATIENT 
--폰 없으면 NONE으로출력 
WHERE AGE <= 12
  AND GEND_CD = 'W'
ORDER BY AGE DESC
    , PT_NAME ASC;