/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKAddSecureElementPassConfiguration : NSObject <NSSecureCoding> {

	NSString* _issuerIdentifier;
	NSString* _localizedDescription;
	long long _configurationType;

}

@property (nonatomic,readonly) long long configurationType;              //@synthesize configurationType=_configurationType - In the implementation block
@property (nonatomic,copy) NSString * issuerIdentifier;                  //@synthesize issuerIdentifier=_issuerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)localizedDescription;
-(BOOL)hasRequiredDataForProvisioning;
-(id)initWithType:(long long)arg1 ;
-(NSString *)issuerIdentifier;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setIssuerIdentifier:(NSString *)arg1 ;
-(long long)configurationType;
-(void)encodeWithCoder:(id)arg1 ;
@end

