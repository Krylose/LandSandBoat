#include "version.h"

const char* version::GetGitSha()
{
    return "02ad48da2c-dirty";
}

const char* version::GetGitBranch()
{
    return "my-base";
}

const char* version::GetGitDate()
{
    return "Sat Jul 25 20:36:57 2026";
}

const char* version::GetGitCommitSubject()
{
    return "Settings update";
}

const char* version::GetVersionString()
{
    return "my-base (02ad48da2c-dirty)";
}
