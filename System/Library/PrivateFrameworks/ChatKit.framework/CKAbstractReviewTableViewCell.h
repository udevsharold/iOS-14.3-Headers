/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSString;

@interface CKAbstractReviewTableViewCell : UITableViewCell {

	unsigned long long _size;
	UILabel* _nameLabel;
	UILabel* _lastModifiedLabel;
	UILabel* _sizeLabel;

}

@property (nonatomic,retain) UILabel * nameLabel;                      //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * lastModifiedLabel;              //@synthesize lastModifiedLabel=_lastModifiedLabel - In the implementation block
@property (nonatomic,retain) UILabel * sizeLabel;                      //@synthesize sizeLabel=_sizeLabel - In the implementation block
@property (nonatomic,retain) NSString * mainText; 
@property (nonatomic,retain) NSString * subheadingText; 
@property (assign,nonatomic) unsigned long long size;                  //@synthesize size=_size - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSizeLabel:(UILabel *)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(unsigned long long)size;
-(void)setMainText:(NSString *)arg1 ;
-(void)setSubheadingText:(NSString *)arg1 ;
-(UILabel *)lastModifiedLabel;
-(NSString *)subheadingText;
-(void)setLastModifiedLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(NSString *)mainText;
-(UILabel *)sizeLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
@end

