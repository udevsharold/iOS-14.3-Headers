/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RenderBox/RenderBox-Structs.h>
@interface RBDevice : NSObject {

	refcounted_ptr<RB::Device>* _device;
	objc_ptr<NSObject<OS_dispatch_queue> *> _queue;
	atomic<unsigned int> _pending_collect;

}

@property (nonatomic,readonly) Device* rb_device; 
@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,readonly) id<MTLCaptureScope> captureScope; 
+(BOOL)isSupported;
+(id)allDevices;
+(id)sharedDefaultDevice;
+(id)sharedDevice:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)dealloc;
-(id<MTLDevice>)device;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<MTLCaptureScope>)captureScope;
-(Device*)rb_device;
-(void)collectResources;
-(id)pipelineDescriptions:(id)arg1 extraColorFormats:(id)arg2 ;
@end

