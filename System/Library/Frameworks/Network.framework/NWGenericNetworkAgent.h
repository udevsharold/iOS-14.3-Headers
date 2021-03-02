/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>

@class NSString, NSUUID;

@interface NWGenericNetworkAgent : NSObject <NWPrettyDescription> {

	netagent* _internalNetagent;

}

@property (assign) netagent* internalNetagent;                                             //@synthesize internalNetagent=_internalNetagent - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDescription; 
@property (nonatomic,readonly) NSString * agentDomain; 
@property (nonatomic,readonly) NSString * agentType; 
@property (nonatomic,readonly) NSString * agentDescription; 
@property (nonatomic,readonly) NSUUID * agentUUID; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isKernelActivated,nonatomic,readonly) BOOL kernelActivated; 
@property (getter=isUserActivated,nonatomic,readonly) BOOL userActivated; 
@property (getter=isVoluntary,nonatomic,readonly) BOOL voluntary; 
@property (getter=isSpecificUseOnly,nonatomic,readonly) BOOL specificUseOnly; 
@property (getter=isNetworkProvider,nonatomic,readonly) BOOL networkProvider; 
-(NSString *)privateDescription;
-(BOOL)isKernelActivated;
-(void)dealloc;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSString *)agentDomain;
-(BOOL)isUserActivated;
-(id)description;
-(BOOL)isSpecificUseOnly;
-(BOOL)isNetworkProvider;
-(BOOL)isNexusProvider;
-(BOOL)requiresAssert;
-(NSString *)agentType;
-(NSUUID *)agentUUID;
-(id)initWithKernelAgent:(const netagent*)arg1 ;
-(BOOL)supportsBrowse;
-(BOOL)supportsResolve;
-(netagent*)internalNetagent;
-(void)setInternalNetagent:(netagent*)arg1 ;
-(NSString *)agentDescription;
-(BOOL)isActive;
-(BOOL)isVoluntary;
@end
