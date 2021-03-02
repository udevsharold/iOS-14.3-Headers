/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class JFXCapturePreviewFrameStats, NSMutableArray, NSObject, NSString;

@interface JFXCapturePreviewStats : NSObject {

	JFXCapturePreviewFrameStats* _runningAverage;
	NSMutableArray* _stats;
	NSObject*<OS_dispatch_queue> _q;
	NSString* _name;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
-(void)clear;
-(void)setName:(NSString *)arg1 ;
-(id)add:(id)arg1 ;
-(id)init;
-(void)print;
-(NSString *)name;
-(void)_print_NoLock;
-(id)runningAverage;
-(void)printSync;
@end
