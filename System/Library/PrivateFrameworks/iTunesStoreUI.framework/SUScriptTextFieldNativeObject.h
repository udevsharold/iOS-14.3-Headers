/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptNativeObject.h>
#import <libobjc.A.dylib/SUScriptTextFieldDelegate.h>

@class SUScriptTextFieldDelegate, NSString;

@interface SUScriptTextFieldNativeObject : SUScriptNativeObject <SUScriptTextFieldDelegate> {

	SUScriptTextFieldDelegate* _textFieldDelegate;

}

@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long keyboardType; 
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,copy) NSString * value; 
@property (assign,nonatomic) double width; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(NSString *)placeholder;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(long long)autocapitalizationType;
-(void)setWidth:(double)arg1 ;
-(NSString *)value;
-(double)width;
-(long long)autocorrectionType;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(void)_textDidChange:(id)arg1 ;
-(long long)keyboardType;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)dealloc;
-(void)setValue:(NSString *)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)setAutocorrectionType:(long long)arg1 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(id)_nativeObjectDelegate;
-(void)_setNativeObjectDelegate:(id)arg1 ;
-(void)_textDidEndEditingOnExit:(id)arg1 ;
-(void)_sendScriptDidChange;
@end
