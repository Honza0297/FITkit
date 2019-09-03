#!/bin/bash
# Fetch liburpc from latest git
repo_url="http://github.com/vavrusa/liburpc.git"
dst_dir="$(pwd $0)"
tmp_dir="$dst_dir/.tmp"

echo "Syncing liburpc from latest git..."
clist="$(ls -A -I CMakeLists.txt -I fetch-* $dst_dir)"
for f in $clist; do rm -rf "$f"; done
echo "  1/3 downloading latest git ..."
git clone "$repo_url" "$tmp_dir" 1>/dev/null|| exit 1
rm -rf "$tmp_dir/src/CMakeLists.txt"
echo "  2/3 syncing source files ..."
cp -rf  "$tmp_dir"/README "$dst_dir/"
cp -rf  "$tmp_dir"/COPYING "$dst_dir/"
cp -rf  "$tmp_dir"/src/* "$dst_dir/"
echo "  3/3 cleaning up ..."
rm -rf "$tmp_dir"
echo -e "Here are current changes:\n"
git status
