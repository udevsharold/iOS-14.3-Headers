/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol SUIKSearchResultsCollectionViewControllerDelegate;
@class NSArray, UICollectionViewDiffableDataSource;

@interface _SUIKSearchResultsUpdateOperation : NSOperation {

	NSArray* _results;
	UICollectionViewDiffableDataSource* _diffableDataSource;
	id<SUIKSearchResultsCollectionViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSArray * results;                                                           //@synthesize results=_results - In the implementation block
@property (assign,nonatomic,__weak) UICollectionViewDiffableDataSource * diffableDataSource;                     //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SUIKSearchResultsCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSArray *)results;
-(void)main;
-(void)setResults:(NSArray *)arg1 ;
-(id)initWithResults:(id)arg1 diffableDataSource:(id)arg2 delegate:(id)arg3 ;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(void)setDelegate:(id<SUIKSearchResultsCollectionViewControllerDelegate>)arg1 ;
-(id<SUIKSearchResultsCollectionViewControllerDelegate>)delegate;
@end
