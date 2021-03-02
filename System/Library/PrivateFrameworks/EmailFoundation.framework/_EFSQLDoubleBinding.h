/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <EmailFoundation/EFSQLBinding.h>

@interface _EFSQLDoubleBinding : EFSQLBinding {

	double _doubleValue;

}

@property (nonatomic,readonly) double doubleValue;              //@synthesize doubleValue=_doubleValue - In the implementation block
-(double)doubleValue;
-(void)bindTo:(sqlite3_stmtRef)arg1 withSQLIndex:(int)arg2 ;
-(id)initWithDouble:(double)arg1 ;
@end
