/*******************************************************************************
 * Copyright (c) 2015, Jean-David Gadina - www.xs-labs.com / www.digidna.net
 * Distributed under the Boost Software License, Version 1.0.
 * 
 * Boost Software License - Version 1.0 - August 17th, 2003
 * 
 * Permission is hereby granted, free of charge, to any person or organization
 * obtaining a copy of the software and accompanying documentation covered by
 * this license (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative works of the
 * Software, and to permit third-parties to whom the Software is furnished to
 * do so, all subject to the following:
 * 
 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer,
 * must be included in all copies of the Software, in whole or in part, and
 * all derivative works of the Software, unless such copies or derivative
 * works are solely in the form of machine-executable object code generated by
 * a source language processor.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 ******************************************************************************/

/*!
 * @copyright   (c) 2015 - Jean-David Gadina - www.xs-labs.com / www.digidna.net
 * @brief       Test case XS::Atomic
 */

/* Disabled warnings for GoogleMock */
#ifdef __clang__
#pragma clang diagnostic ignored "-Wglobal-constructors"
#pragma clang diagnostic ignored "-Wpadded"
#pragma clang diagnostic push
#if __clang_major__ >= 7
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#pragma clang diagnostic ignored "-Wmissing-noreturn"
#pragma clang diagnostic ignored "-Wpadded"
#pragma clang diagnostic ignored "-Wused-but-marked-unused"
#pragma clang diagnostic ignored "-Wdeprecated"
#endif

#include <GoogleMock/GoogleMock.h>

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#include <XS/Atomic.hpp>

using namespace testing;

/*******************************************************************************
 * Common definitions
 ******************************************************************************/

TEST( XS_Atomic_Trivial_Bitwise, CTOR )
{
    XS::Atomic< unsigned int > a;
    
    ASSERT_TRUE( a == static_cast< unsigned int >( 0 ) );
}

TEST( XS_Atomic_Trivial_Bitwise, CTOR_V )
{
    XS::Atomic< unsigned int > a{ 42 };
    
    ASSERT_TRUE( a == static_cast< unsigned int >( 42 ) );
}

TEST( XS_Atomic_Trivial_Bitwise, CCTOR )
{
    XS::Atomic< unsigned int > a1{ 42 };
    XS::Atomic< unsigned int > a2{ a1 };
    
    ASSERT_TRUE( a1 == static_cast< unsigned int >( 42 ) );
    ASSERT_TRUE( a2 == static_cast< unsigned int >( 42 ) );
}

TEST( XS_Atomic_Trivial_Bitwise, OperatorAssign )
{
    XS::Atomic< unsigned int > a1{ 42 };
    XS::Atomic< unsigned int > a2;
    
    a2 = a1;
    
    ASSERT_TRUE( a1 == static_cast< unsigned int >( 42 ) );
    ASSERT_TRUE( a2 == static_cast< unsigned int >( 42 ) );
}

TEST( XS_Atomic_Trivial_Bitwise, OperatorAssign_V )
{
    XS::Atomic< unsigned int > a;
    
    a = 42;
    
    ASSERT_TRUE( a == static_cast< unsigned int >( 42 ) );
}

TEST( XS_Atomic_Trivial_Bitwise, OperatorCast )
{
    XS::Atomic< unsigned int > a{ 42 };
    
    ASSERT_TRUE( static_cast< unsigned int >( a ) == 42 );
}

TEST( XS_Atomic_Trivial_Bitwise, Load )
{
    XS::Atomic< unsigned int > a{ 42 };
    
    ASSERT_TRUE( a.Load() == 42 );
}

TEST( XS_Atomic_Trivial_Bitwise, Store )
{
    XS::Atomic< unsigned int > a;
    
    a.Store( 42 );
    
    ASSERT_TRUE( a == static_cast< unsigned int >( 42 ) );
}

TEST( XS_Atomic_Trivial_Bitwise, Swap )
{
    XS::Atomic< unsigned int > a1{ 42 };
    XS::Atomic< unsigned int > a2{ 43 };
    
    ASSERT_TRUE( a1 == static_cast< unsigned int >( 42 ) );
    ASSERT_TRUE( a2 == static_cast< unsigned int >( 43 ) );
    
    swap( a1, a2 );
    
    ASSERT_TRUE( a1 == static_cast< unsigned int >( 43 ) );
    ASSERT_TRUE( a2 == static_cast< unsigned int >( 42 ) );
}

/*******************************************************************************
 * Equality comparable
 ******************************************************************************/

TEST( XS_Atomic_Trivial_Bitwise, OperatorEqual )
{
    XS::Atomic< unsigned int > a1{ 42 };
    XS::Atomic< unsigned int > a2{ 42 };
    XS::Atomic< unsigned int > a3{ 43 };
    
    ASSERT_TRUE(  a1 == a2 );
    ASSERT_FALSE( a1 == a3 );
}

TEST( XS_Atomic_Trivial_Bitwise, OperatorEqual_V )
{
    XS::Atomic< unsigned int > a1{ 42 };
    XS::Atomic< unsigned int > a2{ 43 };
    
    ASSERT_TRUE(  a1 == static_cast< unsigned int >( 42 ) );
    ASSERT_FALSE( a1 == static_cast< unsigned int >( 43 ) );
    ASSERT_TRUE(  a2 == static_cast< unsigned int >( 43 ) );
    ASSERT_FALSE( a2 == static_cast< unsigned int >( 42 ) );
}

TEST( XS_Atomic_Trivial_Bitwise, OperatorNotEqual )
{
    XS::Atomic< unsigned int > a1{ 42 };
    XS::Atomic< unsigned int > a2{ 42 };
    XS::Atomic< unsigned int > a3{ 43 };
    
    ASSERT_FALSE( a1 != a2 );
    ASSERT_TRUE(  a1 != a3 );
}

TEST( XS_Atomic_Trivial_Bitwise, OperatorNotEqual_V )
{
    XS::Atomic< unsigned int > a1{ 42 };
    XS::Atomic< unsigned int > a2{ 43 };
    
    ASSERT_TRUE(  a1 == static_cast< unsigned int >( 42 ) );
    ASSERT_FALSE( a1 == static_cast< unsigned int >( 43 ) );
    ASSERT_TRUE(  a2 == static_cast< unsigned int >( 43 ) );
    ASSERT_FALSE( a2 == static_cast< unsigned int >( 42 ) );
}
