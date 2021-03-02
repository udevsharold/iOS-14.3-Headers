/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextField.h>

@interface _MFMailRecipientTextField : UITextField {

	BOOL _isShowingDictationPlaceholder;

}

@property (nonatomic,readonly) BOOL isShowingDictationPlaceholder;              //@synthesize isShowingDictationPlaceholder=_isShowingDictationPlaceholder - In the implementation block
-(void)_handleKeyUIEvent:(id)arg1 ;
-(id)insertDictationResultPlaceholder;
-(void)paste:(id)arg1 ;
-(BOOL)isShowingDictationPlaceholder;
-(id)_previousKeyResponder;
-(id)customOverlayContainer;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
@end
