/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, NSArray, NSString;

@interface STSHeaderView : UICollectionReusableView {

	UILabel* _label;
	NSArray* _constraints;
	NSString* _title;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)updateConstraints;
-(UIEdgeInsets)contentInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end
