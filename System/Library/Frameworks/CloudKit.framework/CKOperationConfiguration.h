/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_xpc_object;
@class CKContainer, NSObject, NSString, NSDictionary, NSNumber, NSMutableDictionary, CKSchedulerActivity;

@interface CKOperationConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _allowsCellularAccess;
	BOOL _longLived;
	BOOL _preferAnonymousRequests;
	BOOL _automaticallyRetryNetworkFailures;
	BOOL _xpcActivityAutomaticallyDefer;
	BOOL _discretionarySchedulingForEntireOperation;
	BOOL _allowsBackgroundNetworking;
	BOOL _isCloudKitSupportOperation;
	BOOL _hasQualityOfService;
	BOOL _hasContainer;
	BOOL _hasAllowsCellularAccess;
	BOOL _hasLongLived;
	BOOL _hasTimeoutIntervalForRequest;
	BOOL _hasTimeoutIntervalForResource;
	BOOL _hasAutomaticallyRetryNetworkFailures;
	BOOL _hasDiscretionaryNetworkBehavior;
	BOOL _hasXPCActivity;
	BOOL _hasXPCActivityAutomaticallyDefer;
	BOOL _hasSchedulerActivity;
	BOOL _hasDiscretionarySchedulingForEntireOperation;
	BOOL _hasPreferAnonymousRequests;
	BOOL _hasAllowsBackgroundNetworking;
	BOOL _hasSourceApplicationBundleIdentifier;
	BOOL _hasSourceApplicationSecondaryIdentifier;
	BOOL _hasApplicationBundleIdentifierOverrideForContainerAccess;
	BOOL _hasApplicationBundleIdentifierOverrideForNetworkAttribution;
	BOOL _hasAdditionalRequestHTTPHeaders;
	BOOL _hasIsCloudKitSupportOperation;
	BOOL _hasCacheDeleteAvailableSpaceClass;
	CKContainer* _container;
	long long _qualityOfService;
	double _timeoutIntervalForRequest;
	double _timeoutIntervalForResource;
	unsigned long long _discretionaryNetworkBehavior;
	NSObject*<OS_xpc_object> _xpcActivity;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSString* _applicationBundleIdentifierOverrideForContainerAccess;
	NSString* _applicationBundleIdentifierOverrideForNetworkAttribution;
	NSDictionary* _additionalRequestHTTPHeaders;
	NSNumber* _cacheDeleteAvailableSpaceClass;
	NSMutableDictionary* _unitTestOverrides;
	CKSchedulerActivity* _schedulerActivity;

}

