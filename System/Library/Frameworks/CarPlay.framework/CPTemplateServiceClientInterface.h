/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPTemplateServiceClientInterface <CPBannerDelegate>
@required
-(void)clientExceededHierarchyDepthLimit;
-(void)clientPushedIllegalTemplateOfClass:(id)arg1;
-(void)clientExceededTabBarTabLimit;
-(void)clientExceededAudioMetadataThrottleLimit;
-(void)templateIdentifierDidPop:(id)arg1;
-(void)templateIdentifierDidDismiss:(id)arg1;
-(void)updateInterestingLayoutGuideWithInsets:(UIEdgeInsets)arg1;
-(void)clientPushNowPlayingTemplateAnimated:(BOOL)arg1;

@end

