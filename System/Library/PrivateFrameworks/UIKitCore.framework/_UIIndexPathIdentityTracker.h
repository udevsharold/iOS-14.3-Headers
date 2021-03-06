/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITableView, UICollectionView, NSMutableDictionary;

@interface _UIIndexPathIdentityTracker : NSObject {

	UITableView* _tableView;
	UICollectionView* _collectionView;
	id _identityBasedDataSource;
	NSMutableDictionary* _mapping;
	BOOL _enforcesManualMapping;

}
-(id)initWithCollectionView:(id)arg1 ;
-(id)init;
-(id)_mappingIdentifierForSanitizedIndexPath:(id)arg1 ;
-(void)enforceManualMapping;
-(id)initWithTableView:(id)arg1 ;
-(void)reset;
-(id)identifierForIndexPath:(id)arg1 ;
-(void)updateWithUpdateItems:(id)arg1 ;
-(id)currentIndexPathForIdentifier:(id)arg1 ;
@end

