/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/CKTranscriptCellProtocol.h>
#import <libobjc.A.dylib/CKTranscriptCollectionViewCellProtocol.h>

@class UILabel, NSString;

@interface CKTranscriptCollectionViewCell : UICollectionViewCell <CKTranscriptCellProtocol, CKTranscriptCollectionViewCellProtocol> {

	BOOL _wantsDrawerLayout;
	char _orientation;
	UILabel* _debugLabel;
	double _drawerPercentRevealed;
	double _associatedItemOffset;

}

@property (nonatomic,retain) UILabel * debugLabel;                      //@synthesize debugLabel=_debugLabel - In the implementation block
@property (assign,nonatomic) BOOL wantsDrawerLayout;                    //@synthesize wantsDrawerLayout=_wantsDrawerLayout - In the implementation block
@property (assign,nonatomic) char orientation;                          //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double drawerPercentRevealed;              //@synthesize drawerPercentRevealed=_drawerPercentRevealed - In the implementation block
@property (assign,nonatomic) double associatedItemOffset;               //@synthesize associatedItemOffset=_associatedItemOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)addFilter:(id)arg1 ;
-(void)clearFilters;
-(void)layoutSubviewsForDrawer;
-(void)layoutSubviewsForAlignmentContents;
-(double)associatedItemOffset;
-(void)setOrientation:(char)arg1 ;
-(double)drawerPercentRevealed;
-(void)layoutSubviewsForContents;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(UILabel *)debugLabel;
-(char)orientation;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(void)performReload:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)description;
-(void)layoutSubviews;
-(void)performReveal:(/*^block*/id)arg1 ;
-(void)prepareForReuse;
-(void)performHide:(/*^block*/id)arg1 ;
-(void)setDebugLabel:(UILabel *)arg1 ;
-(BOOL)wantsDrawerLayout;
-(void)setDrawerPercentRevealed:(double)arg1 ;
-(void)configureForChatItem:(id)arg1 context:(id)arg2 ;
-(void)setAssociatedItemOffset:(double)arg1 ;
-(void)setWantsDrawerLayout:(BOOL)arg1 ;
@end

