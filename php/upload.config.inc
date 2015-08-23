<?php

// 5 minutes execution time
set_time_limit(5 * 60);

// Uncomment this one to fake upload time
//usleep(1100000);

// max disk usage in percents
$maxDiskUsage=95;

// upload directory
$upload_dir = ".." . DIRECTORY_SEPARATOR . "upload";

// upload temporary directory
$tmpDir = $upload_dir . DIRECTORY_SEPARATOR . "tmp";

$tmpDirMod = 0755;
$targetDirMod = 0755;

// Remove old files
$cleanupTmpDir = true;

// Temp file age in seconds
$maxFileAge = 5 * 3600;

// target directory
function getTargetDir($userDirectory,$timestamp) {
  $targetDir_digits=6;
  $targetDir = "../upload" . DIRECTORY_SEPARATOR . $userDirectory . DIRECTORY_SEPARATOR . substr($timestamp,0,$targetDir_digits);
  return $targetDir;
}

?>
