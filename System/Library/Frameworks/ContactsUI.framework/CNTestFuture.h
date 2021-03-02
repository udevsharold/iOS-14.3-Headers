/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSSecureCoding;
@class NSError;

@interface CNTestFuture : NSObject <NSSecureCoding> {

	id<NSObject><NSSecureCoding> _result;
	NSError* _error;

}

@property (nonatomic,readonly) id<NSObject><NSSecureCoding> result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSError * error;                                  //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)futureWithError:(id)arg1 ;
+(id)futureWithResult:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(id<NSObject><NSSecureCoding>)result;
-(NSError *)error;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithResult:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
