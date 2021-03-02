/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesUI/NotesUI-Structs.h>
@interface ICKeyboardNotificationListener : NSObject {

	CGRect _keyboardFrame;

}

@property (assign,nonatomic) CGRect keyboardFrame;              //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
+(id)sharedListener;
-(void)setKeyboardFrame:(CGRect)arg1 ;
-(id)init;
-(void)dealloc;
-(CGRect)keyboardFrame;
-(void)handleKeyboardWillShow:(id)arg1 ;
-(void)handleKeyboardWillHide:(id)arg1 ;
-(CGRect)currentKeyboardFrame;
@end
