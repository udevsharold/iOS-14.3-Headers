/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RTMapServiceOptions : NSObject <NSSecureCoding> {

	BOOL _useBackgroundTraits;

}

@property (nonatomic,readonly) BOOL useBackgroundTraits;              //@synthesize useBackgroundTraits=_useBackgroundTraits - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUseBackgroundTraits:(BOOL)arg1 ;
-(BOOL)useBackgroundTraits;
-(void)encodeWithCoder:(id)arg1 ;
@end
