/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolOrganizationDetails;

@interface RMProtocolOrganizationDetailsResponse : RMModelPayloadBase {

	NSString* _responseOrganizationDetailsToken;
	RMProtocolOrganizationDetails* _responseOrganizationDetails;

}

@property (nonatomic,copy) NSString * responseOrganizationDetailsToken;                              //@synthesize responseOrganizationDetailsToken=_responseOrganizationDetailsToken - In the implementation block
@property (nonatomic,copy) RMProtocolOrganizationDetails * responseOrganizationDetails;              //@synthesize responseOrganizationDetails=_responseOrganizationDetails - In the implementation block
+(id)requestWithOrganizationDetailsToken:(id)arg1 organizationDetails:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponseOrganizationDetailsToken:(NSString *)arg1 ;
-(void)setResponseOrganizationDetails:(RMProtocolOrganizationDetails *)arg1 ;
-(NSString *)responseOrganizationDetailsToken;
-(RMProtocolOrganizationDetails *)responseOrganizationDetails;
@end

