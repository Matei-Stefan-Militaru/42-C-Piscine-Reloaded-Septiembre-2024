ip link show | awk '/link\/ether/ {print $2}'
