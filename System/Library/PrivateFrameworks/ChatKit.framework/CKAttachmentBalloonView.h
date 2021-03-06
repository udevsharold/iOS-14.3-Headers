/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>

@protocol CKAttachmentView;
@class UIView;

@interface CKAttachmentBalloonView : CKColoredBalloonView {

	UIView*<CKAttachmentView> _attachmentView;

}

@property (nonatomic,retain) UIView*<CKAttachmentView> attachmentView;              //@synthesize attachmentView=_attachmentView - In the implementation block
-(id)overlayImage;
-(void)prepareForDisplay;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(void)setMediaObject:(id)arg1 ;
-(void)dealloc;
-(void)configureForComposition:(id)arg1 ;
-(UIView*<CKAttachmentView>)attachmentView;
-(void)setAttachmentView:(UIView*<CKAttachmentView>)arg1 ;
-(void)transferUpdated:(id)arg1 ;
-(void)richIconDidChange:(id)arg1 ;
-(id)description;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)configureForMessagePart:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
@end

