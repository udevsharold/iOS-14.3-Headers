/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKDetailsCell.h>

@class UILabel;

@interface CKDetailsAddMemberCell : CKDetailsCell {

	UILabel* _addLabel;

}

@property (nonatomic,retain) UILabel * addLabel;              //@synthesize addLabel=_addLabel - In the implementation block
+(double)preferredHeight;
+(Class)cellClass;
+(id)reuseIdentifier;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)addLabel;
-(void)setAddLabel:(UILabel *)arg1 ;
@end
