/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UISearchField.h>
#import <libobjc.A.dylib/SUDeferredUIView.h>

@class NSString;

@interface SUDeferredUISearchField : UISearchField <SUDeferredUIView> {

	long long _deferredClearButtonMode;
	id _deferredFont;
	CGRect _deferredFrame;
	float _deferredPaddingLeft;
	float _deferredPaddingTop;
	NSString* _deferredPlaceholder;
	NSString* _deferredText;
	BOOL _isDeferringInterfaceUpdates;

}

@property (assign,getter=isDeferringInterfaceUpdates,nonatomic) BOOL deferringInterfaceUpdates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)placeholder;
-(CGRect)frame;
-(void)setFont:(id)arg1 ;
-(id)font;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)dealloc;
-(long long)clearButtonMode;
-(void)setPlaceholder:(id)arg1 ;
-(void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2 ;
-(float)paddingLeft;
-(float)paddingTop;
-(void)setFrame:(CGRect)arg1 ;
-(void)setClearButtonMode:(long long)arg1 ;
-(BOOL)isDeferringInterfaceUpdates;
-(void)setDeferringInterfaceUpdates:(BOOL)arg1 ;
-(void)_saveCurrentStateAsDeferred;
-(void)_commitDeferredInterfaceUpdates;
@end

