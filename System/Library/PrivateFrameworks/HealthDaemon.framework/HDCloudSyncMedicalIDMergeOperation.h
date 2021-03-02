/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@class _HKMedicalIDData;

@interface HDCloudSyncMedicalIDMergeOperation : HDCloudSyncOperation {

	_HKMedicalIDData* _localMedicalIDData;
	_HKMedicalIDData* _cloudMedicalIDData;
	_HKMedicalIDData* _mergedMedicalIDData;

}

@property (nonatomic,retain) _HKMedicalIDData * localMedicalIDData;                 //@synthesize localMedicalIDData=_localMedicalIDData - In the implementation block
@property (nonatomic,retain) _HKMedicalIDData * cloudMedicalIDData;                 //@synthesize cloudMedicalIDData=_cloudMedicalIDData - In the implementation block
@property (nonatomic,readonly) _HKMedicalIDData * mergedMedicalIDData;              //@synthesize mergedMedicalIDData=_mergedMedicalIDData - In the implementation block
-(void)main;
-(_HKMedicalIDData *)cloudMedicalIDData;
-(void)setCloudMedicalIDData:(_HKMedicalIDData *)arg1 ;
-(void)setLocalMedicalIDData:(_HKMedicalIDData *)arg1 ;
-(_HKMedicalIDData *)mergedMedicalIDData;
-(id)_legacyDateSavedBasedMergeForCloudMedicalID:(id)arg1 localMedicalIDData:(id)arg2 ;
-(_HKMedicalIDData *)localMedicalIDData;
@end
