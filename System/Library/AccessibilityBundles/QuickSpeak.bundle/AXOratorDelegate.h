/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/AccessibilityBundles/QuickSpeak.bundle/QuickSpeak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXOratorDelegate <NSObject>
@optional
-(void)oratorDidResumeSpeaking:(id)arg1;
-(void)oratorShouldFetchNextElements:(id)arg1 shouldScrollOpaqueProviderIfNecessary:(BOOL)arg2;
-(void)oratorDidFinishSpeaking:(id)arg1;
-(void)oratorDidChangeSpeakingRate:(id)arg1;
-(void)oratorDidPauseSpeaking:(id)arg1;
-(void)oratorDidStartSpeaking:(id)arg1;
-(void)oratorDidCancelSpeaking:(id)arg1;
-(void)orator:(id)arg1 willSpeakRange:(NSRange)arg2 ofContent:(id)arg3;

@end
