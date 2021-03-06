/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@protocol HFServiceLikeItem;
@class HFItem, HMHome;

@interface HUAcccessorySceneListContentItem : HFItem {

	unsigned long long _contentSource;
	HFItem*<HFServiceLikeItem> _serviceLikeItem;
	HMHome* _home;

}

@property (nonatomic,readonly) unsigned long long contentSource;                        //@synthesize contentSource=_contentSource - In the implementation block
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> serviceLikeItem;              //@synthesize serviceLikeItem=_serviceLikeItem - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                           //@synthesize home=_home - In the implementation block
-(unsigned long long)contentSource;
-(HMHome *)home;
-(HFItem*<HFServiceLikeItem>)serviceLikeItem;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithContentSource:(unsigned long long)arg1 serviceLikeItem:(id)arg2 home:(id)arg3 ;
@end

