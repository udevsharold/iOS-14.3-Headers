/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLFindMyAccessoryFirmwareUpdateDelegate, OS_dispatch_queue;
#import <CoreLocation/CoreLocation-Structs.h>
@class NSObject;

@interface CLFindMyAccessoryFirmwareUpdateManager : NSObject {

	id<CLFindMyAccessoryFirmwareUpdateDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	unique_ptr<CLConnectionClient, std::__1::default_delete<CLConnectionClient> >* _connection;

}

@property (assign,nonatomic,__weak) id<CLFindMyAccessoryFirmwareUpdateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)handleMessage:(shared_ptr<CLConnectionMessage>*)arg1 ;
-(void)updateFirmwareForDevice:(id)arg1 withAssetURL:(id)arg2 ;
-(void)getPersonalizationInfoForDevice:(id)arg1 ;
-(void)abortFirmwareUpdateForDevice:(id)arg1 ;
-(void)handleInterruption;
-(void)setDelegate:(id<CLFindMyAccessoryFirmwareUpdateDelegate>)arg1 ;
-(id<CLFindMyAccessoryFirmwareUpdateDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
@end
