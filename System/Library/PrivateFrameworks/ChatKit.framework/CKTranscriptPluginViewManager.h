/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMMultiDict, NSMutableDictionary;

@interface CKTranscriptPluginViewManager : NSObject {

	IMMultiDict* _reusablePluginViewsByClassName;
	NSMutableDictionary* _pluginViewToReuseDelegateMap;

}
+(id)sharedInstance;
-(void)didReceiveMemoryWarning;
-(id)init;
-(void)dealloc;
-(BOOL)_objectSupportsPluginViewReuse:(id)arg1 ;
-(void)_registerPluginView:(id)arg1 withReuseDelegate:(id)arg2 ;
-(id)_pointerKeyForPluginView:(id)arg1 ;
-(id)dequeuePluginViewForBalloonController:(id)arg1 ;
-(void)enqueuePluginViewForReuse:(id)arg1 ;
-(void)resetState;
@end
