/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DifferentialPrivacy/_DPReportGenerator.h>

@interface _DPPrioReporter : _DPReportGenerator
-(void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2 ;
-(id)reportPrioKeys:(id)arg1 storage:(id)arg2 ;
-(id)keysWithDefaultValues;
-(id)defaultRecordsWithValues:(id)arg1 key:(id)arg2 properties:(id)arg3 ;
-(id)reportToPrioRecords:(id)arg1 forKey:(id)arg2 parameters:(id)arg3 storage:(id)arg4 ;
-(void)deleteRecordsForKey:(id)arg1 storage:(id)arg2 ;
-(id)jsonReportFromObject:(id)arg1 ;
-(id)reportPrioRecords:(id)arg1 ;
@end

