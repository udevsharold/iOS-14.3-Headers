/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@protocol WKTouchActionGestureRecognizerDelegate;
@interface WKTouchActionGestureRecognizer : UIGestureRecognizer {

	HashMap<unsigned int, WTF::OptionSet<WebCore::TouchAction>, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::OptionSet<WebCore::TouchAction> > >* _touchActionsByTouchIdentifier;
	id<WKTouchActionGestureRecognizerDelegate> _touchActionDelegate;

}
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithTouchActionDelegate:(id)arg1 ;
-(void)_updateState;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setTouchActions:(OptionSet<WebCore::TouchAction>)arg1 forTouchIdentifier:(unsigned)arg2 ;
-(void)clearTouchActionsForTouchIdentifier:(unsigned)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end
