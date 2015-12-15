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
 * Type specific
 ******************************************************************************/

TEST( XS_Atomic_Trivial_Bitwise, AdditionAssignmentOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, AdditionAssignmentOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, SubtractionAssignmentOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, SubtractionAssignmentOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, MultiplicationAssignmentOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, MultiplicationAssignmentOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, DivisionAssignmentOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, DivisionAssignmentOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, ModuloAssignmentOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, ModuloAssignmentOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseANDAssignmentOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseANDAssignmentOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseORAssignmentOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseORAssignmentOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseXORAssignmentOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseXORAssignmentOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseLeftShiftAssignmentOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseLeftShiftAssignmentOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseRightShiftAssignmentOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseRightShiftAssignmentOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, PreIncrementOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, PreDecrementOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, PostIncrementOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, PostDecrementOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, UnaryPlusOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, UnaryMinusOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, AdditionOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, AdditionOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, SubtractionOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, SubtractionOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, MultiplicationOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, MultiplicationOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, DivisionOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, DivisionOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, ModuloOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, ModuloOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseANDOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseANDOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseOROperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseOROperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseXOROperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseXOROperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseLeftShiftOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseLeftShiftOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseLightShiftOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, BitwiseLightShiftOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, NegationOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, ANDOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, ANDOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, InclusiveOROperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, InclusiveOROperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, EqualToOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, EqualToOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, NotEqualToOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, NotEqualToOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, LessThanOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, LessThanOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, GreaterThanOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, GreaterThanOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, LessThanOrEqualToOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, LessThanOrEqualToOperator_V )
{}

TEST( XS_Atomic_Trivial_Bitwise, GreaterThanOrEqualToOperator )
{}

TEST( XS_Atomic_Trivial_Bitwise, GreaterThanOrEqualToOperator_V )
{}
