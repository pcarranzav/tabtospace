#!/usr/bin/env ruby
((ARGV.length == 3) && (File.open(ARGV[1],"w"){|f| f.write(File.read(ARGV[0]).gsub("\t"," "*ARGV[2].to_i))})) || puts "Use: tabtospace.rb [infile] [outfile] [nspaces]"

