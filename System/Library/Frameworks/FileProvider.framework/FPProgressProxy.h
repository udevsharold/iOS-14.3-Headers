/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@class NSURL, NSObservation;

@interface FPProgressProxy : NSProgress {

	id _subscriber;
	NSURL* _fileURL;
	BOOL _shouldStopAccessingURL;
	NSObservation* _totalUnitCountObservation;
	NSObservation* _fractionCompletedObservation;
	BOOL _didSetupParentProgress;
	BOOL _updateFileCount;

}

@property (assign,nonatomic) BOOL updateFileCount;              //@synthesize updateFileCount=_updateFileCount - In the implementation block
+(void)initialize;
-(void)setCancellationHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)stopTrackingIfStarted;
-(void)setProgressDidSetupHandler:(/*^block*/id)arg1 ;
-(void)startTrackingFileURL:(id)arg1 kind:(id)arg2 ;
-(void)_updateWithProgress:(id)arg1 ;
-(BOOL)updateFileCount;
-(void)setUpdateFileCount:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
