/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VUIContextMenuTemplateControllerInterface;
@class UIView, UIContextMenuInteraction;

@interface VUIActiveInteractionView : NSObject {

	UIView* _highlightedView;
	UIContextMenuInteraction* _activeInteraction;
	id<VUIContextMenuTemplateControllerInterface> _templateInterface;

}

@property (assign,nonatomic,__weak) UIView * highlightedView;                                                     //@synthesize highlightedView=_highlightedView - In the implementation block
@property (assign,nonatomic,__weak) UIContextMenuInteraction * activeInteraction;                                 //@synthesize activeInteraction=_activeInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<VUIContextMenuTemplateControllerInterface> templateInterface;              //@synthesize templateInterface=_templateInterface - In the implementation block
+(id)sharedInstance;
-(UIView *)highlightedView;
-(void)setHighlightedView:(UIView *)arg1 ;
-(void)setActiveInteraction:(UIContextMenuInteraction *)arg1 ;
-(UIContextMenuInteraction *)activeInteraction;
-(void)setTemplateInterface:(id<VUIContextMenuTemplateControllerInterface>)arg1 ;
-(id<VUIContextMenuTemplateControllerInterface>)templateInterface;
@end
