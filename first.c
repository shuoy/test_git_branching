first.c in the root dir --> change in the experimental branch

git clone https://github.com/stackforge/compass-adapters.git; cd compass-adapters; scp -p -P 29418 syang@review.openstack.org:hooks/commit-msg .git/hooks/; git remote add gerrit ssh://syang@review.openstack.org:29418/stackforge/compass-adapters.git

[user]
        name = Shuo Yang
        email = shuo.yang@huawei.com

http://stackoverflow.com/questions/2763006/change-the-current-branch-to-master-in-git/2763118#2763118
	git checkout dev/experimental
	git merge --strategy=ours master    # keep content of this branch, but record a merge
	git commit --amend  # make the Change-ID happen at the 

	git checkout master
	git merge dev/experimental             # fast-forward master up to the merge

Push to remote gerrit master
git push ssh://syang@review.openstack.org:29418/stackforge/compass-adapters HEAD:refs/for/master

--------
http://docs.openstack.org/infra/manual/drivers.html#merge-feature-branch-into-master

	git remote update; git checkout master; git pull --ff-only origin master; git checkout -b dev/experimental

	git merge  --no-edit -s recursive -X theirs origin/dev/experimental
	git commit --amend  	# Amend the merge commit to automatically add a Change-ID to the commit message:

	git review -R
	git checkout master
	git branch -D merge-branch




