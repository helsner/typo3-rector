<?php

namespace Ssch\TYPO3Rector\Tests\Rector\v10\v0\SwiftMailerBasedMailMessageToMailerBasedMessageRector\Fixture;

use Swift_Attachment;
use TYPO3\CMS\Core\Mail\MailMessage;
use TYPO3\CMS\Core\Utility\GeneralUtility;

$mail = GeneralUtility::makeInstance(MailMessage::class);

$mail->addPart('<p>Here is the message itself</p>');
$mail->send();

?>
-----
<?php

namespace Ssch\TYPO3Rector\Tests\Rector\v10\v0\SwiftMailerBasedMailMessageToMailerBasedMessageRector\Fixture;

use Swift_Attachment;
use TYPO3\CMS\Core\Mail\MailMessage;
use TYPO3\CMS\Core\Utility\GeneralUtility;

$mail = GeneralUtility::makeInstance(MailMessage::class);

$mail->text('<p>Here is the message itself</p>');
$mail->send();

?>
