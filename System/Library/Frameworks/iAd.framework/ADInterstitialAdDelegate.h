/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ADInterstitialAdDelegate <NSObject>
@optional
-(void)interstitialAdDidLoad:(id)arg1;
-(BOOL)interstitialAdActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
-(void)interstitialAdWillLoad:(id)arg1;
-(void)interstitialAdActionDidFinish:(id)arg1;

@required
-(void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
-(void)interstitialAdDidUnload:(id)arg1;

@end
