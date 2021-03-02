/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOGPU/IOGPU-Structs.h>
#import <IOGPU/IOGPUMTLEvent.h>
#import <libobjc.A.dylib/MTLEvent.h>

@protocol MTLDevice;
@class NSString, IOGPUMetalDevice;

@interface _IOGPUMetalMTLEvent : IOGPUMTLEvent <MTLEvent> {

	IOGPUMetalDevice*<MTLDevice> _device;
	unsigned long long _labelTraceID;
	NSString* _label;
	os_unfair_lock_s _labelLock;

}

@property (readonly) id<MTLDevice> device;                          //@synthesize device=_device - In the implementation block
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 ;
-(id)retainedLabel;
-(void)dealloc;
-(id<MTLDevice>)device;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
@end
