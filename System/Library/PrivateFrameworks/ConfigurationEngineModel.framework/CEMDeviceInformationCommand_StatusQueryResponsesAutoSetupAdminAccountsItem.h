/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMDeviceInformationCommand_StatusQueryResponsesAutoSetupAdminAccountsItem : CEMPayloadBase {

	NSString* _statusGUID;
	NSString* _statusShortName;

}

@property (nonatomic,copy) NSString * statusGUID;                   //@synthesize statusGUID=_statusGUID - In the implementation block
@property (nonatomic,copy) NSString * statusShortName;              //@synthesize statusShortName=_statusShortName - In the implementation block
+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithGUID:(id)arg1 withShortName:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusGUID:(NSString *)arg1 ;
-(void)setStatusShortName:(NSString *)arg1 ;
-(NSString *)statusGUID;
-(NSString *)statusShortName;
@end

