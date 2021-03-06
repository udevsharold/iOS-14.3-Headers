/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, SearchUIDetailedRowModel;


@protocol SearchUIDetailedRowComponent <NSObject>
@property (nonatomic,retain) UIView * view; 
@property (nonatomic,retain) SearchUIDetailedRowModel * rowModel; 
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate; 
@required
+(BOOL)supportsRowModel:(id)arg1;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(UIView *)view;
-(void)updateWithContacts:(id)arg1;
-(void)updateWithRowModel:(id)arg1;
-(SearchUIDetailedRowModel *)rowModel;
-(void)setFeedbackDelegate:(id)arg1;
-(BOOL)shouldVerticallyCenter;
-(void)setView:(id)arg1;
-(id)setupView;
-(void)setRowModel:(id)arg1;

@end

