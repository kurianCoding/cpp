docker start kurian-cpp-dev
#docker exec -ti kurian-python-dev script /dev/null -c 'bash -ilc tmux'
docker exec -ti kurian-cpp-dev script -q -c "/bin/bash" /dev/null
