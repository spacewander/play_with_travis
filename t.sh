#!/usr/bin/env bash


git summary --no-merges
git summary --no-merges --line
git abort
touch xxx
git clear -f
git clear -h
git checkout -b y
touch y
git add y
git commit -m "y"
git checkout master
git cherry-pick y
git delete-merged-branches
git delete-squashed-branches
git delete-squashed-branches master
git delete-squashed-branches ma
git reset --hard @~

