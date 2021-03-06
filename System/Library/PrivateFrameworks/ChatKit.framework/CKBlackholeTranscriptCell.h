/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIDateLabel;

@interface CKBlackholeTranscriptCell : UITableViewCell {

	UILabel* _fromLabel;
	UIDateLabel* _dateLabel;
	UILabel* _bodyLabel;

}

@property (nonatomic,retain) UILabel * fromLabel;                  //@synthesize fromLabel=_fromLabel - In the implementation block
@property (nonatomic,retain) UIDateLabel * dateLabel;              //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                  //@synthesize bodyLabel=_bodyLabel - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIDateLabel *)dateLabel;
-(void)configureForMessageItem:(id)arg1 showSender:(BOOL)arg2 ;
-(UILabel *)fromLabel;
-(UILabel *)bodyLabel;
-(void)prepareForReuse;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(void)setFromLabel:(UILabel *)arg1 ;
-(void)setDateLabel:(UIDateLabel *)arg1 ;
@end

