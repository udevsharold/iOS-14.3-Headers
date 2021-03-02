/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXSSMotionTrackingVideoFileInputManagerDelegate;
@class NSMutableArray, NSArray;

@interface AXSSMotionTrackingVideoFileInputManager : NSObject {

	BOOL __monitoring;
	id<AXSSMotionTrackingVideoFileInputManagerDelegate> _delegate;
	NSMutableArray* __videoFileInputNames;

}

@property (assign,nonatomic) BOOL _monitoring;                                                                 //@synthesize _monitoring=__monitoring - In the implementation block
@property (nonatomic,retain) NSMutableArray * _videoFileInputNames;                                            //@synthesize _videoFileInputNames=__videoFileInputNames - In the implementation block
@property (nonatomic,copy,readonly) NSArray * videoFileInputNames; 
@property (assign,nonatomic,__weak) id<AXSSMotionTrackingVideoFileInputManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)allowVideoFileInput;
-(id)init;
-(void)startMonitoring;
-(void)dealloc;
-(void)stopMonitoring;
-(void)_update;
-(BOOL)_monitoring;
-(void)setDelegate:(id<AXSSMotionTrackingVideoFileInputManagerDelegate>)arg1 ;
-(id<AXSSMotionTrackingVideoFileInputManagerDelegate>)delegate;
-(void)set_monitoring:(BOOL)arg1 ;
-(NSMutableArray *)_videoFileInputNames;
-(NSArray *)videoFileInputNames;
-(void)_videoFileInputNamesChanged:(id)arg1 ;
-(void)set_videoFileInputNames:(NSMutableArray *)arg1 ;
@end
