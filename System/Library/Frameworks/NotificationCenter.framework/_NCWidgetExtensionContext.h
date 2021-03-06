/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <Foundation/NSExtensionContext.h>

@class _NCWidgetViewController;

@interface _NCWidgetExtensionContext : NSExtensionContext {

	CGSize _maxCompactSize;
	CGSize _maxExpandedSize;
	_NCWidgetViewController* _hostViewController;
	long long _activeDisplayMode;
	long long _largestAvailableDisplayMode;

}

@property (assign,setter=_setHostViewController:,getter=_hostViewController,nonatomic,__weak) _NCWidgetViewController * hostViewController;                  //@synthesize hostViewController=_hostViewController - In the implementation block
@property (assign,setter=_setActiveDisplayMode:,getter=_activeDisplayMode,nonatomic) long long activeDisplayMode;                                            //@synthesize activeDisplayMode=_activeDisplayMode - In the implementation block
@property (assign,setter=_setLargestAvailableDisplayMode:,getter=_largestAvailableDisplayMode,nonatomic) long long largestAvailableDisplayMode;              //@synthesize largestAvailableDisplayMode=_largestAvailableDisplayMode - In the implementation block
-(void)_setLargestAvailableDisplayMode:(long long)arg1 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)widgetLargestAvailableDisplayMode;
-(long long)_activeDisplayMode;
-(id)_hostViewController;
-(BOOL)widgetIsForeground;
-(void)setWidgetLargestAvailableDisplayMode:(long long)arg1 ;
-(long long)widgetActiveDisplayMode;
-(void)openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CGSize)widgetMaximumSizeForDisplayMode:(long long)arg1 ;
-(CGSize)_maximumSizeForDisplayMode:(long long)arg1 ;
-(void)_setHostViewController:(id)arg1 ;
-(void)_setMaximumSize:(CGSize)arg1 forDisplayMode:(long long)arg2 ;
-(long long)_largestAvailableDisplayMode;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(void)_setActiveDisplayMode:(long long)arg1 ;
@end

