/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface HMDBackingStoreTransactionOptions : HMFObject <HMFLogging, NSSecureCoding> {

	BOOL _mustReplay;
	BOOL _mustPush;
	unsigned long long _source;
	unsigned long long _destination;
	NSDate* _committed;
	NSString* _label;

}

@property (nonatomic,readonly) unsigned long long destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) unsigned long long source;                   //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSDate * committed;                          //@synthesize committed=_committed - In the implementation block
@property (nonatomic,readonly) NSString * label;                            //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL mustReplay;                             //@synthesize mustReplay=_mustReplay - In the implementation block
@property (nonatomic,readonly) BOOL mustPush;                               //@synthesize mustPush=_mustPush - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)defaultIDSOptions;
+(id)defaultXPCOptions;
+(id)defaultLocalOptions;
+(id)defaultPreferencesOptions;
+(id)defaultCloudOptions;
+(id)optionsWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 mustReplay:(BOOL)arg3 mustPush:(BOOL)arg4 ;
+(id)defaultResidenceOptions;
+(id)stringForHMDBackingStoreTransactionSource:(unsigned long long)arg1 ;
+(id)stringForHMDBackingStoreDestination:(unsigned long long)arg1 ;
+(id)cloudRequiresPushOptions;
+(id)localPushBackOptions;
+(id)defaultLegacyCloudOptions;
+(id)defaultMetadataCloudOptions;
-(id)_description;
-(unsigned long long)destination;
-(NSDate *)committed;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned long long)source;
-(id)logIdentifier;
-(NSString *)label;
-(id)debugString:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 ;
-(id)initWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 label:(id)arg3 mustReplay:(BOOL)arg4 mustPush:(BOOL)arg5 ;
-(BOOL)mustReplay;
-(BOOL)mustPush;
@end

