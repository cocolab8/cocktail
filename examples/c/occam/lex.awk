/^TOKEN/, /^RULE/ { if ($2 == "=" && $1 ~ /[A-Z]/) print "# define", $1, $3; }
