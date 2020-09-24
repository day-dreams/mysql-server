make -j 8
rm /tmp/mysql.*
sudo pkill mysqld
./sql/mysqld --user=root &
echo ""
echo "================================================================="
echo ""
tail -f ~/Desktop/mysql.log