<?php
declare(strict_types=1);

/**
 * This file is part of the Phalcon Framework.
 *
 * (c) Phalcon Team <team@phalconphp.com>
 *
 * For the full copyright and license information, please view the LICENSE.txt
 * file that was distributed with this source code.
 */

namespace Phalcon\Test\Integration\Mvc\View;

use IntegrationTester;
use Phalcon\Di;
use Phalcon\Mvc\View;
use Phalcon\Test\Fixtures\Traits\DiTrait;

/**
 * Class GetSetDICest
 */
class GetSetDICest
{
    use DiTrait;

    /**
     * Tests Phalcon\Mvc\View :: getDI()/setDI()
     *
     * @author Phalcon Team <team@phalconphp.com>
     * @since  2018-11-13
     */
    public function mvcViewGetDI(IntegrationTester $I)
    {
        $I->wantToTest('Mvc\View - getDI()/setDI()');

        $container = new Di();
        $view      = new View();

        $view->setDI($container);

        $class  = Di::class;
        $actual = $view->getDI();
        $I->assertInstanceOf($class, $actual);
    }
}