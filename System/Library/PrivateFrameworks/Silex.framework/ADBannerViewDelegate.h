/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ADBannerViewDelegate <NSObject>
@optional
-(BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
-(void)bannerViewDidLoadAd:(id)arg1;
-(void)bannerViewWillLoadAd:(id)arg1;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
-(void)bannerViewActionDidFinish:(id)arg1;

@end
