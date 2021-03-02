/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CLSAggregate : NSObject {

	BOOL _allowWeeklyUpdates;
	NSString* _primaryDomain;

}

@property (nonatomic,readonly) BOOL allowWeeklyUpdates;              //@synthesize allowWeeklyUpdates=_allowWeeklyUpdates - In the implementation block
@property (nonatomic,retain) NSString * primaryDomain;               //@synthesize primaryDomain=_primaryDomain - In the implementation block
+(id)sharedCLSAggregate;
-(id)_aggdMethodConstructionHints;
-(id)init;
-(void)invalidateForWeeklyUpdates;
-(id)_truncateToSignificantFigureForValue:(id)arg1 numOfSignificantDigits:(int)arg2 ;
-(id)_keysForWeeklyReporting;
-(id)_aggdMethodConstructionHintsForKey:(id)arg1 ;
-(id)_messageTracerMethodConstructionHints;
-(id)_getSubdomain:(id)arg1 ;
-(id)_scalarToAddKeys;
-(id)_stringValueTypeKeys;
-(id)_allRegisteredKeys;
-(id)_needsParsingKeys;
-(id)_distributionKeys;
-(NSString *)primaryDomain;
-(id)_messageTracerMethodConstructionHintsForKey:(id)arg1 ;
-(BOOL)allowWeeklyUpdates;
-(void)_recordAGGDValue:(id)arg1 forKey:(id)arg2 ;
-(void)_recordMessageTracerValue:(id)arg1 forKey:(id)arg2 ;
-(void)recordValue:(id)arg1 forKey:(id)arg2 ;
-(void)setPrimaryDomain:(NSString *)arg1 ;
-(void)incrementValueForKey:(id)arg1 ;
-(id)_registeredKeysLookupTable;
-(id)_doubleValueTypeKeys;
@end
