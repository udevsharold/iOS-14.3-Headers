/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>

@class IMBalloonPluginDataSource, LPLinkView, LPLinkMetadata;

@interface CKRichLinkReplyPreviewBalloonView : CKColoredBalloonView {

	IMBalloonPluginDataSource* _dataSource;
	LPLinkView* _linkView;
	LPLinkMetadata* _linkMetadata;

}

@property (nonatomic,retain) LPLinkView * linkView;                               //@synthesize linkView=_linkView - In the implementation block
@property (nonatomic,retain) LPLinkMetadata * linkMetadata;                       //@synthesize linkMetadata=_linkMetadata - In the implementation block
@property (nonatomic,retain) IMBalloonPluginDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)setLinkView:(LPLinkView *)arg1 ;
-(void)prepareForDisplay;
-(void)setDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(LPLinkMetadata *)linkMetadata;
-(void)setLinkMetadata:(LPLinkMetadata *)arg1 ;
-(id)description;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(LPLinkView *)linkView;
-(IMBalloonPluginDataSource *)dataSource;
-(void)configureForTranscriptPlugin:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
@end

