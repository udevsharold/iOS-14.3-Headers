/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GCDeviceLight;


@protocol _GCDeviceLightComponent <_GCDeviceComponent>
@property (nonatomic,copy) id deviceLightServiceConnectedHandler; 
@property (nonatomic,retain) GCDeviceLight * light; 
@required
-(GCDeviceLight *)light;
-(void)setLight:(id)arg1;
-(id)deviceLightServiceConnectedHandler;
-(void)setDeviceLightServiceConnectedHandler:(/*^block*/id)arg1;

@end

