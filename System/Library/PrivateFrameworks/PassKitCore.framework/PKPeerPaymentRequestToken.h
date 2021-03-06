/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface PKPeerPaymentRequestToken : NSObject <NSSecureCoding, NSCopying> {

	NSString* _requestToken;
	NSUUID* _deviceScoreIdentifier;

}

@property (nonatomic,copy,readonly) NSString * requestToken;                     //@synthesize requestToken=_requestToken - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * deviceScoreIdentifier;              //@synthesize deviceScoreIdentifier=_deviceScoreIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)informalRequestToken;
-(NSString *)requestToken;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isInformalRequestToken;
-(id)initWithRequestToken:(id)arg1 deviceScoreIdentifier:(id)arg2 ;
-(BOOL)isEqualToPeerPaymentRequestToken:(id)arg1 ;
-(NSUUID *)deviceScoreIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
@end

