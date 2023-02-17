SELECT nom_p from Pays where superficie > 10000;
SELECT nom_e FROM `EspaceMaritime` WHERE type = "océan" order by nom_e ASC;
SELECT id_f, longueur FROM `Fleuve` WHERE id_p = "Russie" order by longueur desc;
