/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBAppLayout, SBDisplayItem, XBApplicationSnapshot, UIImage;

@interface SBAppSwitcherSnapshotCacheEntry : NSObject {

	BOOL _fromFullSizeSnapshotRequest;
	BOOL _needsUpdate;
	SBAppLayout* _appLayout;
	SBDisplayItem* _displayItem;
	XBApplicationSnapshot* _snapshot;
	UIImage* _snapshotImage;

}
-(id)description;
@end

