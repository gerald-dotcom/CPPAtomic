/*******************************************************************************
 * Copyright (c) 2015, Jean-David Gadina - www.xs-labs.com
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
 * @copyright   (c) 2015 - Jean-David Gadina - www.xs-labs.com
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

struct s
{
    int x;
    int y;
};

struct s s1 = {  1,  2 };
struct s s2 = { 42, 43 };

template< typename T >
void XS_Atomic_TriviallyCopyable_CTOR_T( T v1, T v2 )
{
    XS::Atomic< T > a;
    
    ( void )v1;
    ( void )v2;
    
    ASSERT_TRUE( true );
}

TEST( XS_Atomic_TriviallyCopyable, CTOR )
{
     XS_Atomic_TriviallyCopyable_CTOR_T< int >( 42, 43 );
     XS_Atomic_TriviallyCopyable_CTOR_T< double >( 42.0, 43.0 );
     XS_Atomic_TriviallyCopyable_CTOR_T< const char * >( "hello, world", "hello, universe" );
     XS_Atomic_TriviallyCopyable_CTOR_T< struct s >( s1, s2 );
}

template< typename T >
void XS_Atomic_TriviallyCopyable_CTOR_V_T( T v1, T v2 )
{
    XS::Atomic< T > a;
    
    ( void )v1;
    ( void )v2;
    
    ASSERT_TRUE( true );
}

TEST( XS_Atomic_TriviallyCopyable, CTOR_V )
{
     XS_Atomic_TriviallyCopyable_CTOR_V_T< int >( 42, 43 );
     XS_Atomic_TriviallyCopyable_CTOR_V_T< double >( 42.0, 43.0 );
     XS_Atomic_TriviallyCopyable_CTOR_V_T< const char * >( "hello, world", "hello, universe" );
     XS_Atomic_TriviallyCopyable_CTOR_V_T< struct s >( s1, s2 );
}

template< typename T >
void XS_Atomic_TriviallyCopyable_CCTOR_T( T v1, T v2 )
{
    XS::Atomic< T > a;
    
    ( void )v1;
    ( void )v2;
    
    ASSERT_TRUE( true );
}

TEST( XS_Atomic_TriviallyCopyable, CCTOR )
{
     XS_Atomic_TriviallyCopyable_CCTOR_T< int >( 42, 43 );
     XS_Atomic_TriviallyCopyable_CCTOR_T< double >( 42.0, 43.0 );
     XS_Atomic_TriviallyCopyable_CCTOR_T< const char * >( "hello, world", "hello, universe" );
     XS_Atomic_TriviallyCopyable_CCTOR_T< struct s >( s1, s2 );
}

template< typename T >
void XS_Atomic_TriviallyCopyable_MCTOR_T( T v1, T v2 )
{
    XS::Atomic< T > a;
    
    ( void )v1;
    ( void )v2;
    
    ASSERT_TRUE( true );
}

TEST( XS_Atomic_TriviallyCopyable, MCTOR )
{
     XS_Atomic_TriviallyCopyable_MCTOR_T< int >( 42, 43 );
     XS_Atomic_TriviallyCopyable_MCTOR_T< double >( 42.0, 43.0 );
     XS_Atomic_TriviallyCopyable_MCTOR_T< const char * >( "hello, world", "hello, universe" );
     XS_Atomic_TriviallyCopyable_MCTOR_T< struct s >( s1, s2 );
}

template< typename T >
void XS_Atomic_TriviallyCopyable_OperatorAssign_T( T v1, T v2 )
{
    XS::Atomic< T > a;
    
    ( void )v1;
    ( void )v2;
    
    ASSERT_TRUE( true );
}

TEST( XS_Atomic_TriviallyCopyable, OperatorAssign )
{
     XS_Atomic_TriviallyCopyable_OperatorAssign_T< int >( 42, 43 );
     XS_Atomic_TriviallyCopyable_OperatorAssign_T< double >( 42.0, 43.0 );
     XS_Atomic_TriviallyCopyable_OperatorAssign_T< const char * >( "hello, world", "hello, universe" );
     XS_Atomic_TriviallyCopyable_OperatorAssign_T< struct s >( s1, s2 );
}

template< typename T >
void XS_Atomic_TriviallyCopyable_OperatorAssign_V_T( T v1, T v2 )
{
    XS::Atomic< T > a;
    
    ( void )v1;
    ( void )v2;
    
    ASSERT_TRUE( true );
}

TEST( XS_Atomic_TriviallyCopyable, OperatorAssign_V )
{
     XS_Atomic_TriviallyCopyable_OperatorAssign_V_T< int >( 42, 43 );
     XS_Atomic_TriviallyCopyable_OperatorAssign_V_T< double >( 42.0, 43.0 );
     XS_Atomic_TriviallyCopyable_OperatorAssign_V_T< const char * >( "hello, world", "hello, universe" );
     XS_Atomic_TriviallyCopyable_OperatorAssign_V_T< struct s >( s1, s2 );
}

template< typename T >
void XS_Atomic_TriviallyCopyable_OperatorCast_T( T v1, T v2 )
{
    XS::Atomic< T > a;
    
    ( void )v1;
    ( void )v2;
    
    ASSERT_TRUE( true );
}

TEST( XS_Atomic_TriviallyCopyable, OperatorCast )
{
     XS_Atomic_TriviallyCopyable_OperatorCast_T< int >( 42, 43 );
     XS_Atomic_TriviallyCopyable_OperatorCast_T< double >( 42.0, 43.0 );
     XS_Atomic_TriviallyCopyable_OperatorCast_T< const char * >( "hello, world", "hello, universe" );
     XS_Atomic_TriviallyCopyable_OperatorCast_T< struct s >( s1, s2 );
}

template< typename T >
void XS_Atomic_TriviallyCopyable_OperatorMemberAccess_T( T v1, T v2 )
{
    XS::Atomic< T > a;
    
    ( void )v1;
    ( void )v2;
    
    ASSERT_TRUE( true );
}

TEST( XS_Atomic_TriviallyCopyable, OperatorMemberAccess )
{
     XS_Atomic_TriviallyCopyable_OperatorMemberAccess_T< int >( 42, 43 );
     XS_Atomic_TriviallyCopyable_OperatorMemberAccess_T< double >( 42.0, 43.0 );
     XS_Atomic_TriviallyCopyable_OperatorMemberAccess_T< const char * >( "hello, world", "hello, universe" );
     XS_Atomic_TriviallyCopyable_OperatorMemberAccess_T< struct s >( s1, s2 );
}

template< typename T >
void XS_Atomic_TriviallyCopyable_OperatorIncrement_T( T v1, T v2 )
{
    XS::Atomic< T > a;
    
    ( void )v1;
    ( void )v2;
    
    ASSERT_TRUE( true );
}

TEST( XS_Atomic_TriviallyCopyable, OperatorIncrement )
{
     XS_Atomic_TriviallyCopyable_OperatorIncrement_T< int >( 42, 43 );
     XS_Atomic_TriviallyCopyable_OperatorIncrement_T< double >( 42.0, 43.0 );
     XS_Atomic_TriviallyCopyable_OperatorIncrement_T< const char * >( "hello, world", "hello, universe" );
     XS_Atomic_TriviallyCopyable_OperatorIncrement_T< struct s >( s1, s2 );
}

template< typename T >
void XS_Atomic_TriviallyCopyable_OperatorIncrement_I_T( T v1, T v2 )
{
    XS::Atomic< T > a;
    
    ( void )v1;
    ( void )v2;
    
    ASSERT_TRUE( true );
}

TEST( XS_Atomic_TriviallyCopyable, OperatorIncrement_I )
{
     XS_Atomic_TriviallyCopyable_OperatorIncrement_I_T< int >( 42, 43 );
     XS_Atomic_TriviallyCopyable_OperatorIncrement_I_T< double >( 42.0, 43.0 );
     XS_Atomic_TriviallyCopyable_OperatorIncrement_I_T< const char * >( "hello, world", "hello, universe" );
     XS_Atomic_TriviallyCopyable_OperatorIncrement_I_T< struct s >( s1, s2 );
}

template< typename T >
void XS_Atomic_TriviallyCopyable_OperatorDecrement_T( T v1, T v2 )
{
    XS::Atomic< T > a;
    
    ( void )v1;
    ( void )v2;
    
    ASSERT_TRUE( true );
}

TEST( XS_Atomic_TriviallyCopyable, OperatorDecrement )
{
     XS_Atomic_TriviallyCopyable_OperatorDecrement_T< int >( 42, 43 );
     XS_Atomic_TriviallyCopyable_OperatorDecrement_T< double >( 42.0, 43.0 );
     XS_Atomic_TriviallyCopyable_OperatorDecrement_T< const char * >( "hello, world", "hello, universe" );
     XS_Atomic_TriviallyCopyable_OperatorDecrement_T< struct s >( s1, s2 );
}

template< typename T >
void XS_Atomic_TriviallyCopyable_OperatorDecrement_I_T( T v1, T v2 )
{
    XS::Atomic< T > a;
    
    ( void )v1;
    ( void )v2;
    
    ASSERT_TRUE( true );
}

TEST( XS_Atomic_TriviallyCopyable, OperatorDecrement_I )
{
     XS_Atomic_TriviallyCopyable_OperatorDecrement_I_T< int >( 42, 43 );
     XS_Atomic_TriviallyCopyable_OperatorDecrement_I_T< double >( 42.0, 43.0 );
     XS_Atomic_TriviallyCopyable_OperatorDecrement_I_T< const char * >( "hello, world", "hello, universe" );
     XS_Atomic_TriviallyCopyable_OperatorDecrement_I_T< struct s >( s1, s2 );
}

template< typename T >
void XS_Atomic_TriviallyCopyable_OperatorPlusEqual_T( T v1, T v2 )
{
    XS::Atomic< T > a;
    
    ( void )v1;
    ( void )v2;
    
    ASSERT_TRUE( true );
}

TEST( XS_Atomic_TriviallyCopyable, OperatorPlusEqual )
{
     XS_Atomic_TriviallyCopyable_OperatorPlusEqual_T< int >( 42, 43 );
     XS_Atomic_TriviallyCopyable_OperatorPlusEqual_T< double >( 42.0, 43.0 );
     XS_Atomic_TriviallyCopyable_OperatorPlusEqual_T< const char * >( "hello, world", "hello, universe" );
     XS_Atomic_TriviallyCopyable_OperatorPlusEqual_T< struct s >( s1, s2 );
}

template< typename T >
void XS_Atomic_TriviallyCopyable_OperatorMinusEqual_T( T v1, T v2 )
{
    XS::Atomic< T > a;
    
    ( void )v1;
    ( void )v2;
    
    ASSERT_TRUE( true );
}

TEST( XS_Atomic_TriviallyCopyable, OperatorMinusEqual )
{
     XS_Atomic_TriviallyCopyable_OperatorMinusEqual_T< int >( 42, 43 );
     XS_Atomic_TriviallyCopyable_OperatorMinusEqual_T< double >( 42.0, 43.0 );
     XS_Atomic_TriviallyCopyable_OperatorMinusEqual_T< const char * >( "hello, world", "hello, universe" );
     XS_Atomic_TriviallyCopyable_OperatorMinusEqual_T< struct s >( s1, s2 );
}

template< typename T >
void XS_Atomic_TriviallyCopyable_OperatorAndEqual_T( T v1, T v2 )
{
    XS::Atomic< T > a;
    
    ( void )v1;
    ( void )v2;
    
    ASSERT_TRUE( true );
}

TEST( XS_Atomic_TriviallyCopyable, OperatorAndEqual )
{
     XS_Atomic_TriviallyCopyable_OperatorAndEqual_T< int >( 42, 43 );
     XS_Atomic_TriviallyCopyable_OperatorAndEqual_T< double >( 42.0, 43.0 );
     XS_Atomic_TriviallyCopyable_OperatorAndEqual_T< const char * >( "hello, world", "hello, universe" );
     XS_Atomic_TriviallyCopyable_OperatorAndEqual_T< struct s >( s1, s2 );
}

template< typename T >
void XS_Atomic_TriviallyCopyable_OperatorOrEqual_T( T v1, T v2 )
{
    XS::Atomic< T > a;
    
    ( void )v1;
    ( void )v2;
    
    ASSERT_TRUE( true );
}

TEST( XS_Atomic_TriviallyCopyable, OperatorOrEqual )
{
     XS_Atomic_TriviallyCopyable_OperatorOrEqual_T< int >( 42, 43 );
     XS_Atomic_TriviallyCopyable_OperatorOrEqual_T< double >( 42.0, 43.0 );
     XS_Atomic_TriviallyCopyable_OperatorOrEqual_T< const char * >( "hello, world", "hello, universe" );
     XS_Atomic_TriviallyCopyable_OperatorOrEqual_T< struct s >( s1, s2 );
}

template< typename T >
void XS_Atomic_TriviallyCopyable_OperatorXorEqual_T( T v1, T v2 )
{
    XS::Atomic< T > a;
    
    ( void )v1;
    ( void )v2;
    
    ASSERT_TRUE( true );
}

TEST( XS_Atomic_TriviallyCopyable, OperatorXorEqual )
{
     XS_Atomic_TriviallyCopyable_OperatorXorEqual_T< int >( 42, 43 );
     XS_Atomic_TriviallyCopyable_OperatorXorEqual_T< double >( 42.0, 43.0 );
     XS_Atomic_TriviallyCopyable_OperatorXorEqual_T< const char * >( "hello, world", "hello, universe" );
     XS_Atomic_TriviallyCopyable_OperatorXorEqual_T< struct s >( s1, s2 );
}

template< typename T >
void XS_Atomic_TriviallyCopyable_IsLockFree_T( T v1, T v2 )
{
    XS::Atomic< T > a;
    
    ( void )v1;
    ( void )v2;
    
    ASSERT_TRUE( true );
}

TEST( XS_Atomic_TriviallyCopyable, IsLockFree )
{
     XS_Atomic_TriviallyCopyable_IsLockFree_T< int >( 42, 43 );
     XS_Atomic_TriviallyCopyable_IsLockFree_T< double >( 42.0, 43.0 );
     XS_Atomic_TriviallyCopyable_IsLockFree_T< const char * >( "hello, world", "hello, universe" );
     XS_Atomic_TriviallyCopyable_IsLockFree_T< struct s >( s1, s2 );
}

template< typename T >
void XS_Atomic_TriviallyCopyable_Swap_T( T v1, T v2 )
{
    XS::Atomic< T > a;
    
    ( void )v1;
    ( void )v2;
    
    ASSERT_TRUE( true );
}

TEST( XS_Atomic_TriviallyCopyable, Swap )
{
     XS_Atomic_TriviallyCopyable_Swap_T< int >( 42, 43 );
     XS_Atomic_TriviallyCopyable_Swap_T< double >( 42.0, 43.0 );
     XS_Atomic_TriviallyCopyable_Swap_T< const char * >( "hello, world", "hello, universe" );
     XS_Atomic_TriviallyCopyable_Swap_T< struct s >( s1, s2 );
}