@property (assign,nonatomic) BOOL hasQualityOfService;                                                       //@synthesize hasQualityOfService=_hasQualityOfService - In the implementation block
@property (assign,nonatomic) BOOL hasContainer;                                                              //@synthesize hasContainer=_hasContainer - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsCellularAccess;                                                   //@synthesize hasAllowsCellularAccess=_hasAllowsCellularAccess - In the implementation block
@property (assign,nonatomic) BOOL hasLongLived;                                                              //@synthesize hasLongLived=_hasLongLived - In the implementation block
@property (assign,nonatomic) BOOL hasTimeoutIntervalForRequest;                                              //@synthesize hasTimeoutIntervalForRequest=_hasTimeoutIntervalForRequest - In the implementation block
@property (assign,nonatomic) BOOL hasTimeoutIntervalForResource;                                             //@synthesize hasTimeoutIntervalForResource=_hasTimeoutIntervalForResource - In the implementation block
@property (assign,nonatomic) BOOL hasAutomaticallyRetryNetworkFailures;                                      //@synthesize hasAutomaticallyRetryNetworkFailures=_hasAutomaticallyRetryNetworkFailures - In the implementation block
@property (assign,nonatomic) BOOL hasDiscretionaryNetworkBehavior;                                           //@synthesize hasDiscretionaryNetworkBehavior=_hasDiscretionaryNetworkBehavior - In the implementation block
@property (assign,nonatomic) BOOL hasXPCActivity;                                                            //@synthesize hasXPCActivity=_hasXPCActivity - In the implementation block
@property (assign,nonatomic) BOOL hasXPCActivityAutomaticallyDefer;                                          //@synthesize hasXPCActivityAutomaticallyDefer=_hasXPCActivityAutomaticallyDefer - In the implementation block
@property (assign,nonatomic) BOOL hasSchedulerActivity;                                                      //@synthesize hasSchedulerActivity=_hasSchedulerActivity - In the implementation block
@property (assign,nonatomic) BOOL hasDiscretionarySchedulingForEntireOperation;                              //@synthesize hasDiscretionarySchedulingForEntireOperation=_hasDiscretionarySchedulingForEntireOperation - In the implementation block
@property (assign,nonatomic) BOOL hasPreferAnonymousRequests;                                                //@synthesize hasPreferAnonymousRequests=_hasPreferAnonymousRequests - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsBackgroundNetworking;                                             //@synthesize hasAllowsBackgroundNetworking=_hasAllowsBackgroundNetworking - In the implementation block
@property (assign,nonatomic) BOOL hasSourceApplicationBundleIdentifier;                                      //@synthesize hasSourceApplicationBundleIdentifier=_hasSourceApplicationBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSourceApplicationSecondaryIdentifier;                                   //@synthesize hasSourceApplicationSecondaryIdentifier=_hasSourceApplicationSecondaryIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasApplicationBundleIdentifierOverrideForContainerAccess;                  //@synthesize hasApplicationBundleIdentifierOverrideForContainerAccess=_hasApplicationBundleIdentifierOverrideForContainerAccess - In the implementation block
@property (assign,nonatomic) BOOL hasApplicationBundleIdentifierOverrideForNetworkAttribution;               //@synthesize hasApplicationBundleIdentifierOverrideForNetworkAttribution=_hasApplicationBundleIdentifierOverrideForNetworkAttribution - In the implementation block
@property (assign,nonatomic) BOOL hasAdditionalRequestHTTPHeaders;                                           //@synthesize hasAdditionalRequestHTTPHeaders=_hasAdditionalRequestHTTPHeaders - In the implementation block
@property (assign,nonatomic) BOOL hasIsCloudKitSupportOperation;                                             //@synthesize hasIsCloudKitSupportOperation=_hasIsCloudKitSupportOperation - In the implementation block
@property (assign,nonatomic) BOOL hasCacheDeleteAvailableSpaceClass;                                         //@synthesize hasCacheDeleteAvailableSpaceClass=_hasCacheDeleteAvailableSpaceClass - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * unitTestOverrides;                                        //@synthesize unitTestOverrides=_unitTestOverrides - In the implementation block
@property (assign,nonatomic) BOOL xpcActivityAutomaticallyDefer;                                             //@synthesize xpcActivityAutomaticallyDefer=_xpcActivityAutomaticallyDefer - In the implementation block
@property (assign,nonatomic) BOOL discretionarySchedulingForEntireOperation;                                 //@synthesize discretionarySchedulingForEntireOperation=_discretionarySchedulingForEntireOperation - In the implementation block
@property (nonatomic,copy) NSString * _sourceApplicationSecondaryIdentifier;                                 //@synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier - In the implementation block
@property (assign,nonatomic) BOOL automaticallyRetryNetworkFailures;                                         //@synthesize automaticallyRetryNetworkFailures=_automaticallyRetryNetworkFailures - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcActivity;                                           //@synthesize xpcActivity=_xpcActivity - In the implementation block
@property (nonatomic,copy) CKSchedulerActivity * schedulerActivity;                                          //@synthesize schedulerActivity=_schedulerActivity - In the implementation block
@property (assign,nonatomic) unsigned long long discretionaryNetworkBehavior;                                //@synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior - In the implementation block
@property (assign,nonatomic) BOOL preferAnonymousRequests;                                                   //@synthesize preferAnonymousRequests=_preferAnonymousRequests - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForContainerAccess;                 //@synthesize applicationBundleIdentifierOverrideForContainerAccess=_applicationBundleIdentifierOverrideForContainerAccess - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForNetworkAttribution;              //@synthesize applicationBundleIdentifierOverrideForNetworkAttribution=_applicationBundleIdentifierOverrideForNetworkAttribution - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;                                     //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationSecondaryIdentifier; 
@property (nonatomic,copy) NSDictionary * additionalRequestHTTPHeaders;                                      //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (assign,nonatomic) BOOL isCloudKitSupportOperation;                                                //@synthesize isCloudKitSupportOperation=_isCloudKitSupportOperation - In the implementation block
@property (nonatomic,copy) NSNumber * cacheDeleteAvailableSpaceClass;                                        //@synthesize cacheDeleteAvailableSpaceClass=_cacheDeleteAvailableSpaceClass - In the implementation block
@property (assign,nonatomic) BOOL allowsBackgroundNetworking;                                                //@synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking - In the implementation block
@property (nonatomic,retain) CKContainer * container;                                                        //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                                     //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;                                                      //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,getter=isLongLived,nonatomic) BOOL longLived;                                              //@synthesize longLived=_longLived - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForRequest;                                               //@synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForResource;                                              //@synthesize timeoutIntervalForResource=_timeoutIntervalForResource - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isLongLived;
-(BOOL)hasContainer;
-(NSString *)sourceApplicationBundleIdentifier;
-(BOOL)isCloudKitSupportOperation;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(NSString *)applicationBundleIdentifierOverrideForNetworkAttribution;
-(void)setLongLived:(BOOL)arg1 ;
-(void)setHasAdditionalRequestHTTPHeaders:(BOOL)arg1 ;
-(void)setXpcActivityAutomaticallyDefer:(BOOL)arg1 ;
-(void)setHasTimeoutIntervalForResource:(BOOL)arg1 ;
-(void)setHasPreferAnonymousRequests:(BOOL)arg1 ;
-(CKSchedulerActivity *)schedulerActivity;
-(CKContainer *)container;
-(BOOL)hasSourceApplicationBundleIdentifier;
-(void)setHasIsCloudKitSupportOperation:(BOOL)arg1 ;
-(void)setContainer:(CKContainer *)arg1 ;
-(void)setApplicationBundleIdentifierOverride:(id)arg1 ;
-(NSString *)applicationBundleIdentifierOverrideForContainerAccess;
-(id)init;
-(unsigned long long)discretionaryNetworkBehavior;
-(BOOL)xpcActivityAutomaticallyDefer;
-(BOOL)hasSchedulerActivity;
-(BOOL)hasApplicationBundleIdentifierOverrideForContainerAccess;
-(NSMutableDictionary *)unitTestOverrides;
-(void)setHasLongLived:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)allowsBackgroundNetworking;
-(BOOL)hasIsCloudKitSupportOperation;
-(void)setHasAutomaticallyRetryNetworkFailures:(BOOL)arg1 ;
-(void)setHasAllowsBackgroundNetworking:(BOOL)arg1 ;
-(void)setHasApplicationBundleIdentifierOverrideForContainerAccess:(BOOL)arg1 ;
-(void)setDiscretionarySchedulingForEntireOperation:(BOOL)arg1 ;
-(void)setHasTimeoutIntervalForRequest:(BOOL)arg1 ;
-(void)setIsCloudKitSupportOperation:(BOOL)arg1 ;
-(void)setDiscretionaryNetworkBehavior:(unsigned long long)arg1 ;
-(void)setHasApplicationBundleIdentifierOverrideForNetworkAttribution:(BOOL)arg1 ;
-(BOOL)hasXPCActivityAutomaticallyDefer;
-(void)set_sourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(BOOL)automaticallyRetryNetworkFailures;
-(BOOL)hasDiscretionarySchedulingForEntireOperation;
-(void)setHasXPCActivity:(BOOL)arg1 ;
-(BOOL)discretionarySchedulingForEntireOperation;
-(void)setHasXPCActivityAutomaticallyDefer:(BOOL)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasAdditionalRequestHTTPHeaders;
-(BOOL)hasSourceApplicationSecondaryIdentifier;
-(void)setCacheDeleteAvailableSpaceClass:(NSNumber *)arg1 ;
-(BOOL)hasPreferAnonymousRequests;
-(void)setHasSourceApplicationSecondaryIdentifier:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasCacheDeleteAvailableSpaceClass;
-(BOOL)hasAllowsCellularAccess;
-(void)setQualityOfServiceWithoutQoSChecks:(long long)arg1 ;
-(void)setHasSchedulerActivity:(BOOL)arg1 ;
-(void)setXpcActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(id)resolveAgainstGenericConfiguration:(id)arg1 ;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(NSNumber *)cacheDeleteAvailableSpaceClass;
-(void)setTimeoutIntervalForRequest:(double)arg1 ;
-(void)setHasDiscretionarySchedulingForEntireOperation:(BOOL)arg1 ;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setPreferAnonymousRequests:(BOOL)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForContainerAccess:(NSString *)arg1 ;
-(BOOL)hasQualityOfService;
-(BOOL)hasApplicationBundleIdentifierOverrideForNetworkAttribution;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setAllowsBackgroundNetworking:(BOOL)arg1 ;
-(void)setUnitTestOverrides:(NSMutableDictionary *)arg1 ;
-(NSString *)_sourceApplicationSecondaryIdentifier;
-(double)timeoutIntervalForResource;
-(void)setSchedulerActivity:(CKSchedulerActivity *)arg1 ;
-(BOOL)hasTimeoutIntervalForRequest;
-(void)setApplicationBundleIdentifierOverrideForNetworkAttribution:(NSString *)arg1 ;
-(void)setHasContainer:(BOOL)arg1 ;
-(BOOL)hasDiscretionaryNetworkBehavior;
-(long long)qualityOfService;
-(void)setAutomaticallyRetryNetworkFailuresIfNotSet:(BOOL)arg1 ;
-(BOOL)hasXPCActivity;
-(void)setTimeoutIntervalForResource:(double)arg1 ;
-(BOOL)hasAllowsBackgroundNetworking;
-(void)setAutomaticallyRetryNetworkFailures:(BOOL)arg1 ;
-(NSObject*<OS_xpc_object>)xpcActivity;
-(BOOL)preferAnonymousRequests;
-(void)setHasQualityOfService:(BOOL)arg1 ;
-(BOOL)hasAutomaticallyRetryNetworkFailures;
-(double)timeoutIntervalForRequest;
-(void)setHasCacheDeleteAvailableSpaceClass:(BOOL)arg1 ;
-(void)setHasSourceApplicationBundleIdentifier:(BOOL)arg1 ;
-(BOOL)hasTimeoutIntervalForResource;
-(BOOL)allowsCellularAccess;
-(void)setHasAllowsCellularAccess:(BOOL)arg1 ;
-(BOOL)hasLongLived;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHasDiscretionaryNetworkBehavior:(BOOL)arg1 ;
@end
