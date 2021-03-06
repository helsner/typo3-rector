<?php
declare(strict_types=1);

namespace TYPO3\CMS\Core\Resource\Exception;

use Exception;

if (class_exists(FileDoesNotExistException::class)) {
    return;
}

class FileDoesNotExistException extends Exception
{

}
