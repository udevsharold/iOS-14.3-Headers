/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary, CEMDeviceListRestrictionsCommand_StatusProfileRestrictions;

@interface CEMDeviceListRestrictionsCommand_Status : CEMPayloadBase {

	CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary* _statusGlobalRestrictions;
	CEMDeviceListRestrictionsCommand_StatusProfileRestrictions* _statusProfileRestrictions;

}

@property (nonatomic,copy) CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary * statusGlobalRestrictions;              //@synthesize statusGlobalRestrictions=_statusGlobalRestrictions - In the implementation block
@property (nonatomic,copy) CEMDeviceListRestrictionsCommand_StatusProfileRestrictions * statusProfileRestrictions;                //@synthesize statusProfileRestrictions=_statusProfileRestrictions - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithGlobalRestrictions:(id)arg1 withProfileRestrictions:(id)arg2 ;
+(id)buildRequiredOnlyWithGlobalRestrictions:(id)arg1 withProfileRestrictions:(id)arg2 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusGlobalRestrictions:(CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary *)arg1 ;
-(void)setStatusProfileRestrictions:(CEMDeviceListRestrictionsCommand_StatusProfileRestrictions *)arg1 ;
-(CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary *)statusGlobalRestrictions;
-(CEMDeviceListRestrictionsCommand_StatusProfileRestrictions *)statusProfileRestrictions;
@end
