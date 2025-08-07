import git
from git_contributions_importer import *

# 수정 필요 - import할 repository 목록
repo = [
    git.Repo("../java-repo"),
    git.Repo("../kotlin-repo"),
]

# 수정 필요 - 커밋 이력을 저장할 repository
mock_repo = git.Repo("../import-contributions")

importer = Importer(repo, mock_repo)

# 수정 필요 - 내가 repository에 커밋했던 이메일 목록
importer.set_author(['psh10066@gmail.com', 'psh10066@company.com'])

# mock repository의 마지막 커밋 시간 이후 커밋들만 import
importer.set_start_from_last(True)

importer.import_repository()