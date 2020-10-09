<?php

/**
 * This file is part of the Phalcon Framework.
 *
 * (c) Phalcon Team <team@phalcon.io>
 *
 * For the full copyright and license information, please view the LICENSE.txt
 * file that was distributed with this source code.
 */

declare(strict_types=1);

namespace Phalcon\Test\Models;

use Phalcon\Validation\ValidationInterface;

/**
 * Class InvoicesValidationFails
 *
 * @package Phalcon\Test\Models
 */
class InvoicesValidationFails extends Invoices
{
    /**
     * Should always return false
     *
     * @param ValidationInterface $validator
     *
     * @return bool
     */
    protected function validate(ValidationInterface $validator): bool
    {
        return false;
    }
}
