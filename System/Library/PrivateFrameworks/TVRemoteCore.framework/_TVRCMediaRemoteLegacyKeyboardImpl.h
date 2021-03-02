/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/_TVRCMediaRemoteKeyboardAdapterDelegate.h>
#import <TVRemoteCore/_TVRXKeyboardImpl.h>

@class _TVRXKeyboardController, _TVRCMRTelevisionWrapper, TVRCKeyboardAttributes, _TVRCMediaRemoteKeyboardAdapter, NSString;

@interface _TVRCMediaRemoteLegacyKeyboardImpl : NSObject <_TVRCMediaRemoteKeyboardAdapterDelegate, _TVRXKeyboardImpl> {

	BOOL _editing;
	_TVRXKeyboardController* _keyboardController;
	_TVRCMRTelevisionWrapper* _television;
	TVRCKeyboardAttributes* _currentAttributes;
	_TVRCMediaRemoteKeyboardAdapter* _adapter;

}

@property (assign,nonatomic) BOOL editing;                                                     //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) TVRCKeyboardAttributes * currentAttributes;                       //@synthesize currentAttributes=_currentAttributes - In the implementation block
@property (nonatomic,retain) _TVRCMediaRemoteKeyboardAdapter * adapter;                        //@synthesize adapter=_adapter - In the implementation block
@property (assign,nonatomic,__weak) _TVRXKeyboardController * keyboardController;              //@synthesize keyboardController=_keyboardController - In the implementation block
@property (nonatomic,retain) _TVRCMRTelevisionWrapper * television;                            //@synthesize television=_television - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_TVRCMediaRemoteKeyboardAdapter *)adapter;
-(BOOL)editing;
-(void)setEditing:(BOOL)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)attributes;
-(BOOL)isEditing;
-(TVRCKeyboardAttributes *)currentAttributes;
-(void)setAdapter:(_TVRCMediaRemoteKeyboardAdapter *)arg1 ;
-(_TVRCMRTelevisionWrapper *)television;
-(_TVRXKeyboardController *)keyboardController;
-(void)setKeyboardController:(_TVRXKeyboardController *)arg1 ;
-(void)sendReturnKey;
-(void)setTelevision:(_TVRCMRTelevisionWrapper *)arg1 ;
-(void)_textEditingHandlerUpdatedWithEvent:(unsigned)arg1 session:(id)arg2 ;
-(void)_sessionDidBegin:(id)arg1 ;
-(void)_sessionDidEnd:(id)arg1 ;
-(void)_sessionTextDidChange:(id)arg1 ;
-(void)_sessionAttributesDidChange:(id)arg1 ;
-(void)keyboardAdapter:(id)arg1 receivedUnexpectedTextUpdate:(id)arg2 ;
-(void)setCurrentAttributes:(TVRCKeyboardAttributes *)arg1 ;
@end
