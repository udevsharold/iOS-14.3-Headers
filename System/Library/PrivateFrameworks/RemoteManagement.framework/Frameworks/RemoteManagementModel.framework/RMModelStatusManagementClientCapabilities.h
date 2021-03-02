/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelStatusBase.h>

@class NSArray, RMModelAnyPayload, RMModelStatusManagementClientCapabilities_SupportedPayloads;

@interface RMModelStatusManagementClientCapabilities : RMModelStatusBase {

	NSArray* _statusSupportedVersions;
	RMModelAnyPayload* _statusSupportedFeatures;
	RMModelStatusManagementClientCapabilities_SupportedPayloads* _statusSupportedPayloads;

}

@property (nonatomic,copy) NSArray * statusSupportedVersions;                                                                  //@synthesize statusSupportedVersions=_statusSupportedVersions - In the implementation block
@property (nonatomic,copy) RMModelAnyPayload * statusSupportedFeatures;                                                        //@synthesize statusSupportedFeatures=_statusSupportedFeatures - In the implementation block
@property (nonatomic,copy) RMModelStatusManagementClientCapabilities_SupportedPayloads * statusSupportedPayloads;              //@synthesize statusSupportedPayloads=_statusSupportedPayloads - In the implementation block
+(id)allowedStatusKeys;
+(id)buildWithSupportedVersions:(id)arg1 supportedFeatures:(id)arg2 supportedPayloads:(id)arg3 ;
+(id)buildRequiredOnlyWithSupportedVersions:(id)arg1 supportedFeatures:(id)arg2 supportedPayloads:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setStatusSupportedVersions:(NSArray *)arg1 ;
-(void)setStatusSupportedFeatures:(RMModelAnyPayload *)arg1 ;
-(void)setStatusSupportedPayloads:(RMModelStatusManagementClientCapabilities_SupportedPayloads *)arg1 ;
-(NSArray *)statusSupportedVersions;
-(RMModelAnyPayload *)statusSupportedFeatures;
-(RMModelStatusManagementClientCapabilities_SupportedPayloads *)statusSupportedPayloads;
@end
