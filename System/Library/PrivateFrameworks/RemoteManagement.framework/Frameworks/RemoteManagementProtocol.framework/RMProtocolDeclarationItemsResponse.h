/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class RMProtocolDeclarationItemsResponse_Declarations, NSString;

@interface RMProtocolDeclarationItemsResponse : RMModelPayloadBase {

	RMProtocolDeclarationItemsResponse_Declarations* _responseDeclarations;
	NSString* _responseDeclarationsToken;

}

@property (nonatomic,copy) RMProtocolDeclarationItemsResponse_Declarations * responseDeclarations;              //@synthesize responseDeclarations=_responseDeclarations - In the implementation block
@property (nonatomic,copy) NSString * responseDeclarationsToken;                                                //@synthesize responseDeclarationsToken=_responseDeclarationsToken - In the implementation block
+(id)requestWithDeclarations:(id)arg1 declarationsToken:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponseDeclarations:(RMProtocolDeclarationItemsResponse_Declarations *)arg1 ;
-(void)setResponseDeclarationsToken:(NSString *)arg1 ;
-(RMProtocolDeclarationItemsResponse_Declarations *)responseDeclarations;
-(NSString *)responseDeclarationsToken;
@end

