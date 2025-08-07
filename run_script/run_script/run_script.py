import git
from git_contributions_importer import *

# ���� �ʿ� - import�� repository ���
repo = [
    git.Repo("../java-repo"),
    git.Repo("../kotlin-repo"),
]

# ���� �ʿ� - Ŀ�� �̷��� ������ repository
mock_repo = git.Repo("../import-contributions")

importer = Importer(repo, mock_repo)

# ���� �ʿ� - ���� repository�� Ŀ���ߴ� �̸��� ���
importer.set_author(['psh10066@gmail.com', 'psh10066@company.com'])

# mock repository�� ������ Ŀ�� �ð� ���� Ŀ�Ե鸸 import
importer.set_start_from_last(True)

importer.import_repository()