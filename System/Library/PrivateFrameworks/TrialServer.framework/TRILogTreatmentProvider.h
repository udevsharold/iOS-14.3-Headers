/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Trial/TRILogTreatmentReader.h>

@interface TRILogTreatmentProvider : TRILogTreatmentReader
+(BOOL)deleteFileAtPath:(id)arg1 ;
+(id)providerWithProjectId:(int)arg1 paths:(id)arg2 ;
+(int)projectIdFromExperiment:(id)arg1 paths:(id)arg2 ;
-(void)removeTreatment:(id)arg1 ;
-(BOOL)addTreatment:(id)arg1 ;
-(BOOL)saveTreatments:(id)arg1 ;
-(void)updatePersistedLogNamespace:(id)arg1 ;
@end
