/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber;

@interface CEMAccountmacOSServerDeclaration_ConfiguredAccountsItem : CEMPayloadBase {

	NSString* _payloadType;
	NSNumber* _payloadPort;

}

@property (nonatomic,copy) NSString * payloadType;              //@synthesize payloadType=_payloadType - In the implementation block
@property (nonatomic,copy) NSNumber * payloadPort;              //@synthesize payloadPort=_payloadPort - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithType:(id)arg1 withPort:(id)arg2 ;
+(id)buildRequiredOnlyWithType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)payloadType;
-(void)setPayloadType:(NSString *)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadPort:(NSNumber *)arg1 ;
-(NSNumber *)payloadPort;
@end
