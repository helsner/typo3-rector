<?php

declare(strict_types=1);

namespace TYPO3\CMS\Saltedpasswords\Salt;

if (class_exists(Md5Salt::class)) {
    return;
}

class Md5Salt
{

}
