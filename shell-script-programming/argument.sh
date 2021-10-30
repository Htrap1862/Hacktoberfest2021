## To run this script pass 1 argument - ./argument.sh hacktober

echo "cmd used to run script: $0"
echo "This is the value you passed $1"
echo "This is the number of argument passed $#"

## If you want to pass multiple arguments - ./argument.sh hacktober 1 23 names dev docker
## use them like this - 

echo "This is printing multiple arguments $@"
