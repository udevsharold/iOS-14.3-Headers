/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDate, NSArray, NSURLSession, NSDictionary;

@interface NSPConfiguration : NSObject <NSSecureCoding, NSCopying> {

	NSString* _waldoHost;
	BOOL _ignoreInvalidCerts;
	NSNumber* _version;
	NSNumber* _timestamp;
	NSNumber* _enabled;
	NSDate* _resurrectionDate;
	NSArray* _appRules;
	NSNumber* _waldoEnabled;
	NSNumber* _waldoPort;
	NSString* _waldoPath;
	NSNumber* _waldoRequestTimeout;
	NSString* _waldoLeafOID;
	NSNumber* _waldoRevocationFailClosed;
	NSURLSession* _waldoSession;
	NSDictionary* _edgeSets;
	NSNumber* _persistMetrics;
	long long _diskVersion;
	NSPConfiguration* _defaults;

}

@property (readonly) long long diskVersion;                            //@synthesize diskVersion=_diskVersion - In the implementation block
@property (retain) NSPConfiguration * defaults;                        //@synthesize defaults=_defaults - In the implementation block
@property (readonly) NSNumber * version;                               //@synthesize version=_version - In the implementation block
@property (readonly) NSNumber * timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (copy) NSNumber * enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (copy) NSDate * resurrectionDate;                            //@synthesize resurrectionDate=_resurrectionDate - In the implementation block
@property (copy) NSArray * appRules;                                   //@synthesize appRules=_appRules - In the implementation block
@property (copy) NSNumber * waldoEnabled;                              //@synthesize waldoEnabled=_waldoEnabled - In the implementation block
@property (copy) NSString * waldoHost; 
@property (copy) NSNumber * waldoPort;                                 //@synthesize waldoPort=_waldoPort - In the implementation block
@property (copy) NSString * waldoPath;                                 //@synthesize waldoPath=_waldoPath - In the implementation block
@property (copy) NSNumber * waldoRequestTimeout;                       //@synthesize waldoRequestTimeout=_waldoRequestTimeout - In the implementation block
@property (copy) NSString * waldoLeafOID;                              //@synthesize waldoLeafOID=_waldoLeafOID - In the implementation block
@property (copy) NSNumber * waldoRevocationFailClosed;                 //@synthesize waldoRevocationFailClosed=_waldoRevocationFailClosed - In the implementation block
@property (nonatomic,retain) NSURLSession * waldoSession;              //@synthesize waldoSession=_waldoSession - In the implementation block
@property (assign) BOOL ignoreInvalidCerts;                            //@synthesize ignoreInvalidCerts=_ignoreInvalidCerts - In the implementation block
@property (nonatomic,retain) NSDictionary * edgeSets;                  //@synthesize edgeSets=_edgeSets - In the implementation block
@property (copy) NSNumber * persistMetrics;                            //@synthesize persistMetrics=_persistMetrics - In the implementation block
@property (readonly) NSDate * dayPassExpirationDate; 
@property (readonly) NSDate * earliestEnableCheckDate; 
@property (readonly) BOOL isDead; 
+(id)defaultConfiguration;
+(BOOL)supportsSecureCoding;
-(NSPConfiguration *)defaults;
-(void)merge:(id)arg1 ;
-(id)copyTLVData;
-(void)setWaldoEnabled:(NSNumber *)arg1 ;
-(NSNumber *)timestamp;
-(void)removeFromKeychain;
-(void)setup;
-(id)getEdgeSetForSigningIdentifier:(id)arg1 ;
-(void)enumerateEdgeSetsWithBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIgnoreInvalidCerts:(BOOL)arg1 ;
-(NSNumber *)enabled;
-(id)createWaldoURLWithDomain:(id)arg1 timestamp:(id)arg2 ;
-(NSDate *)dayPassExpirationDate;
-(BOOL)ignoreInvalidCerts;
-(id)getCurrentKeyBagForAppRule:(id)arg1 ;
-(long long)diskVersion;
-(NSString *)waldoLeafOID;
-(void)setWaldoLeafOID:(NSString *)arg1 ;
-(NSURLSession *)waldoSession;
-(NSNumber *)waldoRequestTimeout;
-(void)teardown;
-(void)setWaldoPath:(NSString *)arg1 ;
-(NSDate *)resurrectionDate;
-(BOOL)isDead;
-(NSNumber *)waldoRevocationFailClosed;
-(id)initWithCoder:(id)arg1 ;
-(void)setResurrectionDate:(NSDate *)arg1 ;
-(NSString *)waldoHost;
-(void)setWaldoHost:(NSString *)arg1 ;
-(void)saveToKeychain;
-(void)setEdgeSets:(NSDictionary *)arg1 ;
-(id)getEdgeSetForAppRule:(id)arg1 ;
-(NSArray *)appRules;
-(NSDictionary *)edgeSets;
-(BOOL)evaluateEnableRatios;
-(NSNumber *)persistMetrics;
-(NSNumber *)waldoPort;
-(BOOL)resetStaleEdgeSets;
-(id)loadBuiltinAppRulesFromDisk;
-(void)setDefaults:(NSPConfiguration *)arg1 ;
-(void)incrementSessionCountersOnFirstLaunch;
-(void)setWaldoRequestTimeout:(NSNumber *)arg1 ;
-(NSNumber *)version;
-(void)setAppRules:(NSArray *)arg1 ;
-(void)setWaldoPort:(NSNumber *)arg1 ;
-(id)initFromTLVs:(id)arg1 ;
-(void)updateNetworkAgents;
-(NSDate *)earliestEnableCheckDate;
-(NSString *)waldoPath;
-(void)setWaldoSession:(NSURLSession *)arg1 ;
-(id)initFromKeychain;
-(void)setWaldoRevocationFailClosed:(NSNumber *)arg1 ;
-(void)setEnabled:(NSNumber *)arg1 ;
-(void)setPersistMetrics:(NSNumber *)arg1 ;
-(id)initWithTimestamp:(id)arg1 fromDictionary:(id)arg2 waldoSource:(long long)arg3 ;
-(id)copyAgentResultsForAppRule:(id)arg1 ;
-(NSNumber *)waldoEnabled;
-(void)encodeWithCoder:(id)arg1 ;
@end
