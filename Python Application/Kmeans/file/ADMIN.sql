SELECT * FROM DBA_USERS;
SELECT DBMS_XDB_CONFIG.gethttpport FROM dual;
SELECT DBMS_XDB_CONFIG.gethttpsport FROM dual;
exec dbms_xdb_config.sethttpsport(5500);
exec dbms_xdb_config.sethttpport(8080);