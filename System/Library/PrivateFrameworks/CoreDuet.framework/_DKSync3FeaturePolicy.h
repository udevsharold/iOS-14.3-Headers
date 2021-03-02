/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKSync3PolicyCommonMethods.h>

@class NSDictionary, NSString, NSArray;

@interface _DKSync3FeaturePolicy : NSObject <_DKSync3PolicyCommonMethods> {

	BOOL _isSyncDisabled;
	BOOL _onlyMultiDevice;
	BOOL _onlySingleDevice;
	BOOL _requiresCharging;
	BOOL _pushTriggersSync;
	BOOL _additionsCountTowardTriggeredSyncBucket;
	BOOL _deletionsCountTowardTriggeredSyncBucket;
	BOOL _additionTriggersImmediateSync;
	BOOL _deletionTriggersImmediateSync;
	NSDictionary* _properties;
	NSString* _name;
	NSString* _feature;
	NSArray* _streamNames;
	NSArray* _sources;
	NSArray* _destinations;
	NSString* _transport;
	unsigned long long _periodicSyncCadenceInMinutes;
	unsigned long long _oldestEventToSyncInDays;
	NSArray* _requiresCompanions;

}

@property (nonatomic,retain) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
-(id)init;
-(void)setProperties:(NSDictionary *)arg1 ;
-(id)description;
-(NSDictionary *)properties;
@end
