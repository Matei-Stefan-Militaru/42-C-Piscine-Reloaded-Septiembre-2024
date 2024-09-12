find . -type f -name "*.sh" -exec sh -c 'basename "$0" .sh' {} \;
