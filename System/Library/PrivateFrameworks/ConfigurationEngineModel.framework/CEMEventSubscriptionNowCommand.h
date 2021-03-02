/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMCommandBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSArray, NSString;

@interface CEMEventSubscriptionNowCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {

	NSArray* _payloadEvents;

}

@property (nonatomic,copy) NSArray * payloadEvents;                 //@synthesize payloadEvents=_payloadEvents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withEvents:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg1 withEvents:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)payloadEvents;
-(void)setPayloadEvents:(NSArray *)arg1 ;
-(BOOL)mustBeSupervised;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(int)executionLevel;
@end
