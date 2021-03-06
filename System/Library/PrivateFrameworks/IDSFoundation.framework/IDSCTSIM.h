/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSCTSIM.h>
@class NSString;


@protocol IDSCTSIM <NSObject>
@property (nonatomic,readonly) NSString * SIMIdentifier; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) BOOL isDefaultVoiceSIM; 
@property (nonatomic,readonly) unsigned long long slot; 
@property (nonatomic,readonly) NSString * mobileCountryCode; 
@property (nonatomic,readonly) NSString * mobileNetworkCode; 
@required
-(unsigned long long)slot;
-(NSString *)mobileCountryCode;
-(NSString *)phoneNumber;
-(NSString *)mobileNetworkCode;
-(BOOL)isDefaultVoiceSIM;
-(NSString *)SIMIdentifier;
-(NSString *)label;

@end


@class NSString, CTXPCServiceSubscriptionContext;

@interface IDSCTSIM : NSObject <IDSCTSIM> {

	NSString* _mobileCountryCode;
	NSString* _mobileNetworkCode;
	CTXPCServiceSubscriptionContext* _context;

}

@property (nonatomic,retain) CTXPCServiceSubscriptionContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSString * SIMIdentifier; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) BOOL isDefaultVoiceSIM; 
@property (nonatomic,readonly) unsigned long long slot; 
@property (nonatomic,readonly) NSString * mobileCountryCode; 
@property (nonatomic,readonly) NSString * mobileNetworkCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)slot;
-(NSString *)mobileCountryCode;
-(NSString *)phoneNumber;
-(id)initWithContext:(id)arg1 ;
-(NSString *)description;
-(void)setContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(NSString *)mobileNetworkCode;
-(BOOL)isDefaultVoiceSIM;
-(CTXPCServiceSubscriptionContext *)context;
-(NSString *)SIMIdentifier;
-(NSString *)label;
@end

