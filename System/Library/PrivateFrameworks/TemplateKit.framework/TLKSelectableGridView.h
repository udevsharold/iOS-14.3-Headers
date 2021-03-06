/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@protocol TLKSelectableGridViewDelegate;
@class NSArray, NSMutableArray, NUIContainerGridView, NSString;

@interface TLKSelectableGridView : TLKView <NUIContainerViewDelegate> {

	long long _selectedIndex;
	NSArray* _tuples;
	id<TLKSelectableGridViewDelegate> _delegate;
	NSMutableArray* _buttons;

}

@property (nonatomic,retain) NUIContainerGridView * contentView; 
@property (nonatomic,retain) NSMutableArray * buttons;                        //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) NSArray * tuples;                                //@synthesize tuples=_tuples - In the implementation block
@property (assign,nonatomic) long long selectedIndex;                         //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (__weak) id<TLKSelectableGridViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)maxColumns;
+(unsigned long long)idealNumberOfColumnsForTitles:(id)arg1 fittingSize:(CGSize)arg2 containerView:(id)arg3 ;
-(NSMutableArray *)buttons;
-(NSArray *)tuples;
-(void)setTuples:(NSArray *)arg1 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(long long)selectedIndex;
-(void)selectableGridButtonPressed:(id)arg1 ;
-(id)arrangedEntrySubviews;
-(void)setSelectedIndex:(long long)arg1 ;
-(void)setDelegate:(id<TLKSelectableGridViewDelegate>)arg1 ;
-(id)_createButton;
-(void)setButtons:(NSMutableArray *)arg1 ;
-(id<TLKSelectableGridViewDelegate>)delegate;
@end

