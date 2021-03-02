/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMAssetBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class CEMAssetBaseDescriptor, NSString;

@interface CEMStringDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol> {

	CEMAssetBaseDescriptor* _payloadDescriptor;
	NSString* _payloadData;

}

@property (nonatomic,copy) CEMAssetBaseDescriptor * payloadDescriptor;              //@synthesize payloadDescriptor=_payloadDescriptor - In the implementation block
@property (nonatomic,copy) NSString * payloadData;                                  //@synthesize payloadData=_payloadData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withData:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withData:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)payloadData;
-(void)setPayloadData:(NSString *)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDescriptor:(CEMAssetBaseDescriptor *)arg1 ;
-(CEMAssetBaseDescriptor *)payloadDescriptor;
@end
