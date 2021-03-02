/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDCoreMotionDataCollector.h>

@interface HDCalorimetryDataCollector : HDCoreMotionDataCollector
+(BOOL)isNatalimeterAvailable;
+(BOOL)supportsCollectionForProfile:(id)arg1 ;
+(BOOL)isCoreMotionCaloriePushModelEnabled;
-(id)initWithProfile:(id)arg1 ;
-(id)persistentIdentifier;
-(double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3 ;
-(id)collectedTypes;
-(Class)coreMotionDatumClass;
-(id)queue_newDataSource;
@end
