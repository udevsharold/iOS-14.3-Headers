/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface AMSMediaToken : NSObject <NSSecureCoding> {

	BOOL _valid;
	NSDate* _expirationDate;
	double _lifetime;
	NSString* _tokenString;

}

@property (nonatomic,readonly) NSDate * expirationDate;                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) double lifetime;                        //@synthesize lifetime=_lifetime - In the implementation block
@property (nonatomic,readonly) NSString * tokenString;                 //@synthesize tokenString=_tokenString - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;              //@synthesize valid=_valid - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)percentageOfLifetimeRemaining;
-(double)lifetime;
-(id)initWithString:(id)arg1 expirationDate:(id)arg2 lifetime:(double)arg3 valid:(BOOL)arg4 ;
-(BOOL)isValid;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)tokenString;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)invalidCopy;
-(id)initWithString:(id)arg1 expirationDate:(id)arg2 lifetime:(double)arg3 ;
-(BOOL)willExpireWithin:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

