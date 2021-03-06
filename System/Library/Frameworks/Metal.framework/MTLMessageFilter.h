/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice;
@interface MTLMessageFilter : NSObject {

	id<MTLDevice> _device;
	unsigned long long _messageType;

}

@property (retain,readonly) id<MTLDevice> device;                 //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long messageType;              //@synthesize messageType=_messageType - In the implementation block
+(id)filter:(unsigned long long)arg1 device:(id)arg2 ;
-(unsigned long long)messageType;
-(id)init:(unsigned long long)arg1 device:(id)arg2 ;
-(id<MTLDevice>)device;
-(void)setDevice:(id<MTLDevice>)arg1 ;
@end

