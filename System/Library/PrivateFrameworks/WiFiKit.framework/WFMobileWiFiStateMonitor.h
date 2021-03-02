/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WiFiKit/WiFiKit-Structs.h>
@class WFLinkQuality;

@interface WFMobileWiFiStateMonitor : NSObject {

	long long _state;
	/*^block*/id _handler;
	WiFiManagerClientRef _manager;
	WiFiDeviceClientRef _device;
	WFLinkQuality* _linkQuality;

}

@property (assign,nonatomic) long long state;                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) WiFiManagerClientRef manager;              //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef device;                //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) WFLinkQuality * linkQuality;               //@synthesize linkQuality=_linkQuality - In the implementation block
@property (copy) id handler;                                            //@synthesize handler=_handler - In the implementation block
-(WFLinkQuality *)linkQuality;
-(void)setManager:(WiFiManagerClientRef)arg1 ;
-(id)handler;
-(void)startMonitoring;
-(void)dealloc;
-(void)stopMonitoring;
-(WiFiDeviceClientRef)device;
-(long long)state;
-(void)_updateWithDeviceAttachment:(WiFiDeviceClientRef)arg1 ;
-(void)_updateState;
-(void)setHandler:(id)arg1 ;
-(WiFiManagerClientRef)manager;
-(void)setLinkQuality:(WFLinkQuality *)arg1 ;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(void)setDevice:(WiFiDeviceClientRef)arg1 ;
-(void)setState:(long long)arg1 ;
@end
