/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface HRSpeedBumpItem : NSObject {

	NSString* _title;
	NSString* _body;
	NSArray* _bubbles;
	id _delegate;

}

@property (nonatomic,readonly) NSString * title;               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * body;                //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) NSArray * bubbles;              //@synthesize bubbles=_bubbles - In the implementation block
@property (assign,nonatomic,__weak) id delegate;               //@synthesize delegate=_delegate - In the implementation block
-(NSString *)body;
-(NSArray *)bubbles;
-(void)setDelegate:(id)arg1 ;
-(NSString *)title;
-(id)delegate;
-(id)initWithTitle:(id)arg1 body:(id)arg2 bubbles:(id)arg3 ;
@end
