/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HUItemMapsToView.h>

@protocol HasRemoteAccessState;
@interface HUTriggerListSubheadlineItem : HFItem <HUItemMapsToView> {

	id<HasRemoteAccessState> _remoteAccessInfo;

}

@property (nonatomic,readonly) id<HasRemoteAccessState> remoteAccessInfo;              //@synthesize remoteAccessInfo=_remoteAccessInfo - In the implementation block
-(id)_attributedDescription;
-(id)init;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id<HasRemoteAccessState>)remoteAccessInfo;
-(id)resultsForRemoteAccessState:(unsigned long long)arg1 ;
-(id)_attributedDescriptionForNoRemoteAccess;
-(Class)mapsToViewClass;
-(id)initWithRemoteAccessInfo:(id)arg1 ;
@end
