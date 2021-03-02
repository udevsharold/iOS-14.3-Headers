/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextInputUI/TextInputUI-Structs.h>
@class TIKeyboardInputManagerStub;

@interface TUIKeyboardBackendController : NSObject {

	TIKeyboardInputManagerStub* _inputManager;

}

@property (nonatomic,retain) TIKeyboardInputManagerStub * inputManager;              //@synthesize inputManager=_inputManager - In the implementation block
+(id)sharedInstance;
-(void)setInputManager:(TIKeyboardInputManagerStub *)arg1 ;
-(void)syncToKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performHitTestForTouchEvents:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 requestToken:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(TIKeyboardInputManagerStub *)inputManager;
-(void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
