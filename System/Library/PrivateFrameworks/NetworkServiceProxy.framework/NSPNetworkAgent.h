/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NWNetworkAgent.h>

@class NSString, NSUUID, NSPConfiguration, NSPAppRule, NSData;

@interface NSPNetworkAgent : NSObject <NWNetworkAgent> {

	unsigned char _dataDigest[32];
	BOOL active;
	BOOL kernelActivated;
	BOOL userActivated;
	BOOL voluntary;
	NSUUID* agentUUID;
	NSString* agentDescription;
	NSPConfiguration* _configuration;
	NSPAppRule* _appRule;
	NSData* _keybag;
	NSData* _agentData;

}

@property (retain) NSData * agentData;                                                   //@synthesize agentData=_agentData - In the implementation block
@property (retain) NSPConfiguration * configuration;                                     //@synthesize configuration=_configuration - In the implementation block
@property (retain) NSPAppRule * appRule;                                                 //@synthesize appRule=_appRule - In the implementation block
@property (retain) NSData * keybag;                                                      //@synthesize keybag=_keybag - In the implementation block
@property (nonatomic,copy) NSString * agentDescription; 
@property (nonatomic,copy) NSUUID * agentUUID; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=isKernelActivated,nonatomic) BOOL kernelActivated; 
@property (assign,getter=isUserActivated,nonatomic) BOOL userActivated; 
@property (assign,getter=isVoluntary,nonatomic) BOOL voluntary; 
@property (assign,getter=isSpecificUseOnly,nonatomic) BOOL specificUseOnly; 
@property (assign,getter=isNetworkProvider,nonatomic) BOOL networkProvider; 
@property (assign,getter=isNexusProvider,nonatomic) BOOL nexusProvider; 
@property (assign,nonatomic) BOOL supportsListenRequests; 
@property (assign,nonatomic) BOOL supportsBrowseRequests; 
@property (assign,nonatomic) BOOL supportsResolveRequests; 
@property (assign,nonatomic) BOOL requiresAssert; 
@property (assign,nonatomic) BOOL updateClientsImmediately; 
+(id)agentDomain;
+(id)agentType;
+(id)agentFromData:(id)arg1 ;
-(NSData *)agentData;
-(id)init;
-(void)setAgentData:(NSData *)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setKernelActivated:(BOOL)arg1 ;
-(BOOL)isKernelActivated;
-(NSPConfiguration *)configuration;
-(void)setVoluntary:(BOOL)arg1 ;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(void)setUserActivated:(BOOL)arg1 ;
-(BOOL)isUserActivated;
-(void)setAgentDescription:(NSString *)arg1 ;
-(NSPAppRule *)appRule;
-(void)setAppRule:(NSPAppRule *)arg1 ;
-(NSUUID *)agentUUID;
-(BOOL)isEqual:(id)arg1 ;
-(void)setConfiguration:(NSPConfiguration *)arg1 ;
-(NSData *)keybag;
-(NSString *)agentDescription;
-(BOOL)isActive;
-(BOOL)isVoluntary;
-(id)copyAgentData;
-(void)parseAgentData;
-(void)setKeybag:(NSData *)arg1 ;
@end
