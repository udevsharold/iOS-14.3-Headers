/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol TIUserModelDataStoring <NSObject>
@property (readonly) BOOL isValid; 
@property (readonly) int propertiesVersion; 
@property (readonly) int durableVersion; 
@property (readonly) int transientVersion; 
@property (readonly) NSDate * propertiesLastMigrationDate; 
@property (readonly) NSDate * durableLastMigrationDate; 
@property (readonly) NSDate * transientLastMigrationDate; 
@required
-(BOOL)purgeDataForKey:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
-(int)transientVersion;
-(BOOL)updateDurableValue:(id)arg1 forKey:(id)arg2 forDate:(id)arg3;
-(BOOL)purgeDataForKeyPrefix:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
-(int)propertiesVersion;
-(id)getInputModesForKey:(id)arg1;
-(BOOL)addValue:(id)arg1 andSecondaryValue:(id)arg2 andRealValue:(id)arg3 andProperties:(id)arg4 forKey:(id)arg5 forInputMode:(id)arg6 forDate:(id)arg7;
-(NSDate *)transientLastMigrationDate;
-(BOOL)isValid;
-(id)getAllValuesForKeyPrefix:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
-(id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 fromDate:(id)arg3 toDate:(id)arg4;
-(id)getAllKnownInputModes;
-(id)getAllKnownInputModesSinceDate:(id)arg1;
-(NSDate *)propertiesLastMigrationDate;
-(int)durableVersion;
-(id)getDurableValueForKey:(id)arg1;
-(NSDate *)durableLastMigrationDate;
-(id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;

@end

