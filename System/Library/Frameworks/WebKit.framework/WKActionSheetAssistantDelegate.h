/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WKActionSheetAssistantDelegate <NSObject>
@optional
-(id)dataDetectionContextForActionSheetAssistant:(id)arg1 positionInformation:(const InteractionInformationAtPosition*)arg2;
-(void)actionSheetAssistant:(id)arg1 willStartInteractionWithElement:(id)arg2;
-(void)actionSheetAssistant:(id)arg1 shareElementWithImage:(id)arg2 rect:(CGRect)arg3;
-(void)actionSheetAssistantDidStopInteraction:(id)arg1;
-(void)removeContextMenuViewIfPossibleForActionSheetAssistant:(id)arg1;
-(void)actionSheetAssistant:(id)arg1 getAlternateURLForImage:(id)arg2 completion:(/*^block*/id)arg3;
-(id)selectedTextForActionSheetAssistant:(id)arg1;
-(BOOL)actionSheetAssistant:(id)arg1 showCustomSheetForElement:(id)arg2;
-(CGRect*)unoccludedWindowBoundsForActionSheetAssistant:(id)arg1;
-(id)createTargetedContextMenuHintForActionSheetAssistant:(id)arg1;
-(void)updatePositionInformationForActionSheetAssistant:(id)arg1;

@required
-(BOOL)actionSheetAssistant:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;
-(void)actionSheetAssistant:(id)arg1 performAction:(BOOL)arg2;
-(RetainPtr<NSArray>*)actionSheetAssistant:(id)arg1 decideActionsForElement:(id)arg2 defaultActions:(RetainPtr<NSArray>*)arg3;
-(Optional<WebKit::InteractionInformationAtPosition>*)positionInformationForActionSheetAssistant:(id)arg1;
-(void)actionSheetAssistant:(id)arg1 shareElementWithURL:(id)arg2 rect:(CGRect)arg3;
-(void)actionSheetAssistant:(id)arg1 openElementAtLocation:(CGPoint)arg2;

@end

