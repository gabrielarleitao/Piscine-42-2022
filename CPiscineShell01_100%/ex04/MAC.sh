ifconfig | grep "ether" | cut -c 15- | sed 's/.\{29\}$//'
