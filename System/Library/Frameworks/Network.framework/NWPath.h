/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_nw_path;
@class NSObject, NSArray, NSString, NWInterface, NSUUID, NWParameters, NWEndpoint, NWBrowseDescriptor, NWAdvertiseDescriptor;

@interface NWPath : NSObject <NWPrettyDescription> {

	NSObject*<OS_nw_path> _internalPath;

}

@property (readonly) NSObject*<OS_nw_path> internalPath;                                                 //@synthesize internalPath=_internalPath - In the implementation block
@property (nonatomic,readonly) unsigned fallbackInterfaceIndex; 
@property (nonatomic,readonly) BOOL fallbackIsWeak; 
@property (nonatomic,readonly) BOOL fallbackEligible; 
@property (nonatomic,readonly) NSArray * dnsServersAsStrings; 
@property (nonatomic,readonly) NSArray * gateways; 
@property (nonatomic,readonly) NSArray * flows; 
@property (nonatomic,readonly) NSString * statusAsString; 
@property (nonatomic,readonly) NWInterface * connectedInterface; 
@property (getter=isListener,nonatomic,readonly) BOOL listener; 
@property (getter=isViable,nonatomic,readonly) BOOL viable; 
@property (nonatomic,readonly) NSUUID * clientID; 
@property (nonatomic,readonly) NWInterface * interface; 
@property (nonatomic,readonly) NWInterface * scopedInterface; 
@property (nonatomic,readonly) NWInterface * fallbackInterface; 
@property (getter=isFlowDivert,nonatomic,readonly) BOOL flowDivert; 
@property (nonatomic,readonly) unsigned flowDivertControlUnit; 
@property (nonatomic,readonly) unsigned flowDivertAggregateUnit; 
@property (getter=isFiltered,nonatomic,readonly) BOOL filtered; 
@property (nonatomic,readonly) unsigned filterControlUnit; 
@property (nonatomic,readonly) int dnsServiceID; 
@property (getter=isLocal,nonatomic,readonly) BOOL local; 
@property (getter=isDirect,nonatomic,readonly) BOOL direct; 
@property (nonatomic,readonly) unsigned policyID; 
@property (getter=isRoaming,nonatomic,readonly) BOOL roaming; 
@property (nonatomic,readonly) long long mtu; 
@property (nonatomic,readonly) long long maximumDatagramSize; 
@property (nonatomic,readonly) unsigned long long secondsSinceInterfaceChange; 
@property (nonatomic,readonly) long long reason; 
@property (nonatomic,readonly) NSString * reasonDescription; 
@property (nonatomic,copy,readonly) NSString * privateDescription; 
@property (nonatomic,readonly) NWParameters * derivedParameters; 
@property (nonatomic,readonly) BOOL supportsIPv4; 
@property (nonatomic,readonly) BOOL supportsIPv6; 
@property (nonatomic,readonly) BOOL supportsDNS; 
@property (getter=isEligibleForCrazyIvan46,nonatomic,readonly) BOOL eligibleForCrazyIvan46; 
@property (nonatomic,readonly) NWEndpoint * endpoint; 
@property (nonatomic,readonly) NWParameters * parameters; 
@property (nonatomic,readonly) NWEndpoint * effectiveLocalEndpoint; 
@property (nonatomic,readonly) NWEndpoint * effectiveRemoteEndpoint; 
@property (nonatomic,readonly) NSArray * proxySettings; 
@property (nonatomic,readonly) NSArray * dnsServers; 
@property (nonatomic,readonly) NSArray * dnsSearchDomains; 
@property (nonatomic,readonly) BOOL hasBrowseDescriptor; 
@property (nonatomic,readonly) NWBrowseDescriptor * browseDescriptor; 
@property (nonatomic,readonly) BOOL hasAdvertiseDescriptor; 
@property (nonatomic,readonly) NWAdvertiseDescriptor * advertiseDescriptor; 
@property (getter=isPerAppVPN,nonatomic,readonly) BOOL perAppVPN; 
@property (nonatomic,readonly) long long status; 
@property (getter=isExpensive,nonatomic,readonly) BOOL expensive; 
@property (getter=isConstrained,nonatomic,readonly) BOOL constrained; 
+(id)createStringFromStatus:(long long)arg1 ;
+(id)pathForClientID:(id)arg1 ;
+(id)allClientIDs;
+(id)pathWithProtocolBufferData:(id)arg1 ;
-(BOOL)fallbackEligible;
-(BOOL)supportsIPv4;
-(BOOL)isFiltered;
-(unsigned long long)secondsSinceInterfaceChange;
-(NSArray *)dnsServers;
-(BOOL)supportsIPv6;
-(BOOL)isLocal;
-(BOOL)isDirect;
-(BOOL)isConstrained;
-(BOOL)isExpensive;
-(id)initWithPath:(id)arg1 ;
-(NSUUID *)clientID;
-(NWParameters *)parameters;
-(BOOL)isListener;
-(id)createProtocolBufferObject;
-(NWEndpoint *)endpoint;
-(BOOL)unsatisfiedVoluntaryAgentMatchesAddress:(id)arg1 triggerImmediately:(BOOL*)arg2 ;
-(id)init;
-(NWInterface *)interface;
-(BOOL)isLinkQualityAbort;
-(BOOL)usesNetworkAgent:(id)arg1 ;
-(BOOL)hasAdvertiseDescriptor;
-(id)inactiveNetworkAgentUUIDsOnlyVoluntary:(BOOL)arg1 ;
-(int)dnsServiceID;
-(NSString *)privateDescription;
-(NWEndpoint *)effectiveRemoteEndpoint;
-(NSObject*<OS_nw_path>)internalPath;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NWParameters *)derivedParameters;
-(BOOL)isPerAppVPN;
-(id)delegateInterface;
-(long long)status;
-(unsigned)policyID;
-(BOOL)hasUnsatisfiedFallbackAgent;
-(BOOL)isViable;
-(NSArray *)dnsServersAsStrings;
-(BOOL)usesInterfaceType:(long long)arg1 ;
-(BOOL)isListenerInterfaceSpecific;
-(NWInterface *)connectedInterface;
-(BOOL)shouldProbeConnectivity;
-(NWInterface *)fallbackInterface;
-(id)networkAgentsOfType:(Class)arg1 ;
-(id)description;
-(NSString *)reasonDescription;
-(NSString *)statusAsString;
-(long long)reason;
-(long long)maximumDatagramSize;
-(NWInterface *)scopedInterface;
-(NSArray *)flows;
-(NSArray *)proxySettings;
-(NWAdvertiseDescriptor *)advertiseDescriptor;
-(BOOL)isRoaming;
-(id)copyFlowDivertToken;
-(long long)mtu;
-(BOOL)supportsDNS;
-(id)genericNetworkAgentsWithDomain:(id)arg1 type:(id)arg2 ;
-(BOOL)isFlowDivert;
-(BOOL)isEqualToPath:(id)arg1 ;
-(unsigned)filterControlUnit;
-(NWEndpoint *)effectiveLocalEndpoint;
-(BOOL)fallbackIsWeak;
-(NWBrowseDescriptor *)browseDescriptor;
-(BOOL)isEligibleForCrazyIvan46;
-(unsigned)fallbackInterfaceIndex;
-(BOOL)usesNetworkAgentType:(Class)arg1 ;
-(BOOL)hasBrowseDescriptor;
-(NSArray *)dnsSearchDomains;
-(unsigned)flowDivertAggregateUnit;
-(unsigned)flowDivertControlUnit;
-(NSArray *)gateways;
@end

