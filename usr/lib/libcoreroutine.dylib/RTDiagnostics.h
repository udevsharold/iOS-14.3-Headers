/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>

@class RTDefaultsManager, RTPlatform, NSMutableArray;

@interface RTDiagnostics : RTService {

	RTDefaultsManager* _defaultsManager;
	RTPlatform* _platform;
	NSMutableArray* _diagnosticProviders;

}
+(BOOL)fileNameEligibleForCollection:(id)arg1 ;
+(id)createDiagnosticsURLWithError:(id*)arg1 ;
+(id)crashReports;
+(id)stringFromDateWithFormat;
+(BOOL)createArchiveSourceURL:(id)arg1 destinationURL:(id)arg2 error:(id*)arg3 ;
-(void)_shutdown;
-(id)init;
-(void)fetchPathToDiagnosticFilesWithHandler:(/*^block*/id)arg1 ;
-(id)initWithDefaultsManager:(id)arg1 platform:(id)arg2 ;
-(void)logProcessDiagnosticInformation;
-(void)addDiagnosticProvider:(id)arg1 ;
-(void)fetchPathToBackupWithHandler:(/*^block*/id)arg1 ;
-(id)_collectDiagnosticFilesWithError:(id*)arg1 ;
-(void)_fetchPathToDiagnosticFilesWithHandler:(/*^block*/id)arg1 ;
-(id)_collectBackupWithError:(id*)arg1 ;
-(void)_fetchPathToBackupWithHandler:(/*^block*/id)arg1 ;
@end